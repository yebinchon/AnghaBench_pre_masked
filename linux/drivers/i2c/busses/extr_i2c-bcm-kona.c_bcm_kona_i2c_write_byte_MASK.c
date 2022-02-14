
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int uint8_t ;
struct bcm_kona_i2c_dev {int device; scalar_t__ base; int done; } ;


 int VAR_0 ;
 scalar_t__ VAR_1 ;
 scalar_t__ VAR_2 ;
 int VAR_3 ;
 int VAR_4 ;
 int VAR_5 ;
 int VAR_6 ;
 scalar_t__ VAR_7 ;
 scalar_t__ VAR_8 ;
 int VAR_9 ;
 int FUNC_0 (struct bcm_kona_i2c_dev*) ;
 int FUNC_1 (int ,char*) ;
 unsigned long FUNC_2 (int ) ;
 int FUNC_3 (scalar_t__) ;
 int FUNC_4 (int *) ;
 unsigned long FUNC_5 (int *,unsigned long) ;
 int FUNC_6 (int ,scalar_t__) ;

__attribute__((used)) static int FUNC_7(struct bcm_kona_i2c_dev *VAR_10, uint8_t VAR_11,
       unsigned int VAR_12)
{
 int VAR_13;
 unsigned long VAR_14 = FUNC_2(VAR_5);
 unsigned int VAR_15;


 VAR_13 = FUNC_0(VAR_10);
 if (VAR_13 < 0)
  return VAR_13;


 FUNC_6(VAR_9, VAR_10->base + VAR_8);


 FUNC_6(VAR_6, VAR_10->base + VAR_7);


 FUNC_4(&VAR_10->done);


 FUNC_6(VAR_11, VAR_10->base + VAR_2);


 VAR_14 = FUNC_5(&VAR_10->done, VAR_14);


 FUNC_6(0, VAR_10->base + VAR_7);

 if (!VAR_14) {
  FUNC_1(VAR_10->device, "controller timed out\n");
  return -VAR_4;
 }

 VAR_15 = FUNC_3(VAR_10->base + VAR_1) & VAR_0 ? 1 : 0;

 if (VAR_15 ^ VAR_12) {
  FUNC_1(VAR_10->device, "unexpected NAK/ACK\n");
  return -VAR_3;
 }

 return 0;
}
