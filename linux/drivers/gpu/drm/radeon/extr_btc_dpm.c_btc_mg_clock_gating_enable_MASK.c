
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int u32 ;
struct radeon_device {scalar_t__ family; } ;


 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int VAR_3 ;
 scalar_t__ VAR_4 ;
 scalar_t__ VAR_5 ;
 scalar_t__ VAR_6 ;
 int VAR_7 ;
 int VAR_8 ;
 int * VAR_9 ;
 int VAR_10 ;
 int FUNC_0 (struct radeon_device*,int const*,int ) ;
 int * VAR_11 ;
 int VAR_12 ;
 int * VAR_13 ;
 int VAR_14 ;

__attribute__((used)) static void FUNC_1(struct radeon_device *VAR_15,
           bool VAR_16)
{
 u32 VAR_17;
 const u32 *VAR_18 = ((void*)0);

 if (VAR_16) {
  if (VAR_15->family == VAR_4) {
   VAR_18 = (const u32 *)&VAR_10;
   VAR_17 = VAR_1;
  } else if (VAR_15->family == VAR_6) {
   VAR_18 = (const u32 *)&VAR_14;
   VAR_17 = VAR_8;
  } else if (VAR_15->family == VAR_5) {
   VAR_18 = (const u32 *)&VAR_12;
   VAR_17 = VAR_3;
  } else
   return;
 } else {
  if (VAR_15->family == VAR_4) {
   VAR_18 = (const u32 *)&VAR_9[0];
   VAR_17 = VAR_0;
  } else if (VAR_15->family == VAR_6) {
   VAR_18 = (const u32 *)&VAR_13[0];
   VAR_17 = VAR_7;
  } else if (VAR_15->family == VAR_5) {
   VAR_18 = (const u32 *)&VAR_11[0];
   VAR_17 = VAR_2;
  } else
   return;
 }

 FUNC_0(VAR_15, VAR_18, VAR_17);
}
