
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef scalar_t__ u32 ;
struct armada_37xx_dvfs {scalar_t__ cpu_freq_max; } ;


 int FUNC_0 (struct armada_37xx_dvfs*) ;
 struct armada_37xx_dvfs* VAR_0 ;
 int FUNC_1 (char*,scalar_t__) ;

__attribute__((used)) static struct armada_37xx_dvfs *FUNC_2(u32 VAR_1)
{
 int VAR_2;

 for (VAR_2 = 0; VAR_2 < FUNC_0(VAR_0); VAR_2++) {
  if (VAR_1 == VAR_0[VAR_2].cpu_freq_max)
   return &VAR_0[VAR_2];
 }

 FUNC_1("Unsupported CPU frequency %d MHz\n", VAR_1/1000000);
 return ((void*)0);
}
