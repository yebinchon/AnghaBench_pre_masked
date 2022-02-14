
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int u32 ;
struct sti_hda {scalar_t__ video_dacs_ctrl; } ;


 int VAR_0 ;
 int FUNC_0 (scalar_t__) ;
 int FUNC_1 (int ,scalar_t__) ;

__attribute__((used)) static void FUNC_2(struct sti_hda *VAR_1, bool VAR_2)
{
 if (VAR_1->video_dacs_ctrl) {
  u32 VAR_3;

  VAR_3 = FUNC_0(VAR_1->video_dacs_ctrl);
  if (VAR_2)
   VAR_3 &= ~VAR_0;
  else
   VAR_3 |= VAR_0;

  FUNC_1(VAR_3, VAR_1->video_dacs_ctrl);
 }
}
