
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct option {int* value; } ;


 int FUNC_0 (int) ;
 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int VAR_3 ;
 int VAR_4 ;
 int FUNC_1 (char const*) ;

__attribute__((used)) static int FUNC_2(const struct option *VAR_5, const char *VAR_6, int VAR_7)
{
 int *VAR_8 = VAR_5->value;

 FUNC_0(VAR_7);
 if (*VAR_8 & VAR_1)
  *VAR_8 |= VAR_2;
 if (*VAR_8 & VAR_0)
  *VAR_8 |= VAR_1;
 *VAR_8 |= VAR_0 | VAR_3;

 if (VAR_6)
  VAR_4 = FUNC_1(VAR_6);
 return 0;
}
