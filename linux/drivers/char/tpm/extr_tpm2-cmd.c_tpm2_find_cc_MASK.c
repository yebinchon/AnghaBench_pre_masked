
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int u32 ;
struct tpm_chip {int nr_commands; int* cc_attrs_tbl; } ;


 int FUNC_0 (int,int ) ;

int FUNC_1(struct tpm_chip *VAR_0, u32 VAR_1)
{
 int VAR_2;

 for (VAR_2 = 0; VAR_2 < VAR_0->nr_commands; VAR_2++)
  if (VAR_1 == (VAR_0->cc_attrs_tbl[VAR_2] & FUNC_0(15, 0)))
   return VAR_2;

 return -1;
}
