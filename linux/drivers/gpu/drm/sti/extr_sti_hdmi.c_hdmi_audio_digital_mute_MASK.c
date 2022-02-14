
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct sti_hdmi {int dummy; } ;
struct device {int dummy; } ;


 int FUNC_0 (char*,char*) ;
 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 struct sti_hdmi* FUNC_1 (struct device*) ;
 int FUNC_2 (struct sti_hdmi*,int ,int ) ;

__attribute__((used)) static int FUNC_3(struct device *VAR_3, void *VAR_4, bool VAR_5)
{
 struct sti_hdmi *VAR_6 = FUNC_1(VAR_3);

 FUNC_0("%s\n", VAR_5 ? "enable" : "disable");

 if (VAR_5)
  FUNC_2(VAR_6, VAR_0, VAR_1);
 else
  FUNC_2(VAR_6, VAR_2, VAR_1);

 return 0;
}
