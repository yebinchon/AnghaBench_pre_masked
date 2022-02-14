
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


typedef int uint32_t ;
struct ishtp_device {TYPE_1__* pdev; } ;
struct TYPE_2__ {scalar_t__ device; int revision; } ;


 scalar_t__ VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int VAR_3 ;
 int VAR_4 ;
 int VAR_5 ;
 int VAR_6 ;
 int VAR_7 ;
 int VAR_8 ;
 int VAR_9 ;
 int VAR_10 ;
 int VAR_11 ;
 int VAR_12 ;
 int FUNC_0 (struct ishtp_device*,int ) ;
 int FUNC_1 (struct ishtp_device*,int ,int) ;

__attribute__((used)) static void FUNC_2(struct ishtp_device *VAR_13)
{
 if (VAR_13->pdev->device == VAR_0) {
  if (VAR_13->pdev->revision == VAR_6 ||
    (VAR_13->pdev->revision & VAR_12) ==
    VAR_7)
   FUNC_1(VAR_13, VAR_4, 0x81);
  else if (VAR_13->pdev->revision == VAR_8 ||
    (VAR_13->pdev->revision & VAR_12) ==
    VAR_9 ||
    (VAR_13->pdev->revision & VAR_12) ==
    VAR_11 ||
    (VAR_13->pdev->revision & VAR_12) ==
    VAR_10) {
   uint32_t VAR_14;

   VAR_14 = FUNC_0(VAR_13, VAR_4);
   VAR_14 |= VAR_2 | 0x81;
   FUNC_1(VAR_13, VAR_4, VAR_14);
  }
 } else {
   uint32_t VAR_15;

   VAR_15 = FUNC_0(VAR_13, VAR_5);
   VAR_15 |= VAR_3;




   VAR_15 &= ~VAR_1;

   FUNC_1(VAR_13, VAR_5, VAR_15);
 }
}
