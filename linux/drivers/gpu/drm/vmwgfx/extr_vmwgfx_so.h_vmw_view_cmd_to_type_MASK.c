
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int u32 ;
typedef enum vmw_view_type { ____Placeholder_vmw_view_type } vmw_view_type ;


 int VAR_0 ;
 int VAR_1 ;

__attribute__((used)) static inline enum vmw_view_type FUNC_0(u32 VAR_2)
{
 u32 VAR_3 = (VAR_2 - VAR_0) / 2;

 if (VAR_3 > (u32)VAR_1)
  return VAR_1;

 return (enum vmw_view_type) VAR_3;
}
