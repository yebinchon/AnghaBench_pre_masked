
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct an_req {int an_len; int an_type; } ;
struct an_ltv_key {int kindex; int klen; int* mac; } ;
typedef int areq ;


 int VAR_0 ;
 int VAR_1 ;
 int FUNC_0 (char const*,struct an_req*) ;
 int FUNC_1 (char const*,struct an_ltv_key*) ;
 int FUNC_2 (struct an_req*,int) ;
 int FUNC_3 (int,char*) ;
 int FUNC_4 (char const*) ;

__attribute__((used)) static void
FUNC_5(const char *VAR_2, const char *VAR_3, int VAR_4)
{
 struct an_req VAR_5;
 struct an_ltv_key *VAR_6;

 FUNC_2(&VAR_5, sizeof(VAR_5));
 VAR_6 = (struct an_ltv_key *)&VAR_5;

 if (FUNC_4(VAR_3) > 28) {
  FUNC_3(1, "encryption key must be no "
      "more than 18 characters long");
 }

 FUNC_1(VAR_3, VAR_6);

 VAR_6->kindex=VAR_4/2;

 if (!(VAR_6->klen==0 || VAR_6->klen==5 || VAR_6->klen==13)) {
  FUNC_3(1, "encryption key must be 0, 5 or 13 bytes long");
 }


 VAR_6->mac[0]=1;
 VAR_6->mac[1]=0;
 VAR_6->mac[2]=0;
 VAR_6->mac[3]=0;
 VAR_6->mac[4]=0;
 VAR_6->mac[5]=0;

 switch(VAR_4 & 1) {
 case 0:
   VAR_5.an_len = sizeof(struct an_ltv_key);
   VAR_5.an_type = VAR_0;
   FUNC_0(VAR_2, &VAR_5);
   break;
 case 1:
   VAR_5.an_len = sizeof(struct an_ltv_key);
   VAR_5.an_type = VAR_1;
   FUNC_0(VAR_2, &VAR_5);
   break;
 }
}
