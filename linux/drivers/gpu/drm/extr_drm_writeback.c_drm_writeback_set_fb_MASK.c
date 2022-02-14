
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_4__ TYPE_2__ ;
typedef struct TYPE_3__ TYPE_1__ ;


struct drm_framebuffer {int dummy; } ;
struct drm_connector_state {TYPE_1__* writeback_job; TYPE_2__* connector; } ;
struct TYPE_4__ {scalar_t__ connector_type; } ;
struct TYPE_3__ {int fb; int connector; } ;


 scalar_t__ VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int FUNC_0 (int) ;
 int FUNC_1 (TYPE_2__*) ;
 int FUNC_2 (int *,struct drm_framebuffer*) ;
 TYPE_1__* FUNC_3 (int,int ) ;

int FUNC_4(struct drm_connector_state *VAR_3,
    struct drm_framebuffer *VAR_4)
{
 FUNC_0(VAR_3->connector->connector_type != VAR_0);

 if (!VAR_3->writeback_job) {
  VAR_3->writeback_job =
   FUNC_3(sizeof(*VAR_3->writeback_job), VAR_2);
  if (!VAR_3->writeback_job)
   return -VAR_1;

  VAR_3->writeback_job->connector =
   FUNC_1(VAR_3->connector);
 }

 FUNC_2(&VAR_3->writeback_job->fb, VAR_4);
 return 0;
}
