
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct option {scalar_t__ value; } ;
typedef enum thread_level { ____Placeholder_thread_level } thread_level ;


 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int FUNC_0 (char const*,char*) ;

__attribute__((used)) static int FUNC_1(const struct option *VAR_3, const char *VAR_4, int VAR_5)
{
 enum thread_level *VAR_6 = (enum thread_level *)VAR_3->value;
 if (VAR_5)
  *VAR_6 = VAR_2;
 else if (!VAR_4 || !FUNC_0(VAR_4, "shallow"))
  *VAR_6 = VAR_1;
 else if (!FUNC_0(VAR_4, "deep"))
  *VAR_6 = VAR_0;




 else
  return 1;
 return 0;
}
