
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int u32 ;
struct mii_bus {int dev; } ;


 int VAR_0 ;
 int VAR_1 ;
 scalar_t__ FUNC_0 (int) ;
 int FUNC_1 (int *) ;
 int FUNC_2 (struct mii_bus*,unsigned int,int ) ;
 int FUNC_3 (char*,int ,unsigned int,int) ;

__attribute__((used)) static bool
FUNC_4(struct mii_bus *VAR_2)
{
 unsigned int VAR_3, VAR_4 = 0;

 for (VAR_3 = 0; VAR_3 < 5; VAR_3++) {
  u32 VAR_5;

  VAR_5 = FUNC_2(VAR_2, VAR_3, VAR_0) << 16;
  VAR_5 |= FUNC_2(VAR_2, VAR_3, VAR_1);
  if (FUNC_0(VAR_5)) {
   VAR_4++;
  } else if (VAR_5) {
   FUNC_3("ar8xxx: unknown PHY at %s:%02x id:%08x\n",
     FUNC_1(&VAR_2->dev), VAR_3, VAR_5);
  }
 }
 return !!VAR_4;
}
