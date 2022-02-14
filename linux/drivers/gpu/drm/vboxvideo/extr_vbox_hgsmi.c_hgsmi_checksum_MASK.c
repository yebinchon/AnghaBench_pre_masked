
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int u8 ;
typedef scalar_t__ u32 ;
struct hgsmi_buffer_tail {int dummy; } ;
struct hgsmi_buffer_header {int dummy; } ;
typedef int offset ;


 scalar_t__ FUNC_0 (scalar_t__) ;
 scalar_t__ FUNC_1 (scalar_t__,int *,int) ;

__attribute__((used)) static u32 FUNC_2(u32 VAR_0,
     const struct hgsmi_buffer_header *VAR_1,
     const struct hgsmi_buffer_tail *VAR_2)
{
 u32 VAR_3;

 VAR_3 = FUNC_1(0, (u8 *)&VAR_0, sizeof(VAR_0));
 VAR_3 = FUNC_1(VAR_3, (u8 *)VAR_1, sizeof(*VAR_1));

 VAR_3 = FUNC_1(VAR_3, (u8 *)VAR_2, 4);

 return FUNC_0(VAR_3);
}
