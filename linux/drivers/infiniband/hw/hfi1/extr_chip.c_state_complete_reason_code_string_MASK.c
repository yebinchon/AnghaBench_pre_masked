
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef size_t u32 ;
struct hfi1_pportdata {int dummy; } ;


 size_t FUNC_0 (char**) ;
 char** VAR_0 ;

__attribute__((used)) static const char *FUNC_1(struct hfi1_pportdata *VAR_1,
           u32 VAR_2)
{
 const char *VAR_3 = ((void*)0);

 if (VAR_2 < FUNC_0(VAR_0))
  VAR_3 = VAR_0[VAR_2];

 if (VAR_3)
  return VAR_3;
 return "Reserved";
}
