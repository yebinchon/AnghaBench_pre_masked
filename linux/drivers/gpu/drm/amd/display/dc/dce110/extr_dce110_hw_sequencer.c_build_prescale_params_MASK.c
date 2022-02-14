
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct ipp_prescale_params {int scale; int mode; } ;
struct dc_plane_state {int format; } ;


 int FUNC_0 (int) ;
 int VAR_0 ;
__attribute__((used)) static void FUNC_1(struct ipp_prescale_params *VAR_1,
  const struct dc_plane_state *VAR_2)
{
 VAR_1->mode = VAR_0;

 switch (VAR_2->format) {
 case 128:
  VAR_1->scale = 0x2082;
  break;
 case 129:
 case 132:
  VAR_1->scale = 0x2020;
  break;
 case 130:
 case 133:
  VAR_1->scale = 0x2008;
  break;
 case 131:
 case 134:
  VAR_1->scale = 0x2000;
  break;
 default:
  FUNC_0(0);
  break;
 }
}
