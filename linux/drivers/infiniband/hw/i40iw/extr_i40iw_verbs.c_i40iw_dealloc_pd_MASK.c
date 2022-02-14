
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct ib_udata {int dummy; } ;
struct ib_pd {int device; } ;
struct i40iw_pd {int dummy; } ;
struct i40iw_device {int dummy; } ;


 int FUNC_0 (struct i40iw_pd*,struct i40iw_device*) ;
 struct i40iw_device* FUNC_1 (int ) ;
 struct i40iw_pd* FUNC_2 (struct ib_pd*) ;

__attribute__((used)) static void FUNC_3(struct ib_pd *VAR_0, struct ib_udata *VAR_1)
{
 struct i40iw_pd *VAR_2 = FUNC_2(VAR_0);
 struct i40iw_device *VAR_3 = FUNC_1(VAR_0->device);

 FUNC_0(VAR_2, VAR_3);
}
