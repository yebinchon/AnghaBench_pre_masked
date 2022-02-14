
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int uint8_t ;
struct bcm_kona_i2c_dev {int device; scalar_t__ base; int done; int irq; } ;


 int VAR_0 ;
 scalar_t__ VAR_1 ;
 scalar_t__ VAR_2 ;
 int VAR_3 ;
 scalar_t__ VAR_4 ;
 unsigned int VAR_5 ;
 int VAR_6 ;
 int VAR_7 ;
 int VAR_8 ;
 scalar_t__ VAR_9 ;
 int FUNC_0 (int ,char*) ;
 int FUNC_1 (int ) ;
 int FUNC_2 (int ) ;
 unsigned long FUNC_3 (int ) ;
 int FUNC_4 (scalar_t__) ;
 int FUNC_5 (int *) ;
 unsigned long FUNC_6 (int *,unsigned long) ;
 int FUNC_7 (int,scalar_t__) ;

__attribute__((used)) static int FUNC_8(struct bcm_kona_i2c_dev *VAR_10,
       uint8_t *VAR_11, unsigned int VAR_12)
{
 int VAR_13;
 unsigned long VAR_14 = FUNC_3(VAR_6);
 unsigned int VAR_15;


 FUNC_5(&VAR_10->done);


 FUNC_7(VAR_7 | VAR_8,
        VAR_10->base + VAR_9);


 FUNC_1(VAR_10->irq);


 for (VAR_13 = 0; VAR_13 < VAR_12; VAR_13++)
  FUNC_7(VAR_11[VAR_13], (VAR_10->base + VAR_2));


 FUNC_2(VAR_10->irq);


 do {
  VAR_14 = FUNC_6(&VAR_10->done, VAR_14);
  VAR_15 = FUNC_4(VAR_10->base + VAR_4);
 } while (VAR_14 && !(VAR_15 & VAR_5));


 FUNC_7(0, VAR_10->base + VAR_9);


 if (FUNC_4(VAR_10->base + VAR_1) & VAR_0) {
  FUNC_0(VAR_10->device, "unexpected NAK\n");
  return -VAR_3;
 }


 if (!VAR_14) {
  FUNC_0(VAR_10->device, "completion timed out\n");
  return -VAR_3;
 }

 return 0;
}
