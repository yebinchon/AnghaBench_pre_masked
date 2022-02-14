
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_4__ TYPE_2__ ;
typedef struct TYPE_3__ TYPE_1__ ;


struct dce_mem_input {int dummy; } ;
struct TYPE_4__ {int luma_addr; int chroma_addr; } ;
struct TYPE_3__ {int addr; } ;
struct dc_plane_address {int type; TYPE_2__ video_progressive; TYPE_1__ grph; } ;


 int FUNC_0 () ;


 int FUNC_1 (struct dce_mem_input*,int ) ;
 int FUNC_2 (struct dce_mem_input*,int ) ;

__attribute__((used)) static void FUNC_3(
 struct dce_mem_input *VAR_0,
 const struct dc_plane_address *VAR_1)
{
 switch (VAR_1->type) {
 case 129:
  FUNC_2(
   VAR_0,
   VAR_1->grph.addr);
  break;
 case 128:
  FUNC_1(
   VAR_0,
   VAR_1->video_progressive.chroma_addr);
  FUNC_2(
   VAR_0,
   VAR_1->video_progressive.luma_addr);
  break;
 default:

  FUNC_0();
 }
}
