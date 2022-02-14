
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int iomux_v3_cfg_t ;


 int FUNC_0 (int const) ;

int FUNC_1(const iomux_v3_cfg_t *VAR_0,
  unsigned VAR_1)
{
 const iomux_v3_cfg_t *VAR_2 = VAR_0;
 int VAR_3;
 int VAR_4;

 for (VAR_3 = 0; VAR_3 < VAR_1; VAR_3++) {
  VAR_4 = FUNC_0(*VAR_2);
  if (VAR_4)
   return VAR_4;
  VAR_2++;
 }
 return 0;
}
