
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int u8 ;
typedef int u32 ;
struct brcmf_sdio_dev {scalar_t__ state; } ;
typedef scalar_t__ s32 ;


 scalar_t__ VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int VAR_3 ;
 int VAR_4 ;
 scalar_t__ VAR_5 ;
 int VAR_6 ;
 int VAR_7 ;
 int FUNC_0 (int ,char*,char*,int ,int,int) ;
 int FUNC_1 (char*,char*,int ,int,int) ;
 int FUNC_2 (struct brcmf_sdio_dev*,scalar_t__) ;
 int FUNC_3 (struct brcmf_sdio_dev*,int ,int,int ,void*,int) ;
 int FUNC_4 (void*,int ,int ) ;
 int FUNC_5 (int,int) ;

__attribute__((used)) static int FUNC_6(struct brcmf_sdio_dev *VAR_8, u32 VAR_9, u8 VAR_10, void *VAR_11, bool VAR_12) {
 u8 VAR_13;
 s32 VAR_14 = 0;
 int VAR_15;

 if (VAR_8->state == VAR_0)
  return -VAR_1;







 if ((VAR_9 & ~VAR_2) == 0)
  VAR_13 = VAR_6;
 else
  VAR_13 = VAR_7;

 do {
  if (!VAR_12)
   FUNC_4(VAR_11, 0, VAR_10);

  if (VAR_14)
   FUNC_5(1000, 2000);
  VAR_15 = FUNC_3(VAR_8, VAR_13, VAR_9, VAR_10,
            VAR_11, VAR_12);
 } while (VAR_15 != 0 && VAR_15 != -VAR_1 &&
   VAR_14++ < VAR_5);

 if (VAR_15 == -VAR_1)
  FUNC_2(VAR_8, VAR_0);
 else if (VAR_15 != 0) {





  if (VAR_9 != VAR_3)
   FUNC_1("failed to %s data F%d@0x%05x, err: %d\n",
      VAR_12 ? "write" : "read", VAR_13, VAR_9, VAR_15);
  else
   FUNC_0(VAR_4, "failed to %s data F%d@0x%05x, err: %d\n",
      VAR_12 ? "write" : "read", VAR_13, VAR_9, VAR_15);
 }
 return VAR_15;
}
