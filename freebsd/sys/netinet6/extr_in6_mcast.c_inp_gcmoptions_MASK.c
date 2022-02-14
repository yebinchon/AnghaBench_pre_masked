
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct ip6_moptions {int im6o_head; } ;
struct in6_multi {struct ifnet* in6m_ifp; } ;
struct in6_mfilter {struct in6_multi* im6f_in6m; } ;
struct ifnet {int if_vnet; } ;


 int FUNC_0 () ;
 int FUNC_1 (int ) ;
 int VAR_0 ;
 int FUNC_2 (struct ip6_moptions*,int ) ;
 int FUNC_3 (struct in6_mfilter*) ;
 int FUNC_4 (struct in6_multi*,struct in6_mfilter*) ;
 struct in6_mfilter* FUNC_5 (int *) ;
 int FUNC_6 (struct in6_mfilter*) ;
 int FUNC_7 (int *,struct in6_mfilter*) ;

__attribute__((used)) static void
FUNC_8(struct ip6_moptions *VAR_1)
{
 struct in6_mfilter *VAR_2;
 struct in6_multi *VAR_3;
 struct ifnet *VAR_4;

 while ((VAR_2 = FUNC_5(&VAR_1->im6o_head)) != ((void*)0)) {
                FUNC_7(&VAR_1->im6o_head, VAR_2);

                FUNC_3(VAR_2);
                if ((VAR_3 = VAR_2->im6f_in6m) != ((void*)0)) {
                        if ((VAR_4 = VAR_3->in6m_ifp) != ((void*)0)) {
                                FUNC_1(VAR_4->if_vnet);
                                (void)FUNC_4(VAR_3, VAR_2);
                                FUNC_0();
                        } else {
                                (void)FUNC_4(VAR_3, VAR_2);
                        }
                }
                FUNC_6(VAR_2);
        }
        FUNC_2(VAR_1, VAR_0);
}
