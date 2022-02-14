
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct rail_alignment {int step_uv; int offset_uv; } ;


 int FUNC_0 (int,int) ;

__attribute__((used)) static int FUNC_1(int VAR_0, const struct rail_alignment *VAR_1, int VAR_2)
{
 if (VAR_1->step_uv) {
  int VAR_3;

  VAR_3 = FUNC_0(VAR_0 * 1000, VAR_1->offset_uv) - VAR_1->offset_uv;
  VAR_3 = (VAR_3 + (VAR_2 ? VAR_1->step_uv - 1 : 0)) / VAR_1->step_uv;
  return (VAR_3 * VAR_1->step_uv + VAR_1->offset_uv) / 1000;
 }
 return VAR_0;
}
