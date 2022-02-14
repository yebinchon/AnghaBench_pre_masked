
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int u_long ;
struct msdosfsmount {int dummy; } ;


 int VAR_0 ;
 int VAR_1 ;
 int FUNC_0 (int ,struct msdosfsmount*,int ,int *,int ) ;
 int FUNC_1 (struct msdosfsmount*,int ) ;

int
FUNC_2(struct msdosfsmount *VAR_2, u_long VAR_3, u_long *VAR_4)
{
 int VAR_5;
 u_long VAR_6;

 VAR_5 = FUNC_0(VAR_0, VAR_2, VAR_3, &VAR_6, VAR_1);
 if (VAR_5)
  return (VAR_5);





 FUNC_1(VAR_2, VAR_3);
 if (VAR_4)
  *VAR_4 = VAR_6;
 return (0);
}
