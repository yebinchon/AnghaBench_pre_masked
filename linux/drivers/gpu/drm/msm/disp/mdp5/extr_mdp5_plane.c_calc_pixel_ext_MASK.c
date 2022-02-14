
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef scalar_t__ uint32_t ;
struct mdp_format {scalar_t__ is_yuv; } ;


 int VAR_0 ;

__attribute__((used)) static void FUNC_0(const struct mdp_format *VAR_1,
  uint32_t VAR_2, uint32_t VAR_3, uint32_t VAR_4[2],
  int VAR_5[VAR_0], int VAR_6[VAR_0],
  bool VAR_7)
{
 bool VAR_8 = VAR_1->is_yuv ? 1 : (VAR_2 != VAR_3);
 int VAR_9;
 for (VAR_9 = 0; VAR_9 < VAR_0; VAR_9++) {
  VAR_5[VAR_9] = 0;
  VAR_6[VAR_9] = VAR_8 ? 1 : 0;
 }
}
