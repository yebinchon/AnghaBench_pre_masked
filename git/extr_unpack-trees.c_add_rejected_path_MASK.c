
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct unpack_trees_options {int * unpack_rejects; int show_all_errors; scalar_t__ quiet; } ;
typedef enum unpack_trees_error_types { ____Placeholder_unpack_trees_error_types } unpack_trees_error_types ;


 int FUNC_0 (struct unpack_trees_options*,int) ;
 int FUNC_1 (int ,int ) ;
 int FUNC_2 (int *,char const*) ;
 int FUNC_3 (char const*) ;

__attribute__((used)) static int FUNC_4(struct unpack_trees_options *VAR_0,
        enum unpack_trees_error_types VAR_1,
        const char *VAR_2)
{
 if (VAR_0->quiet)
  return -1;

 if (!VAR_0->show_all_errors)
  return FUNC_1(FUNC_0(VAR_0, VAR_1), FUNC_3(VAR_2));





 FUNC_2(&VAR_0->unpack_rejects[VAR_1], VAR_2);
 return -1;
}
