
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int u32 ;
struct radeon_device {int dummy; } ;


 int VAR_0 ;
 int VAR_1 ;
 int FUNC_0 (struct radeon_device*,int const*,int ) ;
 int VAR_2 ;
 int VAR_3 ;

__attribute__((used)) static void FUNC_1(struct radeon_device *VAR_4,
          bool VAR_5)
{
 u32 VAR_6;
 const u32 *VAR_7 = ((void*)0);

 if (VAR_5) {
  VAR_7 = (const u32 *)&VAR_3;
  VAR_6 = VAR_1;
 } else {
  VAR_7 = (const u32 *)&VAR_2;
  VAR_6 = VAR_0;
 }

 FUNC_0(VAR_4, VAR_7, VAR_6);
}
