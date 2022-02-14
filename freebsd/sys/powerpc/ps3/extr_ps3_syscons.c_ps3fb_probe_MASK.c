
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct vt_device {int dummy; } ;
struct ps3fb_softc {int dummy; } ;
typedef int phandle_t ;
typedef int compatible ;


 int VAR_0 ;
 int VAR_1 ;
 int FUNC_0 (char*) ;
 scalar_t__ FUNC_1 (int ,char*,char*,int) ;
 int FUNC_2 (char*,int*) ;
 int FUNC_3 (char*,char*,int) ;
 struct ps3fb_softc VAR_2 ;
 scalar_t__ FUNC_4 (char*,char*) ;
 scalar_t__ FUNC_5 (char*,char*,int) ;

__attribute__((used)) static int
FUNC_6(struct vt_device *VAR_3)
{
 struct ps3fb_softc *VAR_4;
 int VAR_5;
 char VAR_6[64];
 phandle_t VAR_7;

 VAR_5 = 0;
 FUNC_2("hw.syscons.disable", &VAR_5);
 if (VAR_5 != 0)
  return (0);

 VAR_4 = &VAR_2;

 FUNC_3("hw.platform", VAR_6, sizeof(VAR_6));
 if (FUNC_4(VAR_6, "ps3") == 0)
  return (VAR_1);

 VAR_7 = FUNC_0("/");
 if (FUNC_1(VAR_7, "compatible", VAR_6, sizeof(VAR_6)) <= 0)
                return (VAR_0);

 if (FUNC_5(VAR_6, "sony,ps3", sizeof(VAR_6)) != 0)
  return (VAR_0);

 return (VAR_1);
}
