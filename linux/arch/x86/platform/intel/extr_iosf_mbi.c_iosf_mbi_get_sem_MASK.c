
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


typedef int u32 ;
struct TYPE_2__ {int dev; } ;


 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int FUNC_0 (int *,char*) ;
 int FUNC_1 (int ,int ,int ,int *) ;
 int VAR_3 ;
 TYPE_1__* VAR_4 ;

__attribute__((used)) static int FUNC_2(u32 *VAR_5)
{
 int VAR_6;

 VAR_6 = FUNC_1(VAR_0, VAR_1,
       VAR_3, VAR_5);
 if (VAR_6) {
  FUNC_0(&VAR_4->dev, "Error P-Unit semaphore read failed\n");
  return VAR_6;
 }

 *VAR_5 &= VAR_2;
 return 0;
}
