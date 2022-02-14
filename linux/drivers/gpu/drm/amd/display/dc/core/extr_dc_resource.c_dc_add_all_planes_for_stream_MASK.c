
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct dc_validation_set {int plane_count; struct dc_plane_state** plane_states; struct dc_stream_state* stream; } ;
struct dc_stream_state {int dummy; } ;
struct dc_state {int dummy; } ;
struct dc_plane_state {int dummy; } ;
struct dc {int dummy; } ;


 int FUNC_0 (struct dc const*,struct dc_stream_state*,struct dc_validation_set*,int,struct dc_state*) ;

bool FUNC_1(
  const struct dc *VAR_0,
  struct dc_stream_state *VAR_1,
  struct dc_plane_state * const *VAR_2,
  int VAR_3,
  struct dc_state *VAR_4)
{
 struct dc_validation_set VAR_5;
 int VAR_6;

 VAR_5.stream = VAR_1;
 VAR_5.plane_count = VAR_3;

 for (VAR_6 = 0; VAR_6 < VAR_3; VAR_6++)
  VAR_5.plane_states[VAR_6] = VAR_2[VAR_6];

 return FUNC_0(VAR_0, VAR_1, &VAR_5, 1, VAR_4);
}
