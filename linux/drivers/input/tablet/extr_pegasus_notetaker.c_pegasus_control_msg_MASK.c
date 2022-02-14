
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_3__ TYPE_1__ ;


typedef int u8 ;
struct pegasus {TYPE_1__* usbdev; } ;
struct TYPE_3__ {int dev; } ;


 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int VAR_3 ;
 int VAR_4 ;
 int VAR_5 ;
 int VAR_6 ;
 int VAR_7 ;
 int FUNC_0 (int *,char*,int) ;
 int FUNC_1 (int*) ;
 int* FUNC_2 (int const,int ) ;
 int FUNC_3 (int*,int*,int) ;
 scalar_t__ FUNC_4 (int) ;
 int FUNC_5 (TYPE_1__*,int ,int ,int,int ,int ,int*,int const,int ) ;
 int FUNC_6 (TYPE_1__*,int ) ;

__attribute__((used)) static int FUNC_7(struct pegasus *VAR_8, u8 *VAR_9, int VAR_10)
{
 const int VAR_11 = VAR_10 + 2;
 int VAR_12;
 int VAR_13;
 u8 *VAR_14;

 VAR_14 = FUNC_2(VAR_11, VAR_2);
 if (!VAR_14)
  return -VAR_1;

 VAR_14[0] = VAR_3;
 VAR_14[1] = VAR_10;
 FUNC_3(VAR_14 + 2, VAR_9, VAR_10);

 VAR_12 = FUNC_5(VAR_8->usbdev,
     FUNC_6(VAR_8->usbdev, 0),
     VAR_6,
     VAR_7 | VAR_5,
     0, 0, VAR_14, VAR_11,
     VAR_4);

 FUNC_1(VAR_14);

 if (FUNC_4(VAR_12 != VAR_11)) {
  VAR_13 = VAR_12 < 0 ? VAR_12 : -VAR_0;
  FUNC_0(&VAR_8->usbdev->dev, "control msg error: %d\n",
   VAR_13);
  return VAR_13;
 }

 return 0;
}
