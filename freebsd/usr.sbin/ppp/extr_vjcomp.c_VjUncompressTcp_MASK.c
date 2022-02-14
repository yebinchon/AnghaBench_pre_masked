
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


typedef int u_char ;
struct mbuf {int dummy; } ;
struct TYPE_2__ {int slstat; int cslc; } ;
struct ipcp {int my_compproto; TYPE_1__ vj; } ;


 int VAR_0 ;
 int VAR_1 ;
 int * FUNC_0 (struct mbuf*) ;
 int VAR_2 ;
 int VAR_3 ;
 int FUNC_1 (struct mbuf*) ;
 int FUNC_2 (struct mbuf*) ;
 struct mbuf* FUNC_3 (struct mbuf*,int *,int,int ) ;
 struct mbuf* FUNC_4 (struct mbuf*) ;
 int FUNC_5 (struct mbuf*,int ) ;
 struct mbuf* FUNC_6 (struct mbuf*,int *,int) ;
 int FUNC_7 (int **,int,int ,int *,int *,int) ;

__attribute__((used)) static struct mbuf *
FUNC_8(struct ipcp *VAR_4, struct mbuf *VAR_5, u_char VAR_6)
{
  u_char *VAR_7;
  int VAR_8, VAR_9, VAR_10;
  u_char VAR_11[VAR_0 + VAR_1];

  VAR_5 = FUNC_4(VAR_5);
  VAR_9 = VAR_8 = FUNC_2(VAR_5);
  if (VAR_6 == VAR_3) {




    VAR_7 = FUNC_0(VAR_5);
    VAR_8 = FUNC_7(&VAR_7, VAR_8, VAR_6, &VAR_4->vj.cslc, &VAR_4->vj.slstat,
                            (VAR_4->my_compproto >> 8) & 255);
    if (VAR_8 <= 0) {
      FUNC_1(VAR_5);
      VAR_5 = ((void*)0);
    } else
      FUNC_5(VAR_5, VAR_2);
    return VAR_5;
  }






  if (VAR_8 > VAR_1)
    VAR_8 = VAR_1;
  VAR_10 = VAR_8;
  VAR_7 = VAR_11 + VAR_0;
  VAR_5 = FUNC_6(VAR_5, VAR_7, VAR_10);
  VAR_8 = FUNC_7(&VAR_7, VAR_9, VAR_6, &VAR_4->vj.cslc, &VAR_4->vj.slstat,
                          (VAR_4->my_compproto >> 8) & 255);
  if (VAR_8 <= 0) {
    FUNC_1(VAR_5);
    return ((void*)0);
  }
  VAR_8 -= VAR_9;
  VAR_8 += VAR_10;

  VAR_5 = FUNC_3(VAR_5, VAR_7, VAR_8, 0);
  FUNC_5(VAR_5, VAR_2);

  return VAR_5;
}
