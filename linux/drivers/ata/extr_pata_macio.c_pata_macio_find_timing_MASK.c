
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct pata_macio_timing {int mode; } ;
struct pata_macio_priv {struct pata_macio_timing const* timings; } ;



__attribute__((used)) static const struct pata_macio_timing *FUNC_0(
         struct pata_macio_priv *VAR_0,
         int VAR_1)
{
 int VAR_2;

 for (VAR_2 = 0; VAR_0->timings[VAR_2].mode > 0; VAR_2++) {
  if (VAR_0->timings[VAR_2].mode == VAR_1)
   return &VAR_0->timings[VAR_2];
 }
 return ((void*)0);
}
