
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_6__ TYPE_3__ ;
typedef struct TYPE_5__ TYPE_2__ ;
typedef struct TYPE_4__ TYPE_1__ ;


struct TYPE_6__ {int config; int config2; int dcdi_config; } ;
struct TYPE_5__ {int output_picture_size; int param_ctrl; int cv_coef; int yv_coef; int ch_coef; int yh_coef; } ;
struct TYPE_4__ {int config; int mem_format; int current_luma; int current_chroma; int luma_src_pitch; int chroma_src_pitch; int input_frame_size; int input_viewport_size; } ;
struct sti_hqvdp_cmd {TYPE_3__ csdi; TYPE_2__ hvsrc; TYPE_1__ top; } ;
struct seq_file {int dummy; } ;







 int FUNC_0 (int ) ;
 int FUNC_1 (struct seq_file*,char*,...) ;
 int FUNC_2 (struct seq_file*,char*) ;

__attribute__((used)) static void FUNC_3(struct seq_file *VAR_0, struct sti_hqvdp_cmd *VAR_1)
{
 int VAR_2, VAR_3, VAR_4, VAR_5;

 FUNC_2(VAR_0, "\n\tTOP:");
 FUNC_1(VAR_0, "\n\t %-20s 0x%08X", "Config", VAR_1->top.config);
 switch (VAR_1->top.config) {
 case 128:
  FUNC_2(VAR_0, "\tProgressive");
  break;
 case 129:
  FUNC_2(VAR_0, "\tInterlaced, top field");
  break;
 case 130:
  FUNC_2(VAR_0, "\tInterlaced, bottom field");
  break;
 default:
  FUNC_2(VAR_0, "\t<UNKNOWN>");
  break;
 }

 FUNC_1(VAR_0, "\n\t %-20s 0x%08X", "MemFormat", VAR_1->top.mem_format);
 FUNC_1(VAR_0, "\n\t %-20s 0x%08X", "CurrentY", VAR_1->top.current_luma);
 FUNC_1(VAR_0, "\n\t %-20s 0x%08X", "CurrentC", VAR_1->top.current_chroma);
 FUNC_1(VAR_0, "\n\t %-20s 0x%08X", "YSrcPitch", VAR_1->top.luma_src_pitch);
 FUNC_1(VAR_0, "\n\t %-20s 0x%08X", "CSrcPitch",
     VAR_1->top.chroma_src_pitch);
 FUNC_1(VAR_0, "\n\t %-20s 0x%08X", "InputFrameSize",
     VAR_1->top.input_frame_size);
 FUNC_1(VAR_0, "\t%dx%d",
     VAR_1->top.input_frame_size & 0x0000FFFF,
     VAR_1->top.input_frame_size >> 16);
 FUNC_1(VAR_0, "\n\t %-20s 0x%08X", "InputViewportSize",
     VAR_1->top.input_viewport_size);
 VAR_2 = VAR_1->top.input_viewport_size & 0x0000FFFF;
 VAR_3 = VAR_1->top.input_viewport_size >> 16;
 FUNC_1(VAR_0, "\t%dx%d", VAR_2, VAR_3);

 FUNC_2(VAR_0, "\n\tHVSRC:");
 FUNC_1(VAR_0, "\n\t %-20s 0x%08X", "OutputPictureSize",
     VAR_1->hvsrc.output_picture_size);
 VAR_4 = VAR_1->hvsrc.output_picture_size & 0x0000FFFF;
 VAR_5 = VAR_1->hvsrc.output_picture_size >> 16;
 FUNC_1(VAR_0, "\t%dx%d", VAR_4, VAR_5);
 FUNC_1(VAR_0, "\n\t %-20s 0x%08X", "ParamCtrl", VAR_1->hvsrc.param_ctrl);

 FUNC_1(VAR_0, "\n\t %-20s %s", "yh_coef",
     FUNC_0(VAR_1->hvsrc.yh_coef));
 FUNC_1(VAR_0, "\n\t %-20s %s", "ch_coef",
     FUNC_0(VAR_1->hvsrc.ch_coef));
 FUNC_1(VAR_0, "\n\t %-20s %s", "yv_coef",
     FUNC_0(VAR_1->hvsrc.yv_coef));
 FUNC_1(VAR_0, "\n\t %-20s %s", "cv_coef",
     FUNC_0(VAR_1->hvsrc.cv_coef));

 FUNC_1(VAR_0, "\n\t %-20s", "ScaleH");
 if (VAR_4 > VAR_2)
  FUNC_1(VAR_0, " %d/1", VAR_4 / VAR_2);
 else
  FUNC_1(VAR_0, " 1/%d", VAR_2 / VAR_4);

 FUNC_1(VAR_0, "\n\t %-20s", "tScaleV");
 if (VAR_5 > VAR_3)
  FUNC_1(VAR_0, " %d/1", VAR_5 / VAR_3);
 else
  FUNC_1(VAR_0, " 1/%d", VAR_3 / VAR_5);

 FUNC_2(VAR_0, "\n\tCSDI:");
 FUNC_1(VAR_0, "\n\t %-20s 0x%08X\t", "Config", VAR_1->csdi.config);
 switch (VAR_1->csdi.config) {
 case 131:
  FUNC_2(VAR_0, "Bypass");
  break;
 case 132:
  FUNC_2(VAR_0, "Deinterlace, directional");
  break;
 default:
  FUNC_2(VAR_0, "<UNKNOWN>");
  break;
 }

 FUNC_1(VAR_0, "\n\t %-20s 0x%08X", "Config2", VAR_1->csdi.config2);
 FUNC_1(VAR_0, "\n\t %-20s 0x%08X", "DcdiConfig", VAR_1->csdi.dcdi_config);
}
