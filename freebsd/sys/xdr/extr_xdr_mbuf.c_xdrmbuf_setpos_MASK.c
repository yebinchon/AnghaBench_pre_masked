
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_3__ TYPE_1__ ;


typedef scalar_t__ u_int ;
struct mbuf {scalar_t__ m_len; struct mbuf* m_next; } ;
typedef int bool_t ;
struct TYPE_3__ {scalar_t__ x_handy; void* x_private; scalar_t__ x_base; } ;
typedef TYPE_1__ XDR ;


 int FUNC_0 (struct mbuf*,char*) ;
 int VAR_0 ;

__attribute__((used)) static bool_t
FUNC_1(XDR *VAR_1, u_int VAR_2)
{
 struct mbuf *VAR_3 = (struct mbuf *) VAR_1->x_base;

 while (VAR_3 && VAR_2 > VAR_3->m_len) {
  VAR_2 -= VAR_3->m_len;
  VAR_3 = VAR_3->m_next;
 }
 FUNC_0(VAR_3, ("Corrupted mbuf chain"));

 VAR_1->x_private = (void *) VAR_3;
 VAR_1->x_handy = VAR_2;

 return (VAR_0);
}
