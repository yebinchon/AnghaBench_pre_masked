
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef scalar_t__ u32 ;
struct rv515_mc_save {int dummy; } ;
struct radeon_device {scalar_t__ family; scalar_t__ usec_timeout; int dev; int pdev; } ;


 int VAR_0 ;
 int VAR_1 ;
 scalar_t__ VAR_2 ;
 int VAR_3 ;
 int VAR_4 ;
 scalar_t__ VAR_5 ;
 int VAR_6 ;
 int FUNC_0 (int ) ;
 int VAR_7 ;
 scalar_t__ VAR_8 ;
 int VAR_9 ;
 scalar_t__ FUNC_1 (int) ;
 scalar_t__ FUNC_2 (int) ;
 scalar_t__ VAR_10 ;
 int FUNC_3 (int ,scalar_t__) ;
 int FUNC_4 (int ,char*) ;
 int FUNC_5 (int ,char*) ;
 int FUNC_6 (int) ;
 int FUNC_7 (int ) ;
 scalar_t__ FUNC_8 (struct radeon_device*) ;
 int FUNC_9 (struct radeon_device*) ;
 int FUNC_10 (struct radeon_device*,struct rv515_mc_save*) ;
 int FUNC_11 (struct radeon_device*) ;
 int FUNC_12 (int) ;

__attribute__((used)) static void FUNC_13(struct radeon_device *VAR_11)
{
 struct rv515_mc_save VAR_12;
 u32 VAR_13, VAR_14;

 FUNC_4(VAR_11->dev, "GPU pci config reset\n");




 if (VAR_11->family >= VAR_2)
  FUNC_3(VAR_7, FUNC_1(1) | FUNC_2(1));
 else
  FUNC_3(VAR_7, FUNC_1(1));


 FUNC_3(VAR_6, 0);


 VAR_13 = FUNC_0(VAR_4);
 VAR_13 &= ~VAR_5;
 FUNC_3(VAR_4, VAR_13);

 FUNC_6(50);


 if (VAR_11->family >= VAR_2)
  FUNC_11(VAR_11);

 FUNC_7(VAR_11->pdev);

 FUNC_10(VAR_11, &VAR_12);
 if (FUNC_8(VAR_11)) {
  FUNC_5(VAR_11->dev, "Wait for MC idle timedout !\n");
 }


 VAR_13 = FUNC_0(VAR_1);
 VAR_13 |= VAR_10;
 FUNC_3(VAR_1, VAR_13);

 VAR_13 = FUNC_0(VAR_0);


 FUNC_9(VAR_11);
 FUNC_6(1);


 VAR_13 = VAR_8;
 FUNC_3(VAR_9, VAR_13);
 FUNC_6(1);
 FUNC_3(VAR_9, 0);


 for (VAR_14 = 0; VAR_14 < VAR_11->usec_timeout; VAR_14++) {
  if (FUNC_0(VAR_3) != 0xffffffff)
   break;
  FUNC_12(1);
 }
}
