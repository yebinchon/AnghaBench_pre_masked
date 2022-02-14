
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int uint32_t ;
struct mod_freesync {int dummy; } ;
struct dc_stream_state {int dummy; } ;


 unsigned long long FUNC_0 (unsigned long long,int) ;
 unsigned long long FUNC_1 (struct dc_stream_state const*) ;

bool FUNC_2(struct mod_freesync *VAR_0,
  const struct dc_stream_state *VAR_1,
  uint32_t VAR_2,
  uint32_t VAR_3,
  uint32_t VAR_4,
  uint32_t VAR_5)
{

 unsigned long long VAR_6 =
   FUNC_1(VAR_1);
 VAR_6 =
   FUNC_0(VAR_6 + 500000, 1000000);
 VAR_2 /= 1000000;
 VAR_3 /= 1000000;
 VAR_4 /= 1000000;
 VAR_5 /= 1000000;


 if (VAR_6 > VAR_3 ||
  VAR_6 < VAR_2)
  return 0;


 if (VAR_6 < VAR_3)
  VAR_3 = VAR_6;


 if (VAR_4 > VAR_5)
  return 0;


 if (VAR_4 > VAR_3 ||
  VAR_4 < VAR_2)
  return 0;


 if (VAR_5 > VAR_3 ||
  VAR_5 < VAR_2)
  return 0;


 if ((VAR_5 != VAR_4) &&
  (VAR_5 - VAR_4 < 10))
  return 0;

 return 1;
}
