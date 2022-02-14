
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int uint8_t ;
struct bcm_kona_i2c_dev {scalar_t__ base; int device; int done; } ;


 int VAR_0 ;
 int VAR_1 ;
 scalar_t__ VAR_2 ;
 unsigned int VAR_3 ;
 unsigned int VAR_4 ;
 scalar_t__ VAR_5 ;
 unsigned int VAR_6 ;
 scalar_t__ VAR_7 ;
 int FUNC_0 (int ,char*) ;
 unsigned long FUNC_1 (int ) ;
 int FUNC_2 (scalar_t__) ;
 int FUNC_3 (int *) ;
 unsigned long FUNC_4 (int *,unsigned long) ;
 int FUNC_5 (unsigned int,scalar_t__) ;

__attribute__((used)) static int FUNC_6(struct bcm_kona_i2c_dev *VAR_8,
      uint8_t *VAR_9, unsigned int VAR_10,
      unsigned int VAR_11)
{
 unsigned long VAR_12 = FUNC_1(VAR_1);


 FUNC_3(&VAR_8->done);


 FUNC_5(VAR_3, VAR_8->base + VAR_2);


 FUNC_5((VAR_11 << VAR_4) |
        (VAR_10 << VAR_6),
  VAR_8->base + VAR_5);


 VAR_12 = FUNC_4(&VAR_8->done, VAR_12);


 FUNC_5(0, VAR_8->base + VAR_2);

 if (!VAR_12) {
  FUNC_0(VAR_8->device, "RX FIFO time out\n");
  return -VAR_0;
 }


 for (; VAR_10 > 0; VAR_10--, VAR_9++)
  *VAR_9 = FUNC_2(VAR_8->base + VAR_7);

 return 0;
}
