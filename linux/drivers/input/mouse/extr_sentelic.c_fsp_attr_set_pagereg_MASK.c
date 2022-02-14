
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct psmouse {int dummy; } ;
typedef int ssize_t ;


 int VAR_0 ;
 int VAR_1 ;
 scalar_t__ FUNC_0 (struct psmouse*,unsigned int) ;
 int FUNC_1 (char const*,int,unsigned int*) ;

__attribute__((used)) static ssize_t FUNC_2(struct psmouse *VAR_2, void *VAR_3,
     const char *VAR_4, size_t VAR_5)
{
 unsigned int VAR_6;
 int VAR_7;

 VAR_7 = FUNC_1(VAR_4, 16, &VAR_6);
 if (VAR_7)
  return VAR_7;

 if (VAR_6 > 0xff)
  return -VAR_0;

 if (FUNC_0(VAR_2, VAR_6))
  return -VAR_1;

 return VAR_5;
}
