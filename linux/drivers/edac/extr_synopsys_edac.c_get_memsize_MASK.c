
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int u32 ;
struct sysinfo {int totalram; int mem_unit; } ;


 int FUNC_0 (struct sysinfo*) ;

__attribute__((used)) static u32 FUNC_1(void)
{
 struct sysinfo VAR_0;

 FUNC_0(&VAR_0);

 return VAR_0.totalram * VAR_0.mem_unit;
}
