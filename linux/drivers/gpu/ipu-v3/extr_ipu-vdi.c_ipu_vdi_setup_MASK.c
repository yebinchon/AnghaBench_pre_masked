
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef scalar_t__ u32 ;
struct ipu_vdi {int lock; } ;


 scalar_t__ VAR_0 ;
 scalar_t__ VAR_1 ;
 scalar_t__ VAR_2 ;
 scalar_t__ VAR_3 ;
 int VAR_4 ;
 scalar_t__ VAR_5 ;
 scalar_t__ VAR_6 ;
 scalar_t__ VAR_7 ;
 scalar_t__ VAR_8 ;
 scalar_t__ VAR_9 ;
 scalar_t__ VAR_10 ;
 scalar_t__ VAR_11 ;
 int VAR_12 ;
 scalar_t__ FUNC_0 (struct ipu_vdi*,int ) ;
 int FUNC_1 (struct ipu_vdi*,scalar_t__,int ) ;
 int FUNC_2 (int *,unsigned long) ;
 int FUNC_3 (int *,unsigned long) ;

void FUNC_4(struct ipu_vdi *VAR_13, u32 VAR_14, int VAR_15, int VAR_16)
{
 unsigned long VAR_17;
 u32 VAR_18, VAR_19;

 FUNC_2(&VAR_13->lock, VAR_17);

 VAR_19 = ((VAR_16 - 1) << 16) | (VAR_15 - 1);
 FUNC_1(VAR_13, VAR_19, VAR_12);





 if (VAR_14 == VAR_1 ||
     VAR_14 == VAR_0 ||
     VAR_14 == VAR_3 ||
     VAR_14 == VAR_2)
  VAR_18 = VAR_9;
 else
  VAR_18 = VAR_8;

 VAR_19 = FUNC_0(VAR_13, VAR_4);
 VAR_19 |= VAR_18;
 VAR_19 |= VAR_6;
 VAR_19 |= VAR_5 | VAR_10;
 VAR_19 |= VAR_7 | VAR_11;
 FUNC_1(VAR_13, VAR_19, VAR_4);

 FUNC_3(&VAR_13->lock, VAR_17);
}
