
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_3__ TYPE_1__ ;


typedef int u32 ;
struct TYPE_3__ {int hdisplay; scalar_t__ vdisplay; } ;
struct sti_hdmi {TYPE_1__ mode; } ;


 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int VAR_3 ;
 int FUNC_0 (struct sti_hdmi*,int ,int ) ;
 int FUNC_1 (TYPE_1__,scalar_t__) ;
 int FUNC_2 (TYPE_1__,int) ;

__attribute__((used)) static void FUNC_3(struct sti_hdmi *VAR_4)
{
 u32 VAR_5, VAR_6;
 u32 VAR_7, VAR_8;

 VAR_5 = FUNC_2(VAR_4->mode, 1);
 VAR_6 = FUNC_2(VAR_4->mode, VAR_4->mode.hdisplay);
 VAR_7 = FUNC_1(VAR_4->mode, 0);
 VAR_8 = FUNC_1(VAR_4->mode, VAR_4->mode.vdisplay - 1);

 FUNC_0(VAR_4, VAR_5, VAR_1);
 FUNC_0(VAR_4, VAR_6, VAR_0);
 FUNC_0(VAR_4, VAR_7, VAR_3);
 FUNC_0(VAR_4, VAR_8, VAR_2);
}
