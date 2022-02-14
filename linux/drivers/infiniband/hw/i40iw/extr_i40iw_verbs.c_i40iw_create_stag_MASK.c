
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef scalar_t__ u8 ;
typedef int u32 ;
struct i40iw_device {int mr_stagmask; int max_mr; int allocated_mrs; } ;
typedef int random ;


 int VAR_0 ;
 int FUNC_0 (int*,int) ;
 int FUNC_1 (struct i40iw_device*) ;
 int FUNC_2 (struct i40iw_device*,int ,int,int*,int*) ;

__attribute__((used)) static u32 FUNC_3(struct i40iw_device *VAR_1)
{
 u32 VAR_2 = 0;
 u32 VAR_3 = 0;
 u32 VAR_4;
 u32 VAR_5;
 u32 VAR_6;
 u8 VAR_7;
 int VAR_8;

 FUNC_0(&VAR_6, sizeof(VAR_6));
 VAR_7 = (u8)VAR_6;

 VAR_5 = VAR_6 & ~VAR_1->mr_stagmask;
 VAR_4 = (VAR_6 & VAR_1->mr_stagmask) >> 8;
 VAR_4 %= VAR_1->max_mr;

 VAR_8 = FUNC_2(VAR_1,
       VAR_1->allocated_mrs, VAR_1->max_mr,
       &VAR_3, &VAR_4);
 if (!VAR_8) {
  VAR_2 = VAR_3 << VAR_0;
  VAR_2 |= VAR_5;
  VAR_2 += (u32)VAR_7;
  FUNC_1(VAR_1);
 }
 return VAR_2;
}
