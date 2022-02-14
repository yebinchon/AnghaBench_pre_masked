
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef scalar_t__ u32 ;
typedef int u16 ;
struct capi_profile {int ncontroller; } ;
struct capi_ctr {scalar_t__ state; int profile; } ;


 scalar_t__ VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int VAR_3 ;
 struct capi_ctr* FUNC_0 (scalar_t__) ;
 int FUNC_1 (struct capi_profile*,int *,int) ;
 int FUNC_2 (int *) ;
 int FUNC_3 (int *) ;
 int VAR_4 ;

u16 FUNC_4(u32 VAR_5, struct capi_profile *VAR_6)
{
 struct capi_ctr *VAR_7;
 u16 VAR_8;

 if (VAR_5 == 0) {
  VAR_6->ncontroller = VAR_4;
  return VAR_1;
 }

 FUNC_2(&VAR_3);

 VAR_7 = FUNC_0(VAR_5);
 if (VAR_7 && VAR_7->state == VAR_0) {
  FUNC_1(VAR_6, &VAR_7->profile, sizeof(struct capi_profile));
  VAR_8 = VAR_1;
 } else
  VAR_8 = VAR_2;

 FUNC_3(&VAR_3);
 return VAR_8;
}
