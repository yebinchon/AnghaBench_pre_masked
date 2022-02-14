
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_3__ TYPE_1__ ;


struct mbuf {scalar_t__ m_len; } ;
typedef enum xdr_op { ____Placeholder_xdr_op } xdr_op ;
struct TYPE_3__ {int x_op; char* x_base; scalar_t__ x_handy; struct mbuf* x_private; int * x_ops; } ;
typedef TYPE_1__ XDR ;


 int FUNC_0 (int ,char*) ;
 int VAR_0 ;
 struct mbuf* FUNC_1 (struct mbuf*) ;
 int VAR_1 ;

void
FUNC_2(XDR *VAR_2, struct mbuf *VAR_3, enum xdr_op VAR_4)
{

 FUNC_0(VAR_3 != ((void*)0), ("xdrmbuf_create with NULL mbuf chain"));
 VAR_2->x_op = VAR_4;
 VAR_2->x_ops = &VAR_1;
 VAR_2->x_base = (char *) VAR_3;
 if (VAR_4 == VAR_0) {
  VAR_3 = FUNC_1(VAR_3);
  VAR_2->x_private = VAR_3;
  VAR_2->x_handy = VAR_3->m_len;
 } else {
  VAR_2->x_private = VAR_3;
  VAR_2->x_handy = 0;
 }
}
