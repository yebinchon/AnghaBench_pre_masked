
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int u32 ;
struct tpm_space {int* context_tbl; } ;
typedef int __be32 ;


 int FUNC_0 (int*) ;
 int FUNC_1 (int *) ;
 int FUNC_2 (int) ;

__attribute__((used)) static bool FUNC_3(struct tpm_space *VAR_0, void *VAR_1)
{
 u32 VAR_2 = FUNC_1((__be32 *)VAR_1);
 u32 VAR_3;
 int VAR_4;

 VAR_4 = 0xFFFFFF - (VAR_2 & 0xFFFFFF);
 if (VAR_4 >= FUNC_0(VAR_0->context_tbl) || !VAR_0->context_tbl[VAR_4])
  return 0;

 VAR_3 = VAR_0->context_tbl[VAR_4];
 *((__be32 *)VAR_1) = FUNC_2(VAR_3);
 return 1;
}
