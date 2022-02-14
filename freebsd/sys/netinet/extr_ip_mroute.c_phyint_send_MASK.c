
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct vif {int dummy; } ;
struct mbuf {int m_len; } ;
struct ip {int ip_hl; } ;


 int VAR_0 ;
 int FUNC_0 (struct mbuf*) ;
 int FUNC_1 () ;
 struct mbuf* FUNC_2 (struct mbuf*,int ) ;
 struct mbuf* FUNC_3 (struct mbuf*,int) ;
 int FUNC_4 (struct vif*,struct mbuf*) ;

__attribute__((used)) static void
FUNC_5(struct ip *VAR_1, struct vif *VAR_2, struct mbuf *VAR_3)
{
    struct mbuf *VAR_4;
    int VAR_5 = VAR_1->ip_hl << 2;

    FUNC_1();






    VAR_4 = FUNC_2(VAR_3, VAR_0);
    if (VAR_4 && (!FUNC_0(VAR_4) || VAR_4->m_len < VAR_5))
 VAR_4 = FUNC_3(VAR_4, VAR_5);
    if (VAR_4 == ((void*)0))
 return;

    FUNC_4(VAR_2, VAR_4);
}
