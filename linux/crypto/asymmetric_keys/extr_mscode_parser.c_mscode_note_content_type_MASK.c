
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef enum OID { ____Placeholder_OID } OID ;
typedef int buffer ;


 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int VAR_3 ;
 int FUNC_0 (void const*,size_t) ;
 int FUNC_1 (char*,...) ;
 int FUNC_2 (void const*,size_t,char*,int) ;

int FUNC_3(void *VAR_4, size_t VAR_5,
        unsigned char VAR_6,
        const void *VAR_7, size_t VAR_8)
{
 enum OID VAR_9;

 VAR_9 = FUNC_0(VAR_7, VAR_8);
 if (VAR_9 == VAR_1) {
  char VAR_10[50];

  FUNC_2(VAR_7, VAR_8, VAR_10, sizeof(VAR_10));
  FUNC_1("Unknown OID: %s\n", VAR_10);
  return -VAR_0;
 }






 if (VAR_9 != VAR_3 &&
     VAR_9 != VAR_2) {
  FUNC_1("Unexpected content type OID %u\n", VAR_9);
  return -VAR_0;
 }

 return 0;
}
