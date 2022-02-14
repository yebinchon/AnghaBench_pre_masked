
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int u8 ;
typedef scalar_t__ u32 ;
typedef int u16 ;
struct capi_ctr {scalar_t__ state; int serial; } ;


 scalar_t__ VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int VAR_3 ;
 int VAR_4 ;
 int VAR_5 ;
 struct capi_ctr* FUNC_0 (scalar_t__) ;
 int FUNC_1 (int *) ;
 int FUNC_2 (int *) ;
 int FUNC_3 (int *,int ,int ) ;

u16 FUNC_4(u32 VAR_6, u8 *VAR_7)
{
 struct capi_ctr *VAR_8;
 u16 VAR_9;

 if (VAR_6 == 0) {
  FUNC_3(VAR_7, VAR_5, VAR_3);
  return VAR_1;
 }

 FUNC_1(&VAR_4);

 VAR_8 = FUNC_0(VAR_6);
 if (VAR_8 && VAR_8->state == VAR_0) {
  FUNC_3(VAR_7, VAR_8->serial, VAR_3);
  VAR_9 = VAR_1;
 } else
  VAR_9 = VAR_2;

 FUNC_2(&VAR_4);
 return VAR_9;
}
