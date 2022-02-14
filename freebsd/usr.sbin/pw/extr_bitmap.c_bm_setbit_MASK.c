
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct bitmap {unsigned char* map; } ;


 int FUNC_0 (int*,unsigned char*) ;

void
FUNC_1(struct bitmap * VAR_0, int VAR_1)
{
 unsigned char VAR_2;

 FUNC_0(&VAR_1, &VAR_2);
 VAR_0->map[VAR_1] |= VAR_2;
}
