
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct an_req {int an_len; int an_type; } ;
struct an_ltv_aplist {int an_ap4; int an_ap3; int an_ap2; int an_ap1; } ;
typedef int areq ;


 int VAR_0 ;
 int VAR_1 ;
 int FUNC_0 (char const*,struct an_req*) ;
 int FUNC_1 (char*,int ) ;
 int FUNC_2 (char*) ;

__attribute__((used)) static void
FUNC_3(const char *VAR_2)
{
 struct an_ltv_aplist *VAR_3;
 struct an_req VAR_4;

 VAR_4.an_len = sizeof(VAR_4);
 VAR_4.an_type = VAR_0;

 FUNC_0(VAR_2, &VAR_4);

 VAR_3 = (struct an_ltv_aplist *)&VAR_4;
 FUNC_2("Access point 1:\t\t\t");
 FUNC_1((char *)&VAR_3->an_ap1, VAR_1);
 FUNC_2("\nAccess point 2:\t\t\t");
 FUNC_1((char *)&VAR_3->an_ap2, VAR_1);
 FUNC_2("\nAccess point 3:\t\t\t");
 FUNC_1((char *)&VAR_3->an_ap3, VAR_1);
 FUNC_2("\nAccess point 4:\t\t\t");
 FUNC_1((char *)&VAR_3->an_ap4, VAR_1);
 FUNC_2("\n");

 return;
}
