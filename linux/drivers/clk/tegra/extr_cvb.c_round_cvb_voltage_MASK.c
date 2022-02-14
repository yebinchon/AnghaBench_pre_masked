
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct rail_alignment {int step_uv; int offset_uv; } ;


 int FUNC_0 (int,int) ;
 int FUNC_1 (int,int) ;

__attribute__((used)) static int FUNC_2(int VAR_0, int VAR_1,
        const struct rail_alignment *VAR_2)
{

 int VAR_3;
 int VAR_4 = (VAR_2->step_uv ? : 1000) * VAR_1;
 int VAR_5 = VAR_2->offset_uv * VAR_1;

 VAR_3 = FUNC_1(VAR_0 * 1000, VAR_5) - VAR_5;
 VAR_3 = FUNC_0(VAR_3, VAR_4) * VAR_2->step_uv + VAR_2->offset_uv;
 return VAR_3 / 1000;
}
