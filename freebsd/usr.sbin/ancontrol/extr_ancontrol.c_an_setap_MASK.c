
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct ether_addr {int dummy; } ;
struct an_req {int an_len; int an_type; } ;
struct an_ltv_aplist {int an_ap4; int an_ap3; int an_ap2; int an_ap1; } ;
typedef int areq ;






 int VAR_0 ;
 int VAR_1 ;
 int FUNC_0 (char const*,struct an_req*) ;
 int FUNC_1 (char const*,struct an_req*) ;
 int FUNC_2 (struct ether_addr*,int *,int ) ;
 int FUNC_3 (int ,int ) ;
 int FUNC_4 (int,char*) ;
 struct ether_addr* FUNC_5 (char*) ;
 int FUNC_6 (int ) ;

__attribute__((used)) static void
FUNC_7(const char *VAR_2, int VAR_3, void *VAR_4)
{
 struct an_ltv_aplist *VAR_5;
 struct an_req VAR_6;
 struct ether_addr *VAR_7;

 VAR_6.an_len = sizeof(VAR_6);
 VAR_6.an_type = VAR_0;

 FUNC_0(VAR_2, &VAR_6);
 VAR_5 = (struct an_ltv_aplist *)&VAR_6;

 VAR_7 = FUNC_5((char *)VAR_4);

 if (VAR_7 == ((void*)0))
  FUNC_4(1, "badly formatted address");

 switch(VAR_3) {
 case 131:
  FUNC_3(VAR_5->an_ap1, VAR_1);
  FUNC_2(VAR_7, &VAR_5->an_ap1, VAR_1);
  break;
 case 130:
  FUNC_3(VAR_5->an_ap2, VAR_1);
  FUNC_2(VAR_7, &VAR_5->an_ap2, VAR_1);
  break;
 case 129:
  FUNC_3(VAR_5->an_ap3, VAR_1);
  FUNC_2(VAR_7, &VAR_5->an_ap3, VAR_1);
  break;
 case 128:
  FUNC_3(VAR_5->an_ap4, VAR_1);
  FUNC_2(VAR_7, &VAR_5->an_ap4, VAR_1);
  break;
 default:
  FUNC_4(1, "unknown action");
  break;
 }

 FUNC_1(VAR_2, &VAR_6);
 FUNC_6(0);
}
