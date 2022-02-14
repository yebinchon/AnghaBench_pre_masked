
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int u8 ;
struct i2c_client {int dev; } ;


 int FUNC_0 (int *,char*,int) ;
 int FUNC_1 (int *,char*,int,int) ;
 scalar_t__ FUNC_2 (int) ;
 int FUNC_3 (int) ;
 int FUNC_4 (int) ;
 scalar_t__ FUNC_5 (int,char*) ;

__attribute__((used)) static int FUNC_6(struct i2c_client *VAR_0, unsigned VAR_1,
        unsigned VAR_2, void *VAR_3)
{
 int VAR_4;
 u8 VAR_5 = 0;

 for (VAR_4 = 0; VAR_4 < 8; VAR_4++) {
  int VAR_6 = VAR_1 + VAR_4 + 8;

  if (FUNC_5(VAR_6, "pcb info")) {
   FUNC_0(&VAR_0->dev, "Can't request pcb info %d\n", VAR_4);
   continue;
  }

  if (FUNC_2(VAR_6)) {
   FUNC_0(&VAR_0->dev, "Can't read pcb info %d\n", VAR_4);
   FUNC_3(VAR_6);
   continue;
  }

  VAR_5 |= !!FUNC_4(VAR_6) << VAR_4;

  FUNC_3(VAR_6);
 }

 FUNC_1(&VAR_0->dev, "Zeus PCB version %d issue %d\n",
   VAR_5 >> 4, VAR_5 & 0xf);

 return 0;
}
