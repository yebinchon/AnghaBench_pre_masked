
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct cacheinfo {unsigned int level; int type; int coherency_line_size; int number_of_sets; int ways_of_associativity; int size; int attributes; } ;
typedef enum cache_type { ____Placeholder_cache_type } cache_type ;


 int FUNC_0 (char) ;
 int FUNC_1 (char) ;
 int VAR_0 ;
 int FUNC_2 (char) ;
 int VAR_1 ;
 int VAR_2 ;
 char VAR_3 ;
 char VAR_4 ;

__attribute__((used)) static void FUNC_3(struct cacheinfo *VAR_5,
    enum cache_type VAR_6, unsigned int VAR_7)
{
 char VAR_8 = (VAR_6 & VAR_0 ? VAR_4 : VAR_3);

 VAR_5->level = VAR_7;
 VAR_5->type = VAR_6;
 VAR_5->coherency_line_size = FUNC_0(VAR_8);
 VAR_5->number_of_sets = FUNC_1(VAR_8);
 VAR_5->ways_of_associativity = FUNC_2(VAR_8);
 VAR_5->size = VAR_5->number_of_sets *
     VAR_5->coherency_line_size * VAR_5->ways_of_associativity;



 VAR_5->attributes = VAR_1;

}
