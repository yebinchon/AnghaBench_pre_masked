
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct pfr_kcounters {scalar_t__ pfrkc_tzero; void*** pfrkc_bytes; void*** pfrkc_packets; } ;


 int VAR_0 ;
 void* FUNC_0 (int ) ;

__attribute__((used)) static bool
FUNC_1(struct pfr_kcounters *VAR_1, int VAR_2, int VAR_3)
{
 VAR_1->pfrkc_packets[VAR_2][VAR_3] = FUNC_0(VAR_0);
 if (! VAR_1->pfrkc_packets[VAR_2][VAR_3])
  return (0);

 VAR_1->pfrkc_bytes[VAR_2][VAR_3] = FUNC_0(VAR_0);
 if (! VAR_1->pfrkc_bytes[VAR_2][VAR_3]) {


  return (0);
 }

 VAR_1->pfrkc_tzero = 0;

 return (1);
}
