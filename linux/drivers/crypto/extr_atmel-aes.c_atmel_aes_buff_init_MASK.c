
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct atmel_aes_dev {int buflen; int dev; void* buf; } ;


 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int VAR_3 ;
 int VAR_4 ;
 scalar_t__ FUNC_0 (int ,int ) ;
 int FUNC_1 (int ,char*) ;

__attribute__((used)) static int FUNC_2(struct atmel_aes_dev *VAR_5)
{
 VAR_5->buf = (void *)FUNC_0(VAR_4, VAR_1);
 VAR_5->buflen = VAR_2;
 VAR_5->buflen &= ~(VAR_0 - 1);

 if (!VAR_5->buf) {
  FUNC_1(VAR_5->dev, "unable to alloc pages.\n");
  return -VAR_3;
 }

 return 0;
}
