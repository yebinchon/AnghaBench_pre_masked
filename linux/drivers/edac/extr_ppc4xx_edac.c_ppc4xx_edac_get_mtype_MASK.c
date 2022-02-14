
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int u32 ;
typedef enum mem_type { ____Placeholder_mem_type } mem_type ;


 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int VAR_3 ;
 int VAR_4 ;


 int VAR_5 ;
 int VAR_6 ;
 int VAR_7 ;

__attribute__((used)) static enum mem_type FUNC_0(u32 VAR_8)
{
 bool VAR_9 = ((VAR_8 & VAR_7) == VAR_6);

 switch (VAR_8 & VAR_5) {
 case 128:
  return VAR_9 ? VAR_3 : VAR_1;
 case 129:
  return VAR_9 ? VAR_2 : VAR_0;
 default:
  return VAR_4;
 }
}
