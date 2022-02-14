
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct option {int long_name; } ;


 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int FUNC_0 (int ,char const*) ;

int FUNC_1(const struct option *VAR_3,
           const char *VAR_4, int VAR_5)
{
 if (VAR_5) {
  VAR_2 = VAR_0;
  return 0;
 }
 if (VAR_4)
  VAR_2 =
   FUNC_0(VAR_3->long_name,
           VAR_4);
 else
  VAR_2 = VAR_1;

 return 0;
}
