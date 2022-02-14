
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct option {struct list_objects_filter_options* value; } ;
struct list_objects_filter_options {int dummy; } ;


 int FUNC_0 (struct list_objects_filter_options*) ;
 int FUNC_1 (struct list_objects_filter_options*,char const*) ;

int FUNC_2(const struct option *VAR_0,
      const char *VAR_1, int VAR_2)
{
 struct list_objects_filter_options *VAR_3 = VAR_0->value;

 if (VAR_2 || !VAR_1)
  FUNC_0(VAR_3);
 else
  FUNC_1(VAR_3, VAR_1);
 return 0;
}
