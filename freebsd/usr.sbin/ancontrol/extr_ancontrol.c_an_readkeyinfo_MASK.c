
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct an_req {int an_len; int an_type; } ;
struct an_ltv_key {int kindex; int klen; int* mac; } ;
struct an_ltv_genconfig {int an_home_product; } ;
typedef int areq ;


 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int VAR_3 ;
 int FUNC_0 (char const*,struct an_req*) ;
 int FUNC_1 (struct an_req*,int) ;
 int FUNC_2 (char*,...) ;

__attribute__((used)) static void
FUNC_3(const char *VAR_4)
{
 struct an_req VAR_5;
 struct an_ltv_genconfig *VAR_6;
 struct an_ltv_key *VAR_7;
 int VAR_8;
 int VAR_9;

 VAR_5.an_len = sizeof(VAR_5);
 VAR_5.an_type = VAR_1;
 FUNC_0(VAR_4, &VAR_5);
 VAR_6 = (struct an_ltv_genconfig *)&VAR_5;
 if (VAR_6->an_home_product & VAR_0)
  VAR_9 = 1;
 else
  VAR_9 = 0;

 FUNC_1(&VAR_5, sizeof(VAR_5));
 VAR_7 = (struct an_ltv_key *)&VAR_5;

 FUNC_2("WEP Key status:\n");
 VAR_5.an_type = VAR_3;
 for(VAR_8=0; VAR_8<5; VAR_8++) {
  VAR_5.an_len = sizeof(struct an_ltv_key);
  FUNC_0(VAR_4, &VAR_5);
         if (VAR_7->kindex == 0xffff)
   break;
  switch (VAR_7->klen) {
  case 0:
   FUNC_2("\tKey %u is unset\n", VAR_7->kindex);
   break;
  case 5:
   FUNC_2("\tKey %u is set  40 bits\n", VAR_7->kindex);
   break;
  case 13:
   FUNC_2("\tKey %u is set 128 bits\n", VAR_7->kindex);
   break;
  default:
   FUNC_2("\tWEP Key %d has an unknown size %u\n",
       VAR_8, VAR_7->klen);
  }

  VAR_5.an_type = VAR_2;
 }
 VAR_7->kindex = 0xffff;
 VAR_5.an_len = sizeof(struct an_ltv_key);
       FUNC_0(VAR_4, &VAR_5);
 FUNC_2("\tThe active transmit key is %d\n", 4 * VAR_9 + VAR_7->mac[0]);

 return;
}
