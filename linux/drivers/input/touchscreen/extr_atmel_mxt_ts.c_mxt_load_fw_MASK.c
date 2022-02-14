
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct mxt_data {int in_bootloader; int irq; int bl_completion; } ;
struct firmware {unsigned int size; int* data; } ;
struct device {int dummy; } ;


 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int VAR_3 ;
 unsigned int VAR_4 ;
 int VAR_5 ;
 int VAR_6 ;
 int FUNC_0 (struct device*,char*,unsigned int,unsigned int,...) ;
 int FUNC_1 (struct device*,char*,...) ;
 struct mxt_data* FUNC_2 (struct device*) ;
 int FUNC_3 (struct device*,char*) ;
 int FUNC_4 (int ) ;
 int FUNC_5 (int ) ;
 int FUNC_6 (unsigned int) ;
 int FUNC_7 (struct mxt_data*,int*,unsigned int) ;
 int FUNC_8 (struct mxt_data*,int ,int) ;
 int FUNC_9 (struct device*,struct firmware const*) ;
 int FUNC_10 (struct mxt_data*) ;
 int FUNC_11 (struct mxt_data*) ;
 int FUNC_12 (struct mxt_data*,int ) ;
 int FUNC_13 (struct mxt_data*,int) ;
 int FUNC_14 (struct mxt_data*,int ,int ,int) ;
 int FUNC_15 (struct mxt_data*,int *,int ) ;
 int FUNC_16 (int *) ;
 int FUNC_17 (struct firmware const*) ;
 int FUNC_18 (struct firmware const**,char const*,struct device*) ;

__attribute__((used)) static int FUNC_19(struct device *VAR_7, const char *VAR_8)
{
 struct mxt_data *VAR_9 = FUNC_2(VAR_7);
 const struct firmware *VAR_10 = ((void*)0);
 unsigned int VAR_11;
 unsigned int VAR_12 = 0;
 unsigned int VAR_13 = 0;
 unsigned int VAR_14 = 0;
 int VAR_15;

 VAR_15 = FUNC_18(&VAR_10, VAR_8, VAR_7);
 if (VAR_15) {
  FUNC_1(VAR_7, "Unable to open firmware %s\n", VAR_8);
  return VAR_15;
 }


 VAR_15 = FUNC_9(VAR_7, VAR_10);
 if (VAR_15)
  goto release_firmware;

 if (!VAR_9->in_bootloader) {

  VAR_9->in_bootloader = 1;

  VAR_15 = FUNC_14(VAR_9, VAR_1,
         VAR_0, 0);
  if (VAR_15)
   goto release_firmware;

  FUNC_6(VAR_4);


  VAR_15 = FUNC_12(VAR_9, 0);
  if (VAR_15)
   goto release_firmware;

  FUNC_10(VAR_9);
  FUNC_11(VAR_9);
 } else {
  FUNC_5(VAR_9->irq);
 }

 FUNC_16(&VAR_9->bl_completion);

 VAR_15 = FUNC_8(VAR_9, VAR_5, 0);
 if (VAR_15) {

  VAR_15 = FUNC_8(VAR_9, VAR_6, 0);
  if (VAR_15)
   goto disable_irq;
 } else {
  FUNC_3(VAR_7, "Unlocking bootloader\n");


  VAR_15 = FUNC_13(VAR_9, 1);
  if (VAR_15)
   goto disable_irq;
 }

 while (VAR_12 < VAR_10->size) {
  VAR_15 = FUNC_8(VAR_9, VAR_6, 1);
  if (VAR_15)
   goto disable_irq;

  VAR_11 = ((*(VAR_10->data + VAR_12) << 8) | *(VAR_10->data + VAR_12 + 1));


  VAR_11 += 2;


  VAR_15 = FUNC_7(VAR_9, VAR_10->data + VAR_12, VAR_11);
  if (VAR_15)
   goto disable_irq;

  VAR_15 = FUNC_8(VAR_9, VAR_2, 1);
  if (VAR_15) {
   VAR_13++;


   FUNC_6(VAR_13 * 20);

   if (VAR_13 > 20) {
    FUNC_1(VAR_7, "Retry count exceeded\n");
    goto disable_irq;
   }
  } else {
   VAR_13 = 0;
   VAR_12 += VAR_11;
   VAR_14++;
  }

  if (VAR_14 % 50 == 0)
   FUNC_0(VAR_7, "Sent %d frames, %d/%zd bytes\n",
    VAR_14, VAR_12, VAR_10->size);
 }


 VAR_15 = FUNC_15(VAR_9, &VAR_9->bl_completion,
          VAR_3);
 if (VAR_15)
  goto disable_irq;

 FUNC_0(VAR_7, "Sent %d frames, %d bytes\n", VAR_14, VAR_12);






 FUNC_15(VAR_9, &VAR_9->bl_completion, VAR_3);

 VAR_9->in_bootloader = 0;

disable_irq:
 FUNC_4(VAR_9->irq);
release_firmware:
 FUNC_17(VAR_10);
 return VAR_15;
}
