
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int u8 ;
typedef scalar_t__ u32 ;
struct intel_dsi {int dummy; } ;


 int FUNC_0 (char*) ;
 int FUNC_1 (scalar_t__,scalar_t__) ;

__attribute__((used)) static const u8 *FUNC_2(struct intel_dsi *VAR_0, const u8 *VAR_1)
{
 u32 VAR_2 = *((const u32 *) VAR_1);

 FUNC_0("\n");

 FUNC_1(VAR_2, VAR_2 + 10);
 VAR_1 += 4;

 return VAR_1;
}
