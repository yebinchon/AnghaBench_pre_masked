
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int uint32_t ;
struct hubp {int dummy; } ;
struct dcn20_hubp {int dummy; } ;
struct _vcs_dpi_display_pipe_dest_params_st {scalar_t__ vstartup_start; scalar_t__ vready_offset; scalar_t__ vupdate_width; scalar_t__ vupdate_offset; scalar_t__ htotal; scalar_t__ vblank_end; } ;


 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int FUNC_0 (int ,int ,int) ;
 int FUNC_1 (int ,int) ;
 struct dcn20_hubp* FUNC_2 (struct hubp*) ;

void FUNC_3(struct hubp *VAR_3,
  struct _vcs_dpi_display_pipe_dest_params_st *VAR_4)
{
 uint32_t VAR_5 = 0;
 struct dcn20_hubp *VAR_6 = FUNC_2(VAR_3);

 FUNC_1(VAR_1, 1 << 8);







 if ((VAR_4->vstartup_start - (VAR_4->vready_offset+VAR_4->vupdate_width
  + VAR_4->vupdate_offset) / VAR_4->htotal) <= VAR_4->vblank_end) {
  VAR_5 = 1;
 } else
  VAR_5 = 0;
 FUNC_0(VAR_0, VAR_2, VAR_5);
}
