
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct mod_freesync {int dummy; } ;
struct dc_stream_state {int dummy; } ;
struct crtc_position {unsigned int vertical_count; unsigned int nominal_vcount; } ;
struct core_freesync {int dc; } ;


 struct core_freesync* FUNC_0 (struct mod_freesync*) ;
 scalar_t__ FUNC_1 (int ,struct dc_stream_state**,int,unsigned int*,unsigned int*) ;

bool FUNC_2(struct mod_freesync *VAR_0,
  struct dc_stream_state *VAR_1,
  unsigned int *VAR_2,
  unsigned int *VAR_3)
{
 struct core_freesync *VAR_4 = ((void*)0);
 struct crtc_position VAR_5;

 if (VAR_0 == ((void*)0))
  return 0;

 VAR_4 = FUNC_0(VAR_0);

 if (FUNC_1(VAR_4->dc, &VAR_1, 1,
     &VAR_5.vertical_count,
     &VAR_5.nominal_vcount)) {

  *VAR_2 = VAR_5.nominal_vcount;
  *VAR_3 = VAR_5.vertical_count;

  return 1;
 }

 return 0;
}
