
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int u32 ;
struct threshold_block {int threshold_limit; int address; int cpu; } ;
typedef int ssize_t ;


 int VAR_0 ;
 int FUNC_0 (int ,int ,int*,int*) ;
 int FUNC_1 (char*,char*,int) ;

__attribute__((used)) static ssize_t FUNC_2(struct threshold_block *VAR_1, char *VAR_2)
{
 u32 VAR_3, VAR_4;

 FUNC_0(VAR_1->cpu, VAR_1->address, &VAR_3, &VAR_4);

 return FUNC_1(VAR_2, "%u\n", ((VAR_4 & VAR_0) -
         (VAR_0 - VAR_1->threshold_limit)));
}
