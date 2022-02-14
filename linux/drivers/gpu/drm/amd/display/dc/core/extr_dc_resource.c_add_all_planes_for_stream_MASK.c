
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct dc_validation_set {int plane_count; int * plane_states; struct dc_stream_state* stream; } ;
struct dc_stream_state {int dummy; } ;
struct dc_state {int dummy; } ;
struct dc {int dummy; } ;


 int FUNC_0 (struct dc const*,struct dc_stream_state*,int ,struct dc_state*) ;
 int FUNC_1 (char*,struct dc_stream_state*) ;

__attribute__((used)) static bool FUNC_2(
  const struct dc *VAR_0,
  struct dc_stream_state *VAR_1,
  const struct dc_validation_set VAR_2[],
  int VAR_3,
  struct dc_state *VAR_4)
{
 int VAR_5, VAR_6;

 for (VAR_5 = 0; VAR_5 < VAR_3; VAR_5++)
  if (VAR_2[VAR_5].stream == VAR_1)
   break;

 if (VAR_5 == VAR_3) {
  FUNC_1("Stream %p not found in set!\n", VAR_1);
  return 0;
 }

 for (VAR_6 = 0; VAR_6 < VAR_2[VAR_5].plane_count; VAR_6++)
  if (!FUNC_0(VAR_0, VAR_1, VAR_2[VAR_5].plane_states[VAR_6], VAR_4))
   return 0;

 return 1;
}
