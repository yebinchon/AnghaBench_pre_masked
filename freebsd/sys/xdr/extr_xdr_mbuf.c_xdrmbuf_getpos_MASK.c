
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_3__ TYPE_1__ ;


typedef scalar_t__ u_int ;
struct mbuf {struct mbuf* m_next; scalar_t__ m_len; } ;
struct TYPE_3__ {scalar_t__ x_handy; scalar_t__ x_private; scalar_t__ x_base; } ;
typedef TYPE_1__ XDR ;


 int FUNC_0 (struct mbuf*,char*) ;

__attribute__((used)) static u_int
FUNC_1(XDR *VAR_0)
{
 struct mbuf *VAR_1 = (struct mbuf *) VAR_0->x_base;
 struct mbuf *VAR_2 = (struct mbuf *) VAR_0->x_private;
 u_int VAR_3 = 0;

 while (VAR_1 && VAR_1 != VAR_2) {
  VAR_3 += VAR_1->m_len;
  VAR_1 = VAR_1->m_next;
 }
 FUNC_0(VAR_1, ("Corrupted mbuf chain"));

 return (VAR_3 + VAR_0->x_handy);
}
