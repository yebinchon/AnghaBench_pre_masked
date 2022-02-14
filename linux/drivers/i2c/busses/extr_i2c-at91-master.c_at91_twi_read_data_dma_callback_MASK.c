
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


struct TYPE_2__ {int * sg; } ;
struct at91_twi_dev {int buf_len; int buf; int use_alt_cmd; TYPE_1__ dma; int dev; } ;


 int VAR_0 ;
 unsigned int VAR_1 ;
 unsigned int VAR_2 ;
 int VAR_3 ;
 int FUNC_0 (struct at91_twi_dev*,int ,unsigned int) ;
 int FUNC_1 (int ,int ,int,int ) ;
 int FUNC_2 (int *) ;

__attribute__((used)) static void FUNC_3(void *VAR_4)
{
 struct at91_twi_dev *VAR_5 = (struct at91_twi_dev *)VAR_4;
 unsigned VAR_6 = VAR_2;

 FUNC_1(VAR_5->dev, FUNC_2(&VAR_5->dma.sg[0]),
    VAR_5->buf_len, VAR_3);

 if (!VAR_5->use_alt_cmd) {

  VAR_5->buf += VAR_5->buf_len - 2;
  VAR_5->buf_len = 2;
  VAR_6 |= VAR_1;
 }
 FUNC_0(VAR_5, VAR_0, VAR_6);
}
