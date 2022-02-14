
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int uint32_t ;
typedef int uint16_t ;
struct dnssl_addr {int da_dom; } ;
struct dnssl {int dn_ltime; } ;
typedef int hbuf ;


 int VAR_0 ;
 int VAR_1 ;
 int FUNC_0 (char*,int,int ) ;
 int FUNC_1 (char*,char*,char*) ;
 char* FUNC_2 (int ,char*) ;

__attribute__((used)) static int
FUNC_3(void *VAR_2)
{
 struct dnssl *VAR_3;
 struct dnssl_addr *VAR_4;
 uint16_t *VAR_5;
 uint16_t *VAR_6;
 int VAR_7;
 int VAR_8;
 char *VAR_9;
 uint32_t VAR_10;
 char VAR_11[VAR_0];
 char VAR_12[VAR_1];

 VAR_9 = VAR_2;
 VAR_5 = (uint16_t *)VAR_9;
 VAR_9 += sizeof(*VAR_5);

 if (*VAR_5 > 0) {
  for (VAR_7 = 0; VAR_7 < *VAR_5; VAR_7++) {
   VAR_3 = (struct dnssl *)VAR_9;
   VAR_10 = VAR_3->dn_ltime;
   VAR_9 += sizeof(*VAR_3);

   VAR_6 = (uint16_t *)VAR_9;
   VAR_9 += sizeof(*VAR_6);
   if (*VAR_6 > 0)
    for (VAR_8 = 0; VAR_8 < *VAR_6; VAR_8++) {
     VAR_4 = (struct dnssl_addr *)VAR_9;
     FUNC_0(VAR_11, sizeof(VAR_11),
         VAR_4->da_dom);
     FUNC_1("\t  %s (ltime=%s)\n",
         VAR_11, FUNC_2(VAR_10, VAR_12));
     VAR_9 += sizeof(*VAR_4);
    }
  }
 }

 return (0);
}
