
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int u16 ;
struct mii_bus {int (* read ) (struct mii_bus*,int,int) ;} ;


 int VAR_0 ;
 int FUNC_0 (struct mii_bus*,int,int) ;

__attribute__((used)) static int
FUNC_1(struct mii_bus *VAR_1, int VAR_2,
  int VAR_3, u16 VAR_4, u16 VAR_5)
{
 int VAR_6 = 100;
 u16 VAR_7;

 do {
  VAR_7 = VAR_1->read(VAR_1, VAR_2, VAR_3);
  if ((VAR_7 & VAR_4) == VAR_5)
   return 0;
 } while (--VAR_6 > 0);

 return -VAR_0;
}
