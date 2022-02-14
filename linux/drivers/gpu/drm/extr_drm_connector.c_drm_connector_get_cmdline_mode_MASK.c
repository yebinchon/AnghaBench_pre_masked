
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct drm_cmdline_mode {int refresh; scalar_t__ interlace; scalar_t__ margins; scalar_t__ rb; scalar_t__ refresh_specified; int yres; int xres; int name; scalar_t__ force; } ;
struct drm_connector {int name; scalar_t__ force; struct drm_cmdline_mode cmdline_mode; } ;


 int FUNC_0 (char*,int ,int ,int ,int ,int,char*,char*,char*) ;
 int FUNC_1 (char*,int ,int ) ;
 int FUNC_2 (scalar_t__) ;
 int FUNC_3 (char*,struct drm_connector*,struct drm_cmdline_mode*) ;
 scalar_t__ FUNC_4 (int ,char**) ;

__attribute__((used)) static void FUNC_5(struct drm_connector *VAR_0)
{
 struct drm_cmdline_mode *VAR_1 = &VAR_0->cmdline_mode;
 char *VAR_2 = ((void*)0);

 if (FUNC_4(VAR_0->name, &VAR_2))
  return;

 if (!FUNC_3(VAR_2,
             VAR_0,
             VAR_1))
  return;

 if (VAR_1->force) {
  FUNC_1("forcing %s connector %s\n", VAR_0->name,
    FUNC_2(VAR_1->force));
  VAR_0->force = VAR_1->force;
 }

 FUNC_0("cmdline mode for connector %s %s %dx%d@%dHz%s%s%s\n",
        VAR_0->name, VAR_1->name,
        VAR_1->xres, VAR_1->yres,
        VAR_1->refresh_specified ? VAR_1->refresh : 60,
        VAR_1->rb ? " reduced blanking" : "",
        VAR_1->margins ? " with margins" : "",
        VAR_1->interlace ? " interlaced" : "");
}
