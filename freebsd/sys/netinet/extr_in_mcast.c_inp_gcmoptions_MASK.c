
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct ip_moptions {int imo_head; } ;
struct in_multi {struct ifnet* inm_ifp; } ;
struct in_mfilter {struct in_multi* imf_inm; } ;
struct ifnet {int if_vnet; } ;


 int FUNC_0 () ;
 int FUNC_1 (int ) ;
 int VAR_0 ;
 int FUNC_2 (struct ip_moptions*,int ) ;
 int FUNC_3 (struct in_mfilter*) ;
 int FUNC_4 (struct in_multi*,struct in_mfilter*) ;
 struct in_mfilter* FUNC_5 (int *) ;
 int FUNC_6 (struct in_mfilter*) ;
 int FUNC_7 (int *,struct in_mfilter*) ;

__attribute__((used)) static void
FUNC_8(struct ip_moptions *VAR_1)
{
 struct in_mfilter *VAR_2;
 struct in_multi *VAR_3;
 struct ifnet *VAR_4;

 while ((VAR_2 = FUNC_5(&VAR_1->imo_head)) != ((void*)0)) {
  FUNC_7(&VAR_1->imo_head, VAR_2);

  FUNC_3(VAR_2);
  if ((VAR_3 = VAR_2->imf_inm) != ((void*)0)) {
   if ((VAR_4 = VAR_3->inm_ifp) != ((void*)0)) {
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
