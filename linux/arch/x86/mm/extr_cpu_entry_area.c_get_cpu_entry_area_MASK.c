
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct cpu_entry_area {int dummy; } ;


 int FUNC_0 (int) ;
 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;

struct cpu_entry_area *FUNC_1(int VAR_3)
{
 unsigned long VAR_4 = VAR_0 + VAR_3 * VAR_1;
 FUNC_0(sizeof(struct cpu_entry_area) % VAR_2 != 0);

 return (struct cpu_entry_area *) VAR_4;
}
