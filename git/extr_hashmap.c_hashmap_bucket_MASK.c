
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct hashmap {int tablesize; } ;



int FUNC_0(const struct hashmap *VAR_0, unsigned int VAR_1)
{
 return VAR_1 & (VAR_0->tablesize - 1);
}
