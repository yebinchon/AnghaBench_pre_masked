
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_3__ TYPE_1__ ;


struct mbuf {struct mbuf* m_next; } ;
struct TYPE_3__ {scalar_t__ x_op; int x_handy; int * x_private; int * x_base; int * x_ops; } ;
typedef TYPE_1__ XDR ;


 int FUNC_0 (int,char*) ;
 int VAR_0 ;
 int VAR_1 ;
 scalar_t__ VAR_2 ;
 int FUNC_1 (struct mbuf*,int ) ;
 struct mbuf* FUNC_2 (int ,int ) ;
 int VAR_3 ;

struct mbuf *
FUNC_3(XDR *VAR_4)
{
 struct mbuf *VAR_5, *VAR_6;

 FUNC_0(VAR_4->x_ops == &VAR_3 && VAR_4->x_op == VAR_2,
     ("xdrmbuf_append: invalid XDR stream"));

 VAR_5 = (struct mbuf *) VAR_4->x_base;
 VAR_6 = (struct mbuf *) VAR_4->x_private;
 if (VAR_5 != VAR_6) {
  while (VAR_5->m_next != VAR_6)
   VAR_5 = VAR_5->m_next;
  VAR_5->m_next = ((void*)0);
  VAR_4->x_private = ((void*)0);
 } else {
  VAR_4->x_base = ((void*)0);
  VAR_4->x_private = ((void*)0);
 }

 if (VAR_6)
  FUNC_1(VAR_6, VAR_4->x_handy);
 else
  VAR_6 = FUNC_2(VAR_1, VAR_0);
 return (VAR_6);
}
