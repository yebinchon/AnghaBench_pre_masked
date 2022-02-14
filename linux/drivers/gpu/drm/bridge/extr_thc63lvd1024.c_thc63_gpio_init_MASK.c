
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct thc63_dev {void* pdwn; int dev; void* oe; } ;


 int VAR_0 ;
 int VAR_1 ;
 scalar_t__ FUNC_0 (void*) ;
 int FUNC_1 (void*) ;
 int FUNC_2 (int ,char*,int) ;
 void* FUNC_3 (int ,char*,int ) ;

__attribute__((used)) static int FUNC_4(struct thc63_dev *VAR_2)
{
 VAR_2->oe = FUNC_3(VAR_2->dev, "oe", VAR_1);
 if (FUNC_0(VAR_2->oe)) {
  FUNC_2(VAR_2->dev, "Unable to get \"oe-gpios\": %ld\n",
   FUNC_1(VAR_2->oe));
  return FUNC_1(VAR_2->oe);
 }

 VAR_2->pdwn = FUNC_3(VAR_2->dev, "powerdown",
           VAR_0);
 if (FUNC_0(VAR_2->pdwn)) {
  FUNC_2(VAR_2->dev, "Unable to get \"powerdown-gpios\": %ld\n",
   FUNC_1(VAR_2->pdwn));
  return FUNC_1(VAR_2->pdwn);
 }

 return 0;
}
