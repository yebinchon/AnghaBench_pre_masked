
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct dm_arg_set {unsigned int argc; } ;
struct dm_arg {unsigned int min; unsigned int max; char* error; } ;


 int VAR_0 ;
 char* FUNC_0 (struct dm_arg_set*) ;
 int FUNC_1 (char const*,char*,unsigned int*,char*) ;

__attribute__((used)) static int FUNC_2(const struct dm_arg *VAR_1,
        struct dm_arg_set *VAR_2,
        unsigned *VAR_3, char **VAR_4, unsigned VAR_5)
{
 const char *VAR_6 = FUNC_0(VAR_2);
 char VAR_7;

 if (!VAR_6 ||
     (FUNC_1(VAR_6, "%u%c", VAR_3, &VAR_7) != 1) ||
     (*VAR_3 < VAR_1->min) ||
     (*VAR_3 > VAR_1->max) ||
     (VAR_5 && VAR_2->argc < *VAR_3)) {
  *VAR_4 = VAR_1->error;
  return -VAR_0;
 }

 return 0;
}
