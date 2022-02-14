
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct psmouse {int dummy; } ;


 int VAR_0 ;
 int FUNC_0 (unsigned char*) ;
 scalar_t__ FUNC_1 (struct psmouse*,int ,int ,unsigned char*) ;
 int FUNC_2 (struct psmouse*,char*) ;
 int FUNC_3 (struct psmouse*,char*) ;

__attribute__((used)) static int FUNC_4(struct psmouse *VAR_1)
{
 unsigned char VAR_2[4];

 if (FUNC_1(VAR_1, 0, VAR_0, VAR_2)) {
  FUNC_3(VAR_1, "failed to enter command mode\n");
  return -1;
 }

 if (!FUNC_0(VAR_2)) {
  FUNC_2(VAR_1,
       "unknown response while entering command mode\n");
  return -1;
 }
 return 0;
}
