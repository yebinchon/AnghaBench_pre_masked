
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


struct TYPE_2__ {int enabled; } ;
struct sti_hdmi {TYPE_1__ audio; } ;
struct device {int dummy; } ;


 int FUNC_0 (char*) ;
 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int VAR_3 ;
 struct sti_hdmi* FUNC_1 (struct device*) ;
 int FUNC_2 (struct sti_hdmi*) ;
 int FUNC_3 (struct sti_hdmi*,int,int ) ;

__attribute__((used)) static void FUNC_4(struct device *VAR_4, void *VAR_5)
{
 struct sti_hdmi *VAR_6 = FUNC_1(VAR_4);
 int VAR_7;

 FUNC_0("\n");


 VAR_7 = VAR_3 | VAR_1 |
      VAR_2;
 FUNC_3(VAR_6, VAR_7, VAR_0);

 VAR_6->audio.enabled = 0;
 FUNC_2(VAR_6);
}
