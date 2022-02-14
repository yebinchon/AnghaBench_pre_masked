
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct at91_twi_dev {scalar_t__ buf_len; int * buf; int dev; int use_alt_cmd; scalar_t__ base; } ;


 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 scalar_t__ VAR_3 ;
 int VAR_4 ;
 int FUNC_0 (struct at91_twi_dev*,int ,int ) ;
 int FUNC_1 (int ,char*,int ,scalar_t__) ;
 int FUNC_2 (int ,scalar_t__) ;

__attribute__((used)) static void FUNC_3(struct at91_twi_dev *VAR_5)
{
 if (!VAR_5->buf_len)
  return;


 FUNC_2(*VAR_5->buf, VAR_5->base + VAR_3);


 if (--VAR_5->buf_len == 0) {
  if (!VAR_5->use_alt_cmd)
   FUNC_0(VAR_5, VAR_0, VAR_2);
  FUNC_0(VAR_5, VAR_1, VAR_4);
 }

 FUNC_1(VAR_5->dev, "wrote 0x%x, to go %zu\n", *VAR_5->buf, VAR_5->buf_len);

 ++VAR_5->buf;
}
