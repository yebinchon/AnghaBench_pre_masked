
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_4__ TYPE_2__ ;
typedef struct TYPE_3__ TYPE_1__ ;


struct txx9dmac_dev {int dummy; } ;
struct TYPE_4__ {int CCR; } ;
struct TYPE_3__ {int CCR; } ;
struct txx9dmac_desc {TYPE_2__ hwdesc32; TYPE_1__ hwdesc; } ;


 int VAR_0 ;
 scalar_t__ FUNC_0 (struct txx9dmac_dev*) ;

__attribute__((used)) static inline void FUNC_1(struct txx9dmac_dev *VAR_1,
         struct txx9dmac_desc *VAR_2)
{
 if (FUNC_0(VAR_1))
  VAR_2->hwdesc.CCR |= VAR_0;
 else
  VAR_2->hwdesc32.CCR |= VAR_0;
}
