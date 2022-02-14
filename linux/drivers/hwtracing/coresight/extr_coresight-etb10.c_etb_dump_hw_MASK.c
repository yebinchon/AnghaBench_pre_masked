
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


typedef int u8 ;
typedef int u32 ;
struct etb_drvdata {int buffer_depth; scalar_t__ base; int * buf; TYPE_1__* csdev; } ;
struct device {int dummy; } ;
struct TYPE_2__ {struct device dev; } ;


 int FUNC_0 (scalar_t__) ;
 int FUNC_1 (scalar_t__) ;
 int VAR_0 ;
 scalar_t__ VAR_1 ;
 scalar_t__ VAR_2 ;
 scalar_t__ VAR_3 ;
 int VAR_4 ;
 scalar_t__ VAR_5 ;
 int FUNC_2 (int *) ;
 int FUNC_3 (struct device*,char*,unsigned long,...) ;
 int FUNC_4 (scalar_t__) ;
 int FUNC_5 (int,scalar_t__) ;

__attribute__((used)) static void FUNC_6(struct etb_drvdata *VAR_6)
{
 bool VAR_7 = 0;
 int VAR_8;
 u8 *VAR_9;
 u32 VAR_10, VAR_11;
 u32 VAR_12, VAR_13;
 u32 VAR_14, VAR_15;
 struct device *VAR_16 = &VAR_6->csdev->dev;

 FUNC_1(VAR_6->base);

 VAR_12 = FUNC_4(VAR_6->base + VAR_2);
 VAR_13 = FUNC_4(VAR_6->base + VAR_3);

 VAR_14 = VAR_13 % VAR_0;
 VAR_15 = VAR_0 - VAR_14;
 if (VAR_14) {
  FUNC_3(VAR_16,
   "write_ptr: %lu not aligned to formatter frame size\n",
   (unsigned long)VAR_13);
  FUNC_3(VAR_16, "frameoff: %lu, frame_endoff: %lu\n",
   (unsigned long)VAR_14, (unsigned long)VAR_15);
  VAR_13 += VAR_15;
 }

 if ((FUNC_4(VAR_6->base + VAR_5)
        & VAR_4) == 0) {
  FUNC_5(0x0, VAR_6->base + VAR_2);
 } else {
  FUNC_5(VAR_13, VAR_6->base + VAR_2);
  VAR_7 = 1;
 }

 VAR_11 = VAR_6->buffer_depth;
 VAR_9 = VAR_6->buf;
 for (VAR_8 = 0; VAR_8 < VAR_11; VAR_8++) {
  VAR_10 = FUNC_4(VAR_6->base +
       VAR_1);
  *(u32 *)VAR_9 = VAR_10;
  VAR_9 += 4;
 }

 if (VAR_7)
  FUNC_2(VAR_6->buf);

 if (VAR_14) {
  VAR_9 -= (VAR_15 * 4);
  for (VAR_8 = 0; VAR_8 < VAR_15; VAR_8++) {
   *VAR_9++ = 0x0;
   *VAR_9++ = 0x0;
   *VAR_9++ = 0x0;
   *VAR_9++ = 0x0;
  }
 }

 FUNC_5(VAR_12, VAR_6->base + VAR_2);

 FUNC_0(VAR_6->base);
}
