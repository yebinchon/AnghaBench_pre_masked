
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int u64 ;
typedef int u32 ;
struct panfrost_device {int dev; } ;
typedef int irqreturn_t ;


 int FUNC_0 (int) ;
 int FUNC_1 (int) ;
 int FUNC_2 (int) ;
 int FUNC_3 (int) ;
 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int VAR_3 ;
 int FUNC_4 (int) ;
 int FUNC_5 (struct panfrost_device*,int) ;
 int FUNC_6 (int ,char*,int,int,char*,int,char*,int,int ,int,int ,int) ;
 int FUNC_7 (struct panfrost_device*,int ) ;
 int FUNC_8 (struct panfrost_device*,int ,int) ;
 int FUNC_9 (struct panfrost_device*,int) ;
 int FUNC_10 (struct panfrost_device*,int,int) ;

__attribute__((used)) static irqreturn_t FUNC_11(int VAR_4, void *VAR_5)
{
 struct panfrost_device *VAR_6 = VAR_5;
 u32 VAR_7 = FUNC_7(VAR_6, VAR_3);
 int VAR_8, VAR_9;

 for (VAR_8 = 0; VAR_7; VAR_8++) {
  u32 VAR_10 = FUNC_3(VAR_8) | FUNC_3(VAR_8 + 16);
  u64 VAR_11;
  u32 VAR_12;
  u32 VAR_13;
  u32 VAR_14;
  u32 VAR_15;

  if (!(VAR_7 & VAR_10))
   continue;

  VAR_12 = FUNC_7(VAR_6, FUNC_2(VAR_8));
  VAR_11 = FUNC_7(VAR_6, FUNC_1(VAR_8));
  VAR_11 |= (u64)FUNC_7(VAR_6, FUNC_0(VAR_8)) << 32;


  VAR_13 = VAR_12 & 0xFF;
  VAR_14 = (VAR_12 >> 8) & 0x3;
  VAR_15 = (VAR_12 >> 16);


  if ((VAR_7 & VAR_10) == FUNC_3(VAR_8)) {
   FUNC_4(VAR_13 < 0xC1 || VAR_13 > 0xC4);

   VAR_9 = FUNC_10(VAR_6, VAR_8, VAR_11);
   if (!VAR_9) {
    FUNC_8(VAR_6, VAR_1, FUNC_3(VAR_8));
    VAR_7 &= ~VAR_10;
    continue;
   }
  }


  FUNC_6(VAR_6->dev,
   "Unhandled Page fault in AS%d at VA 0x%016llX\n"
   "Reason: %s\n"
   "raw fault status: 0x%X\n"
   "decoded fault status: %s\n"
   "exception type 0x%X: %s\n"
   "access type 0x%X: %s\n"
   "source id 0x%X\n",
   VAR_8, VAR_11,
   "TODO",
   VAR_12,
   (VAR_12 & (1 << 10) ? "DECODER FAULT" : "SLAVE FAULT"),
   VAR_13, FUNC_9(VAR_6, VAR_13),
   VAR_14, FUNC_5(VAR_6, VAR_12),
   VAR_15);

  FUNC_8(VAR_6, VAR_1, VAR_10);

  VAR_7 &= ~VAR_10;
 }

 FUNC_8(VAR_6, VAR_2, ~0);
 return VAR_0;
}
