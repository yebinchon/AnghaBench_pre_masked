
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_8__ TYPE_4__ ;
typedef struct TYPE_7__ TYPE_3__ ;
typedef struct TYPE_6__ TYPE_2__ ;
typedef struct TYPE_5__ TYPE_1__ ;


typedef int u32 ;
struct TYPE_7__ {scalar_t__ offset; } ;
struct TYPE_6__ {unsigned long size; scalar_t__ offset; } ;
struct TYPE_5__ {int offset; } ;
struct TYPE_8__ {int paddr; TYPE_3__ code; TYPE_2__ data; TYPE_1__ bin_data; int vaddr; } ;
struct falcon {int dev; TYPE_4__ firmware; scalar_t__ regs; } ;


 int VAR_0 ;
 scalar_t__ VAR_1 ;
 scalar_t__ VAR_2 ;
 int VAR_3 ;
 scalar_t__ VAR_4 ;
 int VAR_5 ;
 int VAR_6 ;
 scalar_t__ VAR_7 ;
 scalar_t__ VAR_8 ;
 int FUNC_0 (int) ;
 int VAR_9 ;
 int VAR_10 ;
 int VAR_11 ;
 int VAR_12 ;
 scalar_t__ VAR_13 ;
 int FUNC_1 (int) ;
 int VAR_14 ;
 int VAR_15 ;
 int VAR_16 ;
 int VAR_17 ;
 int VAR_18 ;
 scalar_t__ VAR_19 ;
 int VAR_20 ;
 int VAR_21 ;
 int VAR_22 ;
 int VAR_23 ;
 int FUNC_2 (int ,char*) ;
 int FUNC_3 (struct falcon*,scalar_t__,unsigned long,int ) ;
 int FUNC_4 (struct falcon*) ;
 int FUNC_5 (struct falcon*,int,scalar_t__) ;
 int FUNC_6 (scalar_t__,int,int,int,int) ;

int FUNC_7(struct falcon *VAR_24)
{
 unsigned long VAR_25;
 u32 VAR_26;
 int VAR_27;

 if (!VAR_24->firmware.vaddr)
  return -VAR_0;

 VAR_27 = FUNC_6(VAR_24->regs + VAR_4, VAR_26,
     (VAR_26 & (VAR_6 |
        VAR_5)) == 0,
     10, 10000);
 if (VAR_27 < 0)
  return VAR_27;

 FUNC_5(VAR_24, 0, VAR_4);


 FUNC_5(VAR_24, (VAR_24->firmware.paddr +
          VAR_24->firmware.bin_data.offset) >> 8,
        VAR_7);


 for (VAR_25 = 0; VAR_25 < VAR_24->firmware.data.size; VAR_25 += 256)
  FUNC_3(VAR_24,
      VAR_24->firmware.data.offset + VAR_25,
      VAR_25, VAR_22);


 FUNC_3(VAR_24, VAR_24->firmware.code.offset,
     0, VAR_23);


 FUNC_5(VAR_24, FUNC_1(0xff) |
         VAR_17 |
         VAR_16 |
         VAR_14 |
         VAR_15 |
         VAR_18,
        VAR_13);
 FUNC_5(VAR_24, FUNC_0(0xff) |
         VAR_12 |
         VAR_11 |
         VAR_9 |
         VAR_10,
        VAR_8);


 FUNC_5(VAR_24, VAR_21 |
         VAR_20,
        VAR_19);


 FUNC_5(VAR_24, 0x00000000, VAR_1);
 FUNC_5(VAR_24, VAR_3, VAR_2);

 VAR_27 = FUNC_4(VAR_24);
 if (VAR_27 < 0) {
  FUNC_2(VAR_24->dev, "Falcon boot failed due to timeout\n");
  return VAR_27;
 }

 return 0;
}
