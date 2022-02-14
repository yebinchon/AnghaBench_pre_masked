
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_4__ TYPE_2__ ;
typedef struct TYPE_3__ TYPE_1__ ;


typedef int u_short ;
typedef int u_char ;
struct pred1_state {int dummy; } ;
struct mbuf {int m_len; scalar_t__ m_offset; } ;
struct TYPE_4__ {TYPE_1__* link; } ;
struct ccp {int uncompin; int compin; TYPE_2__ fsm; } ;
struct TYPE_3__ {int name; } ;


 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 scalar_t__ VAR_3 ;
 int* FUNC_0 (struct mbuf*) ;
 int VAR_4 ;
 int FUNC_1 (struct pred1_state*,int*,int*,int) ;
 int FUNC_2 (struct pred1_state*,int*,int*,int) ;
 int FUNC_3 (TYPE_2__*) ;
 int FUNC_4 (int*,int) ;
 int FUNC_5 (int ,char*,int,...) ;
 int FUNC_6 (struct mbuf*) ;
 struct mbuf* FUNC_7 (scalar_t__,int ) ;
 int FUNC_8 (struct mbuf*) ;

__attribute__((used)) static struct mbuf *
FUNC_9(void *VAR_5, struct ccp *VAR_6, u_short *VAR_7, struct mbuf *VAR_8)
{
  struct pred1_state *VAR_9 = (struct pred1_state *)VAR_5;
  u_char *VAR_10, *VAR_11;
  int VAR_12, VAR_13, VAR_14;
  struct mbuf *VAR_15;
  u_char *VAR_16;
  u_short VAR_17;

  VAR_15 = FUNC_7(VAR_3 + 2, VAR_4);
  VAR_10 = FUNC_0(VAR_8);
  VAR_13 = FUNC_8(VAR_8);
  VAR_11 = VAR_16 = FUNC_0(VAR_15);
  *VAR_11++ = *VAR_10 & 0177;
  VAR_12 = *VAR_10++ << 8;
  *VAR_11++ = *VAR_10;
  VAR_12 += *VAR_10++;
  VAR_6->uncompin += VAR_12 & 0x7fff;
  if (VAR_12 & 0x8000) {
    VAR_14 = FUNC_2(VAR_9, VAR_10, VAR_11, VAR_13 - 4);
    VAR_6->compin += VAR_13;
    VAR_12 &= 0x7fff;
    if (VAR_12 != VAR_14) {
      FUNC_5(VAR_1, "Pred1: Length error (got %d, not %d)\n", VAR_14, VAR_12);
      FUNC_3(&VAR_6->fsm);
      FUNC_6(VAR_8);
      FUNC_6(VAR_15);
      return ((void*)0);
    }
    VAR_10 += VAR_13 - 4;
    VAR_11 += VAR_14;
  } else if (VAR_12 + 4 != VAR_13) {
    FUNC_5(VAR_1, "Pred1: Length error (got %d, not %d)\n", VAR_12 + 4, VAR_13);
    FUNC_3(&VAR_6->fsm);
    FUNC_6(VAR_15);
    FUNC_6(VAR_8);
    return ((void*)0);
  } else {
    VAR_6->compin += VAR_12;
    FUNC_1(VAR_9, VAR_10, VAR_11, VAR_12);
    VAR_10 += VAR_12;
    VAR_11 += VAR_12;
  }
  *VAR_11++ = *VAR_10++;
  *VAR_11++ = *VAR_10++;
  VAR_17 = FUNC_4(VAR_16, VAR_15->m_len = VAR_11 - VAR_16);
  if (VAR_17 == VAR_0) {
    VAR_15->m_offset += 2;
    VAR_15->m_len -= 4;
    VAR_11 = FUNC_0(VAR_15);
    *VAR_7 = *VAR_11++;
    if (*VAR_7 & 1) {
      VAR_15->m_offset++;
      VAR_15->m_len--;
    } else {
      VAR_15->m_offset += 2;
      VAR_15->m_len -= 2;
      *VAR_7 = (*VAR_7 << 8) | *VAR_11++;
    }
    FUNC_6(VAR_8);
    return VAR_15;
  } else {
    const char *VAR_18 = *FUNC_0(VAR_8) & 0x80 ? "" : "un";
    FUNC_5(VAR_2, "Pred1Input: fcs = 0x%04x (%scompressed), len = 0x%x,"
       " olen = 0x%x\n", VAR_17, VAR_18, VAR_12, VAR_13);
    FUNC_5(VAR_1, "%s: Bad %scompressed CRC-16\n",
               VAR_6->fsm.link->name, VAR_18);
    FUNC_3(&VAR_6->fsm);
    FUNC_6(VAR_15);
  }
  FUNC_6(VAR_8);
  return ((void*)0);
}
