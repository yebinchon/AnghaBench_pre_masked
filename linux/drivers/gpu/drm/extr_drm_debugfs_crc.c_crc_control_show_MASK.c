
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_4__ TYPE_2__ ;
typedef struct TYPE_3__ TYPE_1__ ;


struct seq_file {struct drm_crtc* private; } ;
struct TYPE_4__ {char const* const source; } ;
struct drm_crtc {TYPE_2__ crc; TYPE_1__* funcs; } ;
struct TYPE_3__ {char** (* get_crc_sources ) (struct drm_crtc*,size_t*) ;int (* verify_crc_source ) (struct drm_crtc*,char const* const,size_t*) ;} ;


 int FUNC_0 (struct seq_file*,char*,char const* const) ;
 scalar_t__ FUNC_1 (char const* const,char const* const) ;
 char** FUNC_2 (struct drm_crtc*,size_t*) ;
 int FUNC_3 (struct drm_crtc*,char const* const,size_t*) ;

__attribute__((used)) static int FUNC_4(struct seq_file *VAR_0, void *VAR_1)
{
 struct drm_crtc *VAR_2 = VAR_0->private;

 if (VAR_2->funcs->get_crc_sources) {
  size_t VAR_3;
  const char *const *VAR_4 = VAR_2->funcs->get_crc_sources(VAR_2,
         &VAR_3);
  size_t VAR_5;
  int VAR_6;

  if (VAR_3 == 0 || !VAR_4)
   goto out;

  for (VAR_6 = 0; VAR_6 < VAR_3; VAR_6++)
   if (!VAR_2->funcs->verify_crc_source(VAR_2, VAR_4[VAR_6],
           &VAR_5)) {
    if (FUNC_1(VAR_4[VAR_6], VAR_2->crc.source))
     FUNC_0(VAR_0, "%s\n", VAR_4[VAR_6]);
    else
     FUNC_0(VAR_0, "%s*\n", VAR_4[VAR_6]);
   }
 }
 return 0;

out:
 FUNC_0(VAR_0, "%s*\n", VAR_2->crc.source);
 return 0;
}
