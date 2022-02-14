
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_3__ TYPE_1__ ;


struct TYPE_3__ {int SHA512; int SHA256; int SHA1; int RIPEMD160; int MD5; } ;
typedef TYPE_1__ DIGEST_CTX ;







 char* FUNC_0 (int *,char*) ;
 char* FUNC_1 (int *,char*) ;
 char* FUNC_2 (int *,char*) ;
 char* FUNC_3 (int *,char*) ;
 char* FUNC_4 (int *,char*) ;
 int VAR_0 ;

__attribute__((used)) static char *
FUNC_5(DIGEST_CTX *VAR_1, char *VAR_2)
{

 switch (VAR_0) {
 case 132:
  return (FUNC_0(&(VAR_1->MD5), VAR_2));
 case 131:
  return (FUNC_1(&(VAR_1->RIPEMD160), VAR_2));
 case 130:
  return (FUNC_2(&(VAR_1->SHA1), VAR_2));
 case 129:
  return (FUNC_3(&(VAR_1->SHA256), VAR_2));
 case 128:
  return (FUNC_4(&(VAR_1->SHA512), VAR_2));
 default:
  return (((void*)0));
 }
}
