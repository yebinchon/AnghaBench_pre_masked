
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_3__ TYPE_1__ ;


struct atm_dev {int dummy; } ;
struct TYPE_3__ {int pci; scalar_t__ reg; } ;
typedef TYPE_1__ IADEV ;


 TYPE_1__* FUNC_0 (struct atm_dev*) ;
 scalar_t__ VAR_0 ;
 int VAR_1 ;
 int FUNC_1 (int ,int,unsigned int*) ;
 int FUNC_2 (int ,int,unsigned int) ;
 int FUNC_3 (int) ;
 int FUNC_4 (int ,scalar_t__) ;

__attribute__((used)) static int FUNC_5(struct atm_dev *VAR_2)
{
 IADEV *VAR_3;
 int VAR_4, VAR_5 = 1;
 unsigned int VAR_6[64];

 VAR_3 = FUNC_0(VAR_2);
 for(VAR_4=0; VAR_4<64; VAR_4++)
   if ((VAR_5 = FUNC_1(VAR_3->pci,
    VAR_4*4, &VAR_6[VAR_4])) != VAR_1)
         return VAR_5;
 FUNC_4(0, VAR_3->reg+VAR_0);
 for(VAR_4=0; VAR_4<64; VAR_4++)
   if ((VAR_5 = FUNC_2(VAR_3->pci,
     VAR_4*4, VAR_6[VAR_4])) != VAR_1)
     return VAR_5;
 FUNC_3(5);
 return 0;
}
