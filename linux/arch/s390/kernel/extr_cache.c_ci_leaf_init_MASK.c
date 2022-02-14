
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct cacheinfo {unsigned int level; int type; int coherency_line_size; int ways_of_associativity; int size; int number_of_sets; int disable_sysfs; int shared_cpu_map; } ;
typedef enum cache_type { ____Placeholder_cache_type } cache_type ;


 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int VAR_3 ;
 int VAR_4 ;
 int VAR_5 ;
 int FUNC_0 (int,int *) ;
 void* FUNC_1 (int ,unsigned int,int) ;

__attribute__((used)) static void FUNC_2(struct cacheinfo *VAR_6, int VAR_7,
    enum cache_type VAR_8, unsigned int VAR_9, int VAR_10)
{
 int VAR_11, VAR_12;

 if (VAR_8 == VAR_2)
  VAR_11 = VAR_0;
 else
  VAR_11 = VAR_1;
 VAR_6->level = VAR_9 + 1;
 VAR_6->type = VAR_8;
 VAR_6->coherency_line_size = FUNC_1(VAR_4, VAR_9, VAR_11);
 VAR_6->ways_of_associativity = FUNC_1(VAR_3, VAR_9, VAR_11);
 VAR_6->size = FUNC_1(VAR_5, VAR_9, VAR_11);
 VAR_12 = VAR_6->size / VAR_6->coherency_line_size;
 VAR_12 /= VAR_6->ways_of_associativity;
 VAR_6->number_of_sets = VAR_12;
 FUNC_0(VAR_10, &VAR_6->shared_cpu_map);
 if (!VAR_7)
  VAR_6->disable_sysfs = 1;
}
