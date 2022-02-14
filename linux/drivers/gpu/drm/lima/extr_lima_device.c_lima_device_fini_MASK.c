
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct lima_device {int empty_vm; int dlbu_dma; scalar_t__ dlbu_cpu; int dev; } ;


 int VAR_0 ;
 int FUNC_0 (int ,int ,scalar_t__,int ) ;
 int FUNC_1 (struct lima_device*) ;
 int FUNC_2 (struct lima_device*) ;
 int FUNC_3 (struct lima_device*,int) ;
 int FUNC_4 (struct lima_device*) ;
 int VAR_1 ;
 int FUNC_5 (struct lima_device*) ;
 int FUNC_6 (int ) ;

void FUNC_7(struct lima_device *VAR_2)
{
 int VAR_3;

 FUNC_4(VAR_2);
 FUNC_2(VAR_2);

 for (VAR_3 = VAR_1 - 1; VAR_3 >= 0; VAR_3--)
  FUNC_3(VAR_2, VAR_3);

 if (VAR_2->dlbu_cpu)
  FUNC_0(VAR_2->dev, VAR_0,
       VAR_2->dlbu_cpu, VAR_2->dlbu_dma);

 FUNC_6(VAR_2->empty_vm);

 FUNC_5(VAR_2);

 FUNC_1(VAR_2);
}
