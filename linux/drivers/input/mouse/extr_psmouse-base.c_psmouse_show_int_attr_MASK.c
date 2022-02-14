
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct psmouse {int dummy; } ;
typedef int ssize_t ;


 int FUNC_0 (char*,char*,unsigned int) ;

__attribute__((used)) static ssize_t FUNC_1(struct psmouse *VAR_0, void *VAR_1, char *VAR_2)
{
 unsigned int *VAR_3 = (unsigned int *)((char *)VAR_0 + (size_t)VAR_1);

 return FUNC_0(VAR_2, "%u\n", *VAR_3);
}
