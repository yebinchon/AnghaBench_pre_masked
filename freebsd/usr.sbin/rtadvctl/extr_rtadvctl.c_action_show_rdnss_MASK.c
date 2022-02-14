
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int uint32_t ;
typedef int uint16_t ;
struct rdnss_addr {int ra_dns; } ;
struct rdnss {int rd_ltime; } ;
typedef int ntopbuf ;


 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 char* FUNC_0 (int ,int *,char*,int) ;
 int FUNC_1 (char*,char*,char*) ;
 char* FUNC_2 (int ,char*) ;

__attribute__((used)) static int
FUNC_3(void *VAR_3)
{
 struct rdnss *VAR_4;
 struct rdnss_addr *VAR_5;
 uint16_t *VAR_6;
 uint16_t *VAR_7;
 int VAR_8;
 int VAR_9;
 char *VAR_10;
 uint32_t VAR_11;
 char VAR_12[VAR_1];
 char VAR_13[VAR_2];

 VAR_10 = VAR_3;
 VAR_6 = (uint16_t *)VAR_10;
 VAR_10 += sizeof(*VAR_6);

 if (*VAR_6 > 0) {
  for (VAR_8 = 0; VAR_8 < *VAR_6; VAR_8++) {
   VAR_4 = (struct rdnss *)VAR_10;
   VAR_11 = VAR_4->rd_ltime;
   VAR_10 += sizeof(*VAR_4);

   VAR_7 = (uint16_t *)VAR_10;
   VAR_10 += sizeof(*VAR_7);
   if (*VAR_7 > 0)
    for (VAR_9 = 0; VAR_9 < *VAR_7; VAR_9++) {
     VAR_5 = (struct rdnss_addr *)VAR_10;
     FUNC_1("\t  %s (ltime=%s)\n",
         FUNC_0(VAR_0,
      &VAR_5->ra_dns,
      VAR_12,
      sizeof(VAR_12)),
         FUNC_2(VAR_11, VAR_13));
     VAR_10 += sizeof(*VAR_5);
    }
  }
 }

 return (0);
}
