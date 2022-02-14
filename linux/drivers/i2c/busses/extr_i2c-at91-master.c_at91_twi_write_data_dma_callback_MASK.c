
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


struct TYPE_2__ {int * sg; } ;
struct at91_twi_dev {int use_alt_cmd; int buf_len; TYPE_1__ dma; int dev; } ;


 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int VAR_3 ;
 int VAR_4 ;
 int FUNC_0 (struct at91_twi_dev*,int ,int ) ;
 int FUNC_1 (int ,int ,int ,int ) ;
 int FUNC_2 (int *) ;

__attribute__((used)) static void FUNC_3(void *VAR_5)
{
 struct at91_twi_dev *VAR_6 = (struct at91_twi_dev *)VAR_5;

 FUNC_1(VAR_6->dev, FUNC_2(&VAR_6->dma.sg[0]),
    VAR_6->buf_len, VAR_4);
 FUNC_0(VAR_6, VAR_1, VAR_3);
 if (!VAR_6->use_alt_cmd)
  FUNC_0(VAR_6, VAR_0, VAR_2);
}
