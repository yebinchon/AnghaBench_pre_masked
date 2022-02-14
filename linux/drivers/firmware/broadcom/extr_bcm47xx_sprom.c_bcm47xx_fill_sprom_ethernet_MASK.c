
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int u8 ;
struct ssb_sprom {int * il0mac; int et2phyaddr; int et2mdcport; int * et2mac; int et1phyaddr; int et1mdcport; int * et1mac; int et0phyaddr; int et0mdcport; int * et0mac; } ;


 int FUNC_0 (int *,int ) ;
 scalar_t__ FUNC_1 (int *) ;
 int FUNC_2 (int *,int *) ;
 int VAR_0 ;
 int FUNC_3 (char const*,char*,int *,int) ;
 int FUNC_4 (char const*,int *,char*,int *,int ,int) ;

__attribute__((used)) static void FUNC_5(struct ssb_sprom *VAR_1,
     const char *VAR_2, bool VAR_3)
{
 bool VAR_4 = VAR_3;

 FUNC_3(VAR_2, "et0macaddr", VAR_1->et0mac, VAR_3);
 FUNC_4(VAR_2, ((void*)0), "et0mdcport", &VAR_1->et0mdcport, 0,
        VAR_3);
 FUNC_4(VAR_2, ((void*)0), "et0phyaddr", &VAR_1->et0phyaddr, 0,
        VAR_3);

 FUNC_3(VAR_2, "et1macaddr", VAR_1->et1mac, VAR_3);
 FUNC_4(VAR_2, ((void*)0), "et1mdcport", &VAR_1->et1mdcport, 0,
        VAR_3);
 FUNC_4(VAR_2, ((void*)0), "et1phyaddr", &VAR_1->et1phyaddr, 0,
        VAR_3);

 FUNC_3(VAR_2, "et2macaddr", VAR_1->et2mac, VAR_4);
 FUNC_4(VAR_2, ((void*)0), "et2mdcport", &VAR_1->et2mdcport, 0, VAR_4);
 FUNC_4(VAR_2, ((void*)0), "et2phyaddr", &VAR_1->et2phyaddr, 0, VAR_4);

 FUNC_3(VAR_2, "macaddr", VAR_1->il0mac, VAR_3);
 FUNC_3(VAR_2, "il0macaddr", VAR_1->il0mac, VAR_3);







 if (!FUNC_1(VAR_1->il0mac)) {
  u8 VAR_5[6];

  FUNC_3(((void*)0), "et0macaddr", VAR_5, 0);
  if (FUNC_1(VAR_5)) {
   int VAR_6 = FUNC_0(VAR_5, VAR_0);

   if (!VAR_6) {
    FUNC_2(VAR_1->il0mac, VAR_5);
    VAR_0++;
   }
  }
 }
}
