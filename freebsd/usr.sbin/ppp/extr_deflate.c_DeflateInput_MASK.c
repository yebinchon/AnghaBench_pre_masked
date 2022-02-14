
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


typedef int u_short ;
typedef int u_char ;
struct mbuf {int m_len; int m_offset; struct mbuf* m_next; } ;
struct TYPE_2__ {int avail_in; int* next_out; int avail_out; char* msg; void* next_in; } ;
struct deflate_state {int seqno; int uncomp_rec; TYPE_1__ cx; } ;
struct ccp {int compin; int uncompin; int fsm; } ;


 int VAR_0 ;
 void* VAR_1 ;
 int VAR_2 ;
 int VAR_3 ;
 void* FUNC_0 (struct mbuf*) ;
 int VAR_4 ;
 int VAR_5 ;
 int VAR_6 ;
 int VAR_7 ;
 int VAR_8 ;
 int FUNC_1 (int *) ;
 int* VAR_9 ;
 int FUNC_2 (TYPE_1__*,int) ;
 int FUNC_3 (int ,char*,struct mbuf*) ;
 int FUNC_4 (int ,char*,...) ;
 struct mbuf* FUNC_5 (struct mbuf*) ;
 int FUNC_6 (struct mbuf*) ;
 void* FUNC_7 (int,int ) ;
 struct mbuf* FUNC_8 (struct mbuf*,int*,int) ;

__attribute__((used)) static struct mbuf *
FUNC_9(void *VAR_10, struct ccp *VAR_11, u_short *VAR_12, struct mbuf *VAR_13)
{
  struct deflate_state *VAR_14 = (struct deflate_state *)VAR_10;
  struct mbuf *VAR_15, *VAR_16, *VAR_17;
  u_char *VAR_18;
  int VAR_19, VAR_20;
  int VAR_21, VAR_22, VAR_23, VAR_24;
  u_char VAR_25[2];

  FUNC_3(VAR_3, "DeflateInput: Decompress packet:", VAR_13);
  VAR_17 = VAR_13 = FUNC_8(VAR_13, VAR_25, 2);
  VAR_19 = 2;


  VAR_21 = (VAR_25[0] << 8) + VAR_25[1];
  FUNC_4(VAR_3, "DeflateInput: Seq %d\n", VAR_21);
  if (VAR_21 != VAR_14->seqno) {
    if (VAR_21 <= VAR_14->uncomp_rec)





      VAR_14->seqno = VAR_21;
    else {
      FUNC_4(VAR_2, "DeflateInput: Seq error: Got %d, expected %d\n",
                VAR_21, VAR_14->seqno);
      FUNC_6(VAR_17);
      FUNC_1(&VAR_11->fsm);
      return ((void*)0);
    }
  }
  VAR_14->seqno++;
  VAR_14->uncomp_rec = 0;


  VAR_16 = VAR_15 = FUNC_7(VAR_0, VAR_4);


  VAR_18 = FUNC_0(VAR_15);
  VAR_18[0] = '\0';






  VAR_14->cx.next_in = FUNC_0(VAR_13);
  VAR_14->cx.avail_in = VAR_13->m_len;
  VAR_14->cx.next_out = VAR_18 + 1;
  VAR_14->cx.avail_out = 1;
  VAR_19 += VAR_13->m_len;

  VAR_22 = VAR_13->m_next ? VAR_5 : VAR_8;
  VAR_24 = 1;
  VAR_20 = 0;

  while (1) {
    if ((VAR_23 = FUNC_2(&VAR_14->cx, VAR_22)) != VAR_6) {
      if (VAR_23 == VAR_7)
        break;
      FUNC_4(VAR_2, "DeflateInput: inflate returned %d (%s)\n",
                VAR_23, VAR_14->cx.msg ? VAR_14->cx.msg : "");
      FUNC_6(VAR_16);
      FUNC_6(VAR_13);
      FUNC_1(&VAR_11->fsm);
      return ((void*)0);
    }

    if (VAR_22 == VAR_8 && VAR_14->cx.avail_out != 0)
      break;

    if (VAR_14->cx.avail_in == 0 && VAR_13 && (VAR_13 = FUNC_5(VAR_13)) != ((void*)0)) {

      VAR_14->cx.next_in = FUNC_0(VAR_13);
      VAR_19 += (VAR_14->cx.avail_in = VAR_13->m_len);
      if (VAR_13->m_next == ((void*)0))
        VAR_22 = VAR_8;
    }

    if (VAR_14->cx.avail_out == 0) {

      if (VAR_24) {
        if (!(VAR_18[1] & 1)) {

          VAR_18[0] = VAR_18[1];
          VAR_14->cx.next_out--;
          VAR_14->cx.avail_out = VAR_0-1;
        } else
          VAR_14->cx.avail_out = VAR_0-2;
        VAR_24 = 0;
      } else {
        VAR_20 += (VAR_15->m_len = VAR_0);
        VAR_15->m_next = FUNC_7(VAR_0, VAR_4);
        VAR_15 = VAR_15->m_next;
        VAR_14->cx.next_out = FUNC_0(VAR_15);
        VAR_14->cx.avail_out = VAR_0;
      }
    }
  }

  if (VAR_13 != ((void*)0))
    FUNC_6(VAR_13);

  if (VAR_24) {
    FUNC_4(VAR_2, "DeflateInput: Length error\n");
    FUNC_6(VAR_16);
    FUNC_1(&VAR_11->fsm);
    return ((void*)0);
  }

  VAR_20 += (VAR_15->m_len = VAR_0 - VAR_14->cx.avail_out);

  *VAR_12 = ((u_short)VAR_18[0] << 8) | VAR_18[1];
  VAR_16->m_offset += 2;
  VAR_16->m_len -= 2;
  VAR_20 -= 2;

  VAR_11->compin += VAR_19;
  VAR_11->uncompin += VAR_20;

  FUNC_4(VAR_3, "DeflateInput: %d => %d bytes, proto 0x%04x\n",
            VAR_19, VAR_20, *VAR_12);





  VAR_14->cx.next_out = VAR_9;
  VAR_14->cx.avail_out = sizeof VAR_9;
  VAR_14->cx.next_in = VAR_1;
  VAR_14->cx.avail_in = sizeof VAR_1;
  FUNC_2(&VAR_14->cx, VAR_8);

  return VAR_16;
}
