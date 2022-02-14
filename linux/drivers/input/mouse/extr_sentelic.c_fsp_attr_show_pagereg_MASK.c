
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct psmouse {int dummy; } ;
typedef int ssize_t ;


 int VAR_0 ;
 scalar_t__ FUNC_0 (struct psmouse*,int*) ;
 int FUNC_1 (char*,char*,int) ;

__attribute__((used)) static ssize_t FUNC_2(struct psmouse *VAR_1,
     void *VAR_2, char *VAR_3)
{
 int VAR_4 = 0;

 if (FUNC_0(VAR_1, &VAR_4))
  return -VAR_0;

 return FUNC_1(VAR_3, "%02x\n", VAR_4);
}
