
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;
 int VAR_0 ;

__attribute__((used)) static int FUNC_0(unsigned long VAR_1, char **VAR_2)
{




 if (VAR_1 > (1UL << 31)) {
  *VAR_2 = "Too many regions. Consider increasing the region size";
  return -VAR_0;
 }

 return 0;
}
