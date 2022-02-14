
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct ims_pcu {int dev; } ;


 int VAR_0 ;
 int FUNC_0 (int ,char*,int) ;
 int FUNC_1 (struct ims_pcu*,int ,int *,int ) ;

__attribute__((used)) static int FUNC_2(struct ims_pcu *VAR_1)
{
 int VAR_2;


 VAR_2 = FUNC_1(VAR_1, VAR_0, ((void*)0), 0);
 if (VAR_2) {
  FUNC_0(VAR_1->dev,
   "Failure when sending JUMP TO BOOLTLOADER command, error: %d\n",
   VAR_2);
  return VAR_2;
 }

 return 0;
}
