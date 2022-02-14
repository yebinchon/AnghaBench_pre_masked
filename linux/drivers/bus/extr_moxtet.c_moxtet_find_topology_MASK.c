
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


typedef int u8 ;
struct moxtet {int* modules; int dev; scalar_t__ count; } ;
typedef int cnts ;
struct TYPE_2__ {int desc; } ;


 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int VAR_3 ;
 int VAR_4 ;
 int FUNC_0 (int ,char*,int) ;
 int FUNC_1 (int ,char*,...) ;
 int FUNC_2 (int ,char*,int) ;
 int FUNC_3 (int*,int ,int) ;
 scalar_t__ FUNC_4 (int) ;
 TYPE_1__* VAR_5 ;
 scalar_t__ FUNC_5 (struct moxtet*,int,int,int ) ;
 int FUNC_6 (int ,int*,int) ;
 int FUNC_7 (int ) ;

__attribute__((used)) static int FUNC_8(struct moxtet *VAR_6)
{
 u8 VAR_7[VAR_3];
 int VAR_8[VAR_4];
 int VAR_9, VAR_10;

 FUNC_3(VAR_8, 0, sizeof(VAR_8));

 VAR_10 = FUNC_6(FUNC_7(VAR_6->dev), VAR_7, VAR_3);
 if (VAR_10 < 0)
  return VAR_10;

 if (VAR_7[0] == VAR_1) {
  FUNC_1(VAR_6->dev, "Found MOX A (eMMC CPU) module\n");
 } else if (VAR_7[0] == VAR_2) {
  FUNC_1(VAR_6->dev, "Found MOX A (CPU) module\n");
 } else {
  FUNC_0(VAR_6->dev, "Invalid Turris MOX A CPU module 0x%02x\n",
   VAR_7[0]);
  return -VAR_0;
 }

 VAR_6->count = 0;

 for (VAR_9 = 1; VAR_9 < VAR_3; ++VAR_9) {
  int VAR_11;

  if (VAR_7[VAR_9] == 0xff)
   break;

  VAR_11 = VAR_7[VAR_9] & 0xf;

  VAR_6->modules[VAR_9-1] = VAR_11;
  ++VAR_6->count;

  if (FUNC_4(VAR_11)) {
   FUNC_1(VAR_6->dev, "Found %s module\n",
     VAR_5[VAR_11].desc);

   if (FUNC_5(VAR_6, VAR_9-1, VAR_11, VAR_8[VAR_11]++) < 0)
    FUNC_0(VAR_6->dev,
     "  Cannot set IRQ for module %s\n",
     VAR_5[VAR_11].desc);
  } else {
   FUNC_2(VAR_6->dev,
     "Unknown Moxtet module found (ID 0x%02x)\n",
     VAR_11);
  }
 }

 return 0;
}
