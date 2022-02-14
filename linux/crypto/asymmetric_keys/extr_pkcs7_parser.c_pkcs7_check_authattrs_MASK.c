
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct pkcs7_signed_info {scalar_t__ authattrs; struct pkcs7_signed_info* next; } ;
struct pkcs7_message {int have_authattrs; struct pkcs7_signed_info* signed_infos; } ;


 int VAR_0 ;
 int FUNC_0 (char*) ;

__attribute__((used)) static int FUNC_1(struct pkcs7_message *VAR_1)
{
 struct pkcs7_signed_info *VAR_2;
 bool VAR_3 = 0;

 VAR_2 = VAR_1->signed_infos;
 if (!VAR_2)
  goto inconsistent;

 if (VAR_2->authattrs) {
  VAR_3 = 1;
  VAR_1->have_authattrs = 1;
 }

 for (VAR_2 = VAR_2->next; VAR_2; VAR_2 = VAR_2->next)
  if (!!VAR_2->authattrs != VAR_3)
   goto inconsistent;
 return 0;

inconsistent:
 FUNC_0("Inconsistently supplied authAttrs\n");
 return -VAR_0;
}
