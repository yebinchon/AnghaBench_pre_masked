
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int u8 ;
struct psmouse {int dummy; } ;


 scalar_t__ FUNC_0 (struct psmouse*,int) ;

__attribute__((used)) static int FUNC_1(struct psmouse *VAR_0, u8 VAR_1)
{
 if (FUNC_0(VAR_0, (VAR_1 >> 4) & 0xf))
  return -1;
 if (FUNC_0(VAR_0, VAR_1 & 0xf))
  return -1;
 return 0;
}
