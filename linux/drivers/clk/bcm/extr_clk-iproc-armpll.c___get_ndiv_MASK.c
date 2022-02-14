
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int u32 ;
struct iproc_arm_pll {scalar_t__ base; } ;


 int VAR_0 ;
 int VAR_1 ;
 scalar_t__ VAR_2 ;
 int VAR_3 ;
 scalar_t__ VAR_4 ;
 int VAR_5 ;
 int VAR_6 ;
 int VAR_7 ;
 scalar_t__ VAR_8 ;
 int VAR_9 ;
 int FUNC_0 (scalar_t__) ;

__attribute__((used)) static unsigned int FUNC_1(struct iproc_arm_pll *VAR_10)
{
 u32 VAR_11;
 unsigned int VAR_12, VAR_13, VAR_14;

 VAR_11 = FUNC_0(VAR_10->base + VAR_8);
 if (VAR_11 & (1 << VAR_9)) {




  VAR_12 = (VAR_11 >> VAR_7) &
   VAR_6;
  if (VAR_12 == 0)
   VAR_12 = 256;

  VAR_13 = VAR_11 & VAR_5;
 } else {

  VAR_11 = FUNC_0(VAR_10->base + VAR_2);
  VAR_12 = (VAR_11 >> VAR_1) &
   VAR_0;
  if (VAR_12 == 0)
   VAR_12 = 1024;

  VAR_11 = FUNC_0(VAR_10->base + VAR_4);
  VAR_13 = VAR_11 & VAR_3;
 }

 VAR_14 = (VAR_12 << 20) | VAR_13;

 return VAR_14;
}
