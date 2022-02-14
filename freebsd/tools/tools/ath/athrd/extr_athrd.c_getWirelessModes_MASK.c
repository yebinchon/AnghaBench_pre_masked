
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int u_int ;
struct ath_hal {int dummy; } ;


 scalar_t__ VAR_0 ;
 scalar_t__ VAR_1 ;
 scalar_t__ VAR_2 ;
 int VAR_3 ;
 int VAR_4 ;
 int VAR_5 ;
 int VAR_6 ;
 int VAR_7 ;
 int VAR_8 ;
 int VAR_9 ;
 int VAR_10 ;
 int VAR_11 ;
 int VAR_12 ;
 int VAR_13 ;
 scalar_t__ VAR_14 ;
 scalar_t__ VAR_15 ;
 int VAR_16 ;
 int VAR_17 ;

__attribute__((used)) static u_int
FUNC_0(struct ath_hal *VAR_18)
{
 u_int VAR_19 = 0;

 if (VAR_0) {
  VAR_19 = VAR_4;
  if (!VAR_17)
   VAR_19 |= VAR_13;
 }
 if (VAR_1)
  VAR_19 |= VAR_5;
 if (VAR_2) {
  VAR_19 |= VAR_6;
  if (!VAR_16)
   VAR_19 |= VAR_3;
 }
 if (VAR_14)
  VAR_19 |= VAR_10|VAR_7;
 if (VAR_15)
  VAR_19 |= VAR_12|VAR_9
       | VAR_11|VAR_8
       ;
 return VAR_19;
}
