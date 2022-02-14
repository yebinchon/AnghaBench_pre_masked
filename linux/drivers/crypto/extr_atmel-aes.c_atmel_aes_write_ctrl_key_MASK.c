
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


typedef int u32 ;
struct TYPE_2__ {scalar_t__ has_dualbuff; } ;
struct atmel_aes_dev {int flags; TYPE_1__ caps; } ;


 int VAR_0 ;
 int FUNC_0 (int ) ;
 int VAR_1 ;
 int VAR_2 ;
 int FUNC_1 (int ) ;
 int VAR_3 ;
 int VAR_4 ;
 int VAR_5 ;
 int VAR_6 ;
 int VAR_7 ;
 int VAR_8 ;
 int VAR_9 ;
 int VAR_10 ;
 int VAR_11 ;
 int FUNC_2 (int) ;
 int FUNC_3 (struct atmel_aes_dev*,int ,int) ;
 int FUNC_4 (struct atmel_aes_dev*,int ,int const*) ;
 int FUNC_5 (struct atmel_aes_dev*,int ,int const*,int ) ;

__attribute__((used)) static void FUNC_6(struct atmel_aes_dev *VAR_12, bool VAR_13,
         const u32 *VAR_14, const u32 *VAR_15, int VAR_16)
{
 u32 VAR_17 = 0;


 if (VAR_16 == VAR_1)
  VAR_17 |= VAR_5;
 else if (VAR_16 == VAR_2)
  VAR_17 |= VAR_6;
 else
  VAR_17 |= VAR_7;

 VAR_17 |= VAR_12->flags & VAR_0;

 if (VAR_13) {
  VAR_17 |= VAR_11;
  if (VAR_12->caps.has_dualbuff)
   VAR_17 |= VAR_4;
 } else {
  VAR_17 |= VAR_10;
 }

 FUNC_3(VAR_12, VAR_3, VAR_17);

 FUNC_5(VAR_12, FUNC_1(0), VAR_15, FUNC_2(VAR_16));

 if (VAR_14 && (VAR_17 & VAR_9) != VAR_8)
  FUNC_4(VAR_12, FUNC_0(0), VAR_14);
}
