
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct in_addr {int s_addr; } ;


 int FUNC_0 (char**) ;
 int FUNC_1 (unsigned int) ;

__attribute__((used)) static int
FUNC_2(char **VAR_0, struct in_addr *VAR_1)
{
 char *VAR_2;
 unsigned int VAR_3;
 int VAR_4;

 VAR_2 = *VAR_0;
 VAR_3 = 0;
 if (((VAR_4 = FUNC_0(&VAR_2)) < 0) || (VAR_4 > 255))
  return 0;
 VAR_3 = VAR_4 << 24;
 if (*VAR_2 != '.')
  return 0;
 VAR_2++;
 if (((VAR_4 = FUNC_0(&VAR_2)) < 0) || (VAR_4 > 255))
  return 0;
 VAR_3 |= (VAR_4 << 16);
 if (*VAR_2 != '.')
  return 0;
 VAR_2++;
 if (((VAR_4 = FUNC_0(&VAR_2)) < 0) || (VAR_4 > 255))
  return 0;
 VAR_3 |= (VAR_4 << 8);
 if (*VAR_2 != '.')
  return 0;
 VAR_2++;
 if (((VAR_4 = FUNC_0(&VAR_2)) < 0) || (VAR_4 > 255))
  return 0;
 VAR_3 |= VAR_4;

 VAR_1->s_addr = FUNC_1(VAR_3);
 *VAR_0 = VAR_2;
 return 1;
}
