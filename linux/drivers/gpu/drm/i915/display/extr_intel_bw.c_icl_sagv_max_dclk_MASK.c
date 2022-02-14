
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


typedef int u16 ;
struct intel_qgv_info {int num_points; TYPE_1__* points; } ;
struct TYPE_2__ {int dclk; } ;


 int FUNC_0 (int,int ) ;

__attribute__((used)) static int FUNC_1(const struct intel_qgv_info *VAR_0)
{
 u16 VAR_1 = 0;
 int VAR_2;

 for (VAR_2 = 0; VAR_2 < VAR_0->num_points; VAR_2++)
  VAR_1 = FUNC_0(VAR_1, VAR_0->points[VAR_2].dclk);

 return VAR_1;
}
