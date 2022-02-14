
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct option {int* value; int long_name; } ;


 int VAR_0 ;
 int FUNC_0 (char*,int ) ;
 int FUNC_1 (int ,char const*) ;

__attribute__((used)) static int FUNC_2(const struct option *VAR_1,
       const char *VAR_2, int VAR_3)
{
 int *VAR_4 = VAR_1->value;

 if (VAR_3)
  *VAR_4 = VAR_0;
 else if (VAR_2)
  *VAR_4 = FUNC_1(VAR_1->long_name, VAR_2);
 else
  FUNC_0("%s missing parameter", VAR_1->long_name);

 return 0;
}
