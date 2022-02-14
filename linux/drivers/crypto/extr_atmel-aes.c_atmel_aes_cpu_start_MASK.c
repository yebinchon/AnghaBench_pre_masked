
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int u32 ;
struct scatterlist {int dummy; } ;
struct atmel_aes_dev {size_t total; size_t datalen; int * data; scalar_t__ buf; int cpu_transfer_complete; struct scatterlist* real_dst; } ;
typedef int atmel_aes_fn_t ;


 int VAR_0 ;
 int FUNC_0 (int ) ;
 int VAR_1 ;
 int VAR_2 ;
 size_t FUNC_1 (size_t,int ) ;
 int FUNC_2 (struct atmel_aes_dev*,int ) ;
 int FUNC_3 (struct atmel_aes_dev*,int ,int *) ;
 int FUNC_4 (struct scatterlist*,int ,scalar_t__,size_t) ;
 int FUNC_5 (struct scatterlist*) ;
 scalar_t__ FUNC_6 (int) ;

__attribute__((used)) static int FUNC_7(struct atmel_aes_dev *VAR_3,
          struct scatterlist *VAR_4,
          struct scatterlist *VAR_5,
          size_t VAR_6,
          atmel_aes_fn_t VAR_7)
{
 size_t VAR_8 = FUNC_1(VAR_6, VAR_0);

 if (FUNC_6(VAR_6 == 0))
  return -VAR_1;

 FUNC_4(VAR_4, FUNC_5(VAR_4), VAR_3->buf, VAR_6);

 VAR_3->total = VAR_6;
 VAR_3->real_dst = VAR_5;
 VAR_3->cpu_transfer_complete = VAR_7;
 VAR_3->datalen = VAR_6 + VAR_8;
 VAR_3->data = (u32 *)VAR_3->buf;
 FUNC_3(VAR_3, FUNC_0(0), VAR_3->data);
 return FUNC_2(VAR_3, VAR_2);
}
