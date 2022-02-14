
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct dc_stream_state {int vsc_infopacket; } ;
struct dc_info_packet {int dummy; } ;


 scalar_t__ FUNC_0 (int *,int *,int) ;

__attribute__((used)) static bool FUNC_1(struct dc_stream_state *VAR_0,
  struct dc_stream_state *VAR_1)
{
 if (VAR_0 == ((void*)0))
  return 1;

 if (FUNC_0(&VAR_0->vsc_infopacket,
   &VAR_1->vsc_infopacket,
   sizeof(struct dc_info_packet)) != 0)
  return 1;

 return 0;
}
