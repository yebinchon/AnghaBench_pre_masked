
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int u32 ;
struct radeon_device {scalar_t__ family; } ;


 int VAR_0 ;
 int VAR_1 ;
 scalar_t__ VAR_2 ;
 scalar_t__ VAR_3 ;
 scalar_t__ VAR_4 ;
 int VAR_5 ;
 int VAR_6 ;
 int FUNC_0 (struct radeon_device*,int const*,int ) ;
 int VAR_7 ;
 int VAR_8 ;

__attribute__((used)) static void FUNC_1(struct radeon_device *VAR_9)
{
 u32 VAR_10;
 const u32 *VAR_11 = ((void*)0);

 if (VAR_9->family == VAR_2) {
  VAR_11 = (const u32 *)&VAR_6;
  VAR_10 = VAR_0;
 } else if (VAR_9->family == VAR_4) {
  VAR_11 = (const u32 *)&VAR_8;
  VAR_10 = VAR_5;
 } else if (VAR_9->family == VAR_3) {
  VAR_11 = (const u32 *)&VAR_7;
  VAR_10 = VAR_1;
 } else
  return;

 FUNC_0(VAR_9, VAR_11, VAR_10);
}
