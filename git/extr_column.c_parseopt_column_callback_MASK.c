
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct option {unsigned int* value; } ;


 unsigned int VAR_0 ;
 unsigned int VAR_1 ;
 unsigned int VAR_2 ;
 int FUNC_0 (unsigned int*,char const*) ;

int FUNC_1(const struct option *VAR_3,
        const char *VAR_4, int VAR_5)
{
 unsigned int *VAR_6 = VAR_3->value;
 *VAR_6 |= VAR_2;
 *VAR_6 &= ~VAR_1;
 if (VAR_5)
  return 0;

 *VAR_6 |= VAR_0;
 if (VAR_4)
  return FUNC_0(VAR_6, VAR_4);

 return 0;
}
