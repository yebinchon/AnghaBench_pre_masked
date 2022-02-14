
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int u32 ;
struct sata_gemini {scalar_t__ muxmode; int dev; scalar_t__ base; } ;


 int VAR_0 ;
 scalar_t__ VAR_1 ;
 scalar_t__ VAR_2 ;
 scalar_t__ VAR_3 ;
 scalar_t__ VAR_4 ;
 scalar_t__ VAR_5 ;
 scalar_t__ VAR_6 ;
 int VAR_7 ;
 int VAR_8 ;
 int VAR_9 ;
 int VAR_10 ;
 int VAR_11 ;
 int FUNC_0 (int ,char*,unsigned int,char*) ;
 int VAR_12 ;
 int FUNC_1 (int) ;
 int FUNC_2 (scalar_t__) ;
 scalar_t__ FUNC_3 (int,unsigned long) ;
 int FUNC_4 (int,scalar_t__) ;

__attribute__((used)) static int FUNC_5(struct sata_gemini *VAR_13,
        unsigned int VAR_14)
{
 unsigned long VAR_15 = VAR_12 + (VAR_11 * 1);
 bool VAR_16;
 u32 VAR_17;

 if (VAR_14 == 0) {
  VAR_17 = VAR_8 | VAR_7;

  if (VAR_13->muxmode == VAR_1)
   VAR_17 |= VAR_9;
  FUNC_4(VAR_17, VAR_13->base + VAR_3);
 } else {
  VAR_17 = VAR_8 | VAR_7;

  if (VAR_13->muxmode == VAR_2)
   VAR_17 |= VAR_9;
  FUNC_4(VAR_17, VAR_13->base + VAR_5);
 }


 FUNC_1(10);


 do {
  FUNC_1(100);

  if (VAR_14 == 0)
   VAR_17 = FUNC_2(VAR_13->base + VAR_4);
  else
   VAR_17 = FUNC_2(VAR_13->base + VAR_6);
  if (VAR_17 & VAR_10)
   break;
 } while (FUNC_3(VAR_12, VAR_15));

 VAR_16 = !!(VAR_17 & VAR_10);

 FUNC_0(VAR_13->dev, "SATA%d PHY %s\n", VAR_14,
   VAR_16 ? "ready" : "not ready");

 return VAR_16 ? 0: -VAR_0;
}
