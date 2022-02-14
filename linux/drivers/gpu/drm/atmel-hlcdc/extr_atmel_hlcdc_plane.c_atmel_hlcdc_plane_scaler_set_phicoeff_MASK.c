
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int u32 ;
struct atmel_hlcdc_plane {int layer; } ;


 int FUNC_0 (int *,unsigned int,int const) ;

__attribute__((used)) static void
FUNC_1(struct atmel_hlcdc_plane *VAR_0,
          const u32 *VAR_1, int VAR_2,
          unsigned int VAR_3)
{
 int VAR_4;

 for (VAR_4 = 0; VAR_4 < VAR_2; VAR_4++)
  FUNC_0(&VAR_0->layer, VAR_3 + VAR_4,
         VAR_1[VAR_4]);
}
