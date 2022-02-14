
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


struct TYPE_2__ {int dev; } ;
struct hidma_dev {int lldev; TYPE_1__ ddev; } ;


 int FUNC_0 (int ) ;
 int FUNC_1 (int ) ;

__attribute__((used)) static void FUNC_2(unsigned long VAR_0)
{
 struct hidma_dev *VAR_1 = (struct hidma_dev *)VAR_0;

 FUNC_1(VAR_1->ddev.dev);
 FUNC_0(VAR_1->lldev);
}
