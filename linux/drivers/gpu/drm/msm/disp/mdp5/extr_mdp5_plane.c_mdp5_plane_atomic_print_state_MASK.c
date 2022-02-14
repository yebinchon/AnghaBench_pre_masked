
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_4__ TYPE_2__ ;
typedef struct TYPE_3__ TYPE_1__ ;


struct mdp5_plane_state {char* premultiplied; char* zpos; char* alpha; int stage; TYPE_2__* r_hwpipe; TYPE_1__* hwpipe; } ;
struct mdp5_kms {int caps; } ;
struct drm_printer {int dummy; } ;
struct drm_plane_state {int plane; } ;
struct TYPE_4__ {char* name; } ;
struct TYPE_3__ {char* name; } ;


 int VAR_0 ;
 int FUNC_0 (struct drm_printer*,char*,char*) ;
 struct mdp5_kms* FUNC_1 (int ) ;
 char* FUNC_2 (int ) ;
 struct mdp5_plane_state* FUNC_3 (struct drm_plane_state const*) ;

__attribute__((used)) static void
FUNC_4(struct drm_printer *VAR_1,
  const struct drm_plane_state *VAR_2)
{
 struct mdp5_plane_state *VAR_3 = FUNC_3(VAR_2);
 struct mdp5_kms *VAR_4 = FUNC_1(VAR_2->plane);

 FUNC_0(VAR_1, "\thwpipe=%s\n", VAR_3->hwpipe ?
   VAR_3->hwpipe->name : "(null)");
 if (VAR_4->caps & VAR_0)
  FUNC_0(VAR_1, "\tright-hwpipe=%s\n",
      VAR_3->r_hwpipe ? VAR_3->r_hwpipe->name :
           "(null)");
 FUNC_0(VAR_1, "\tpremultiplied=%u\n", VAR_3->premultiplied);
 FUNC_0(VAR_1, "\tzpos=%u\n", VAR_3->zpos);
 FUNC_0(VAR_1, "\talpha=%u\n", VAR_3->alpha);
 FUNC_0(VAR_1, "\tstage=%s\n", FUNC_2(VAR_3->stage));
}
