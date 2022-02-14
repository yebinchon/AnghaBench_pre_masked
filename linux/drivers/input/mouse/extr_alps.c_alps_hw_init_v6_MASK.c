
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct psmouse {int dummy; } ;


 scalar_t__ FUNC_0 (struct psmouse*) ;
 scalar_t__ FUNC_1 (struct psmouse*,int) ;
 int FUNC_2 (struct psmouse*) ;
 int FUNC_3 (struct psmouse*,char*) ;

__attribute__((used)) static int FUNC_4(struct psmouse *VAR_0)
{
 int VAR_1;


 if (FUNC_1(VAR_0, 1))
  return -1;

 VAR_1 = FUNC_2(VAR_0);

 if (FUNC_1(VAR_0, 0))
  return -1;

 if (VAR_1)
  return VAR_1;

 if (FUNC_0(VAR_0)) {
  FUNC_3(VAR_0, "Failed to enable absolute mode\n");
  return -1;
 }

 return 0;
}
