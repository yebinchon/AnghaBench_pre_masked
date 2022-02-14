
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct string_list {int dummy; } ;


 int FUNC_0 (struct string_list const*,char const*,int*) ;

int FUNC_1(const struct string_list *VAR_0, const char *VAR_1,
      int VAR_2)
{
 int VAR_3;
 int VAR_4 = FUNC_0(VAR_0, VAR_1, &VAR_3);
 if (VAR_3)
  VAR_4 = -1 - (VAR_2 ? VAR_4 : 0);
 return VAR_4;
}
