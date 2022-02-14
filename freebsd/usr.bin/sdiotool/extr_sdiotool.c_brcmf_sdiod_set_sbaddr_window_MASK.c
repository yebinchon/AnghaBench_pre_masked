
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int u8 ;
typedef int u32 ;
struct brcmf_sdio_dev {scalar_t__ state; } ;


 scalar_t__ VAR_0 ;
 int VAR_1 ;
 scalar_t__ VAR_2 ;
 int VAR_3 ;
 int VAR_4 ;
 int VAR_5 ;
 int FUNC_0 (char*,scalar_t__) ;
 int FUNC_1 (struct brcmf_sdio_dev*,scalar_t__,int,int*,int) ;

__attribute__((used)) static int
FUNC_2(struct brcmf_sdio_dev *VAR_6, u32 VAR_7)
{
 int VAR_8 = 0, VAR_9;
 u8 VAR_10[3];

 if (VAR_6->state == VAR_0)
  return -VAR_1;

 VAR_10[0] = (VAR_7 >> 8) & VAR_4;
 VAR_10[1] = (VAR_7 >> 16) & VAR_5;
 VAR_10[2] = (VAR_7 >> 24) & VAR_3;

 for (VAR_9 = 0; VAR_9 < 3; VAR_9++) {
  VAR_8 = FUNC_1(VAR_6,
            VAR_2 + VAR_9,
            sizeof(u8), &VAR_10[VAR_9], 1);
  if (VAR_8) {
   FUNC_0("failed at addr: 0x%0x\n",
      VAR_2 + VAR_9);
   break;
  }
 }

 return VAR_8;
}
