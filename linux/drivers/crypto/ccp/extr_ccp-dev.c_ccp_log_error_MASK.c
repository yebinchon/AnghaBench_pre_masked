
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct ccp_device {int dev; } ;


 unsigned int FUNC_0 (int *) ;
 unsigned int VAR_0 ;
 scalar_t__ FUNC_1 (int) ;
 int * VAR_1 ;
 int FUNC_2 (int ,char*,unsigned int,...) ;

void FUNC_3(struct ccp_device *VAR_2, unsigned int VAR_3)
{
 if (FUNC_1(VAR_3 >= VAR_0))
  return;

 if (VAR_3 < FUNC_0(VAR_1))
  FUNC_2(VAR_2->dev, "CCP error %d: %s\n", VAR_3, VAR_1[VAR_3]);
 else
  FUNC_2(VAR_2->dev, "CCP error %d: Unknown Error\n", VAR_3);
}
