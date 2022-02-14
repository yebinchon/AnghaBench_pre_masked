
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct sram_parameters {unsigned long long sram_offset; unsigned int sram_size; } ;


 int VAR_0 ;
 scalar_t__ FUNC_0 (int ,int ,unsigned int*) ;
 scalar_t__ FUNC_1 (int ,int ,unsigned long long*) ;
 int VAR_1 ;
 int VAR_2 ;

__attribute__((used)) static int FUNC_2(struct sram_parameters *VAR_3)
{
 unsigned long long VAR_4;
 unsigned int VAR_5;

 if (!VAR_2 || (FUNC_0(VAR_2, 0, &VAR_5) < 0))
  return -VAR_0;

 if (!VAR_1 || (FUNC_1(VAR_1, 0, &VAR_4) < 0))
  return -VAR_0;

 VAR_3->sram_offset = VAR_4;
 VAR_3->sram_size = VAR_5;

 return 0;
}
