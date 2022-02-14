
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int u16 ;
struct psmouse {int dummy; } ;


 scalar_t__ FUNC_0 (struct psmouse*,int) ;
 int FUNC_1 (struct psmouse*,int,int) ;

__attribute__((used)) static int FUNC_2(struct psmouse *VAR_0)
{
 u16 VAR_1 = 0x181;
 int VAR_2 = -1;


 if (FUNC_0(VAR_0, 1))
  return -1;

 VAR_2 = FUNC_1(VAR_0, 0x000, VAR_1);

 if (FUNC_0(VAR_0, 0))
  VAR_2 = -1;

 return VAR_2;
}
