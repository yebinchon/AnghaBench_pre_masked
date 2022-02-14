
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


typedef int u32 ;
typedef int u16 ;
struct TYPE_2__ {int pcidev; int bridge_dev; } ;


 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int VAR_3 ;
 int VAR_4 ;
 int VAR_5 ;
 int VAR_6 ;
 unsigned int FUNC_0 (int) ;
 unsigned int VAR_7 ;
 TYPE_1__ VAR_8 ;
 int FUNC_1 (int ,int ,int*) ;
 int FUNC_2 (int ,int ,int*) ;
 unsigned int FUNC_3 (int ,int) ;

__attribute__((used)) static unsigned int FUNC_4(void)
{
 unsigned int VAR_9;

 if (VAR_6 == 1) {
  u32 VAR_10;

  FUNC_1(VAR_8.bridge_dev,
          VAR_2, &VAR_10);

  if ((VAR_10 & VAR_1)
    == VAR_0)
   VAR_9 = FUNC_0(32);
  else
   VAR_9 = FUNC_0(64);
 } else if (VAR_6 == 2) {
  u16 VAR_11;

  FUNC_2(VAR_8.bridge_dev,
         VAR_3, &VAR_11);

  if ((VAR_11 & VAR_5) == VAR_4)
   VAR_9 = FUNC_0(64);
  else
   VAR_9 = FUNC_0(128);
 } else {

  VAR_9 = FUNC_3(VAR_8.pcidev, 2);
 }

 return VAR_9 >> VAR_7;
}
