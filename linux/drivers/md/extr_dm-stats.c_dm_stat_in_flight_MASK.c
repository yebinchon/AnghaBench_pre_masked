
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct dm_stat_shared {int * in_flight; } ;


 size_t VAR_0 ;
 size_t VAR_1 ;
 int FUNC_0 (int *) ;

__attribute__((used)) static int FUNC_1(struct dm_stat_shared *VAR_2)
{
 return FUNC_0(&VAR_2->in_flight[VAR_0]) +
        FUNC_0(&VAR_2->in_flight[VAR_1]);
}
