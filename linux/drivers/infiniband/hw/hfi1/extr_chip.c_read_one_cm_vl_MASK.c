
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int u64 ;
typedef int u32 ;
struct vl_limit {void* shared; void* dedicated; } ;
struct hfi1_devdata {int dummy; } ;


 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int VAR_3 ;
 void* FUNC_0 (int) ;
 int FUNC_1 (struct hfi1_devdata*,int ) ;

__attribute__((used)) static void FUNC_2(struct hfi1_devdata *VAR_4, u32 VAR_5,
      struct vl_limit *VAR_6)
{
 u64 VAR_7 = FUNC_1(VAR_4, VAR_5);

 VAR_6->dedicated = FUNC_0(
  (VAR_7 >> VAR_1)
  & VAR_0);
 VAR_6->shared = FUNC_0(
  (VAR_7 >> VAR_3)
  & VAR_2);
}
