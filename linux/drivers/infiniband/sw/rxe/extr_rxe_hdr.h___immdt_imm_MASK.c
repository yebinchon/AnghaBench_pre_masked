
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct rxe_immdt {int imm; } ;
typedef int __be32 ;



__attribute__((used)) static inline __be32 FUNC_0(void *VAR_0)
{
 struct rxe_immdt *VAR_1 = VAR_0;

 return VAR_1->imm;
}
