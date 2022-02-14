
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int u32 ;
struct i40iw_device {int mr_stagmask; int allocated_mrs; } ;


 int VAR_0 ;
 int FUNC_0 (struct i40iw_device*,int ,int) ;
 int FUNC_1 (struct i40iw_device*) ;

__attribute__((used)) static void FUNC_2(struct i40iw_device *VAR_1, u32 VAR_2)
{
 u32 VAR_3;

 VAR_3 = (VAR_2 & VAR_1->mr_stagmask) >> VAR_0;
 FUNC_0(VAR_1, VAR_1->allocated_mrs, VAR_3);
 FUNC_1(VAR_1);
}
