
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int uint32_t ;
struct hubp {int dummy; } ;
struct dcn10_hubp {int dummy; } ;
struct _vcs_dpi_display_pipe_dest_params_st {int vstartup_start; int vready_offset; int vupdate_width; int vupdate_offset; int htotal; int vblank_end; } ;


 int VAR_0 ;
 int FUNC_0 (int ) ;
 int FUNC_1 (int ,int) ;
 struct dcn10_hubp* FUNC_2 (struct hubp*) ;

void FUNC_3(struct hubp *VAR_1,
  struct _vcs_dpi_display_pipe_dest_params_st *VAR_2)
{
 uint32_t VAR_3 = 0;
 struct dcn10_hubp *VAR_4 = FUNC_2(VAR_1);


 VAR_3 = FUNC_0(VAR_0);


 VAR_3 |= 0x100;
 VAR_3 &= ~0x1000;

 if ((VAR_2->vstartup_start - 2*(VAR_2->vready_offset+VAR_2->vupdate_width
  + VAR_2->vupdate_offset) / VAR_2->htotal) <= VAR_2->vblank_end) {


  VAR_3 |= 0x1000;
 }

 FUNC_1(VAR_0, VAR_3);
}
