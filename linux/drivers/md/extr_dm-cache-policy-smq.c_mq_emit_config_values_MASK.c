
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct dm_cache_policy {int dummy; } ;
typedef int ssize_t ;


 int FUNC_0 (char*) ;

__attribute__((used)) static int FUNC_1(struct dm_cache_policy *VAR_0, char *VAR_1,
     unsigned VAR_2, ssize_t *VAR_3)
{
 ssize_t VAR_4 = *VAR_3;

 FUNC_0("10 random_threshold 0 "
        "sequential_threshold 0 "
        "discard_promote_adjustment 0 "
        "read_promote_adjustment 0 "
        "write_promote_adjustment 0 ");

 *VAR_3 = VAR_4;
 return 0;
}
