
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int u_short ;
typedef int u_char ;
struct mbuf {int dummy; } ;


 struct mbuf* FUNC_0 (struct mbuf*,int*,int,int) ;

struct mbuf *
FUNC_1(struct mbuf *VAR_0, u_short VAR_1, unsigned VAR_2, int VAR_3)
{
  u_char VAR_4[2];

  VAR_4[0] = VAR_1 >> 8;
  VAR_4[1] = VAR_1 & 0xff;

  if (VAR_2 && VAR_4[0] == 0)
    VAR_0 = FUNC_0(VAR_0, VAR_4 + 1, 1, VAR_3);
  else
    VAR_0 = FUNC_0(VAR_0, VAR_4, 2, VAR_3);

  return VAR_0;
}
