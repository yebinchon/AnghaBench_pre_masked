
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef scalar_t__ uint ;
typedef scalar_t__ u32 ;
struct brcmf_sdio_dev {scalar_t__ sbwad; } ;


 scalar_t__ VAR_0 ;
 scalar_t__ VAR_1 ;
 int FUNC_0 (struct brcmf_sdio_dev*,scalar_t__) ;

__attribute__((used)) static int
FUNC_1(struct brcmf_sdio_dev *VAR_2, uint VAR_3, u32 *VAR_4)
{
 uint VAR_5 = *VAR_4 & ~VAR_1;
 int VAR_6 = 0;

 if (VAR_5 != VAR_2->sbwad) {
  VAR_6 = FUNC_0(VAR_2, VAR_5);
  if (VAR_6)
   return VAR_6;

  VAR_2->sbwad = VAR_5;
 }

 *VAR_4 &= VAR_1;

 if (VAR_3 == 4)
  *VAR_4 |= VAR_0;

 return 0;
}
