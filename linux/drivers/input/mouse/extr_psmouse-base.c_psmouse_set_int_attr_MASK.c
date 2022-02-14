
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct psmouse {int dummy; } ;
typedef int ssize_t ;


 int FUNC_0 (char const*,int,unsigned int*) ;

__attribute__((used)) static ssize_t FUNC_1(struct psmouse *VAR_0, void *VAR_1, const char *VAR_2, size_t VAR_3)
{
 unsigned int *VAR_4 = (unsigned int *)((char *)VAR_0 + (size_t)VAR_1);
 unsigned int VAR_5;
 int VAR_6;

 VAR_6 = FUNC_0(VAR_2, 10, &VAR_5);
 if (VAR_6)
  return VAR_6;

 *VAR_4 = VAR_5;

 return VAR_3;
}
