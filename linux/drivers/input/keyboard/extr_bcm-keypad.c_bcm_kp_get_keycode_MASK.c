
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


struct bcm_kp {TYPE_1__* input_dev; int n_cols; } ;
struct TYPE_2__ {unsigned short* keycode; } ;


 size_t FUNC_0 (int,int,unsigned int) ;
 unsigned int FUNC_1 (int ) ;

__attribute__((used)) static int FUNC_2(struct bcm_kp *VAR_0, int VAR_1, int VAR_2)
{
 unsigned int VAR_3 = FUNC_1(VAR_0->n_cols);
 unsigned short *VAR_4 = VAR_0->input_dev->keycode;

 return VAR_4[FUNC_0(VAR_1, VAR_2, VAR_3)];
}
