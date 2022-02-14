
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct an_req {int an_len; int an_type; } ;
struct an_ltv_key {int kindex; int* mac; scalar_t__ klen; } ;
struct an_ltv_genconfig {int an_home_product; } ;
typedef int areq ;


 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int FUNC_0 (char const*,struct an_req*) ;
 int FUNC_1 (char const*,struct an_req*) ;
 int FUNC_2 (char const*) ;
 int FUNC_3 (struct an_req*,int) ;

__attribute__((used)) static void
FUNC_4(const char *VAR_3, const char *VAR_4)
{
 struct an_req VAR_5;
 struct an_ltv_key *VAR_6;
 struct an_ltv_genconfig *VAR_7;

 FUNC_3(&VAR_5, sizeof(VAR_5));


 VAR_5.an_len = sizeof(struct an_ltv_genconfig);
 VAR_5.an_type = VAR_1;
 FUNC_0(VAR_3, &VAR_5);
 VAR_7 = (struct an_ltv_genconfig *)&VAR_5;
 if (FUNC_2(VAR_4) == 4) {
  VAR_7->an_home_product |= VAR_0;
 }else{
  VAR_7->an_home_product &= ~VAR_0;
 }
 FUNC_1(VAR_3, &VAR_5);

 FUNC_3(&VAR_5, sizeof(VAR_5));

 VAR_6 = (struct an_ltv_key *)&VAR_5;



 VAR_6->kindex=0xffff;
 VAR_6->klen=0;

 VAR_6->mac[0]=FUNC_2(VAR_4);
 VAR_6->mac[1]=0;
 VAR_6->mac[2]=0;
 VAR_6->mac[3]=0;
 VAR_6->mac[4]=0;
 VAR_6->mac[5]=0;

 VAR_5.an_len = sizeof(struct an_ltv_key);
 VAR_5.an_type = VAR_2;
 FUNC_1(VAR_3, &VAR_5);
}
