
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_3__ TYPE_1__ ;


struct mbuf {int m_len; struct mbuf* m_next; } ;
struct TYPE_3__ {scalar_t__ x_op; int x_handy; struct mbuf* x_private; int * x_ops; } ;
typedef TYPE_1__ XDR ;


 int FUNC_0 (int,char*) ;
 scalar_t__ VAR_0 ;
 int FUNC_1 (struct mbuf*) ;
 struct mbuf* FUNC_2 (struct mbuf*) ;
 scalar_t__ FUNC_3 (struct mbuf*,int *) ;
 int VAR_1 ;

void
FUNC_4(XDR *VAR_2, struct mbuf *VAR_3)
{
 struct mbuf *VAR_4;

 FUNC_0(VAR_2->x_ops == &VAR_1 && VAR_2->x_op == VAR_0,
     ("xdrmbuf_append: invalid XDR stream"));

 if (FUNC_3(VAR_3, ((void*)0)) == 0) {
  FUNC_1(VAR_3);
  return;
 }

 VAR_4 = (struct mbuf *) VAR_2->x_private;
 VAR_4->m_next = VAR_3;

 VAR_4 = FUNC_2(VAR_3);
 VAR_2->x_private = VAR_4;
 VAR_2->x_handy = VAR_4->m_len;
}
