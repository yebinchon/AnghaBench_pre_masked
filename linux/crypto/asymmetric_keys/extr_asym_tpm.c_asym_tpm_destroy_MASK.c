
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct tpm_key {scalar_t__ blob_len; struct tpm_key* blob; } ;


 int FUNC_0 (struct tpm_key*) ;

__attribute__((used)) static void FUNC_1(void *VAR_0, void *VAR_1)
{
 struct tpm_key *VAR_2 = VAR_0;

 if (!VAR_2)
  return;

 FUNC_0(VAR_2->blob);
 VAR_2->blob_len = 0;

 FUNC_0(VAR_2);
}
