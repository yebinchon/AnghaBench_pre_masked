
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int u32 ;
struct etnaviv_gpu {scalar_t__ sec_mode; int dev; } ;


 scalar_t__ VAR_0 ;
 int FUNC_0 (int) ;
 int VAR_1 ;
 int VAR_2 ;
 int VAR_3 ;
 int VAR_4 ;
 int FUNC_1 (int ,char*,int,...) ;
 int FUNC_2 (struct etnaviv_gpu*,int) ;

__attribute__((used)) static void FUNC_3(struct etnaviv_gpu *VAR_5)
{
 u32 VAR_6, VAR_7;
 int VAR_8;

 if (VAR_5->sec_mode == VAR_0)
  VAR_6 = VAR_3;
 else
  VAR_6 = VAR_2;

 VAR_7 = FUNC_2(VAR_5, VAR_6);
 FUNC_1(VAR_5->dev, "MMU fault status 0x%08x\n", VAR_7);

 for (VAR_8 = 0; VAR_8 < 4; VAR_8++) {
  u32 VAR_9;

  if (!(VAR_7 & (VAR_4 << (VAR_8 * 4))))
   continue;

  if (VAR_5->sec_mode == VAR_0)
   VAR_9 = FUNC_0(VAR_8);
  else
   VAR_9 = VAR_1;

  FUNC_1(VAR_5->dev, "MMU %d fault addr 0x%08x\n", VAR_8,
        FUNC_2(VAR_5, VAR_9));
 }
}
