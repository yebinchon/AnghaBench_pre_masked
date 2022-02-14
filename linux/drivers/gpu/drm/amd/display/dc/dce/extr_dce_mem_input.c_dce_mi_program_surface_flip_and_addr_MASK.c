
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_8__ TYPE_4__ ;
typedef struct TYPE_7__ TYPE_3__ ;
typedef struct TYPE_6__ TYPE_2__ ;
typedef struct TYPE_5__ TYPE_1__ ;


struct TYPE_7__ {int quad_part; } ;
struct TYPE_8__ {int quad_part; } ;
struct TYPE_6__ {TYPE_3__ right_addr; TYPE_4__ left_addr; } ;
struct TYPE_5__ {TYPE_4__ addr; } ;
struct dc_plane_address {int type; TYPE_2__ grph_stereo; TYPE_1__ grph; } ;
struct mem_input {struct dc_plane_address current_address; struct dc_plane_address request_address; } ;
struct dce_mem_input {int dummy; } ;


 int FUNC_0 () ;
 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int VAR_3 ;


 int FUNC_1 (int ,int ,int) ;
 struct dce_mem_input* FUNC_2 (struct mem_input*) ;
 int FUNC_3 (struct dce_mem_input*,TYPE_4__) ;
 int FUNC_4 (struct dce_mem_input*,TYPE_3__) ;

__attribute__((used)) static bool FUNC_5(
 struct mem_input *VAR_4,
 const struct dc_plane_address *VAR_5,
 bool VAR_6)
{
 struct dce_mem_input *VAR_7 = FUNC_2(VAR_4);

 FUNC_1(VAR_2, VAR_3, 1);

 FUNC_1(
  VAR_0,
  VAR_1, VAR_6 ? 1 : 0);

 switch (VAR_5->type) {
 case 129:
  if (VAR_5->grph.addr.quad_part == 0)
   break;
  FUNC_3(VAR_7, VAR_5->grph.addr);
  break;
 case 128:
  if (VAR_5->grph_stereo.left_addr.quad_part == 0 ||
      VAR_5->grph_stereo.right_addr.quad_part == 0)
   break;
  FUNC_3(VAR_7, VAR_5->grph_stereo.left_addr);
  FUNC_4(VAR_7, VAR_5->grph_stereo.right_addr);
  break;
 default:

  FUNC_0();
  break;
 }

 VAR_4->request_address = *VAR_5;

 if (VAR_6)
  VAR_4->current_address = *VAR_5;

 FUNC_1(VAR_2, VAR_3, 0);

 return 1;
}
