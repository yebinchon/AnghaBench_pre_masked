
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct drm_connector_state {int hdr_output_metadata; scalar_t__ writeback_job; scalar_t__ commit; int connector; scalar_t__ crtc; } ;


 int FUNC_0 (int ) ;
 int FUNC_1 (scalar_t__) ;
 int FUNC_2 (int ) ;
 int FUNC_3 (scalar_t__) ;

void
FUNC_4(struct drm_connector_state *VAR_0)
{
 if (VAR_0->crtc)
  FUNC_0(VAR_0->connector);

 if (VAR_0->commit)
  FUNC_1(VAR_0->commit);

 if (VAR_0->writeback_job)
  FUNC_3(VAR_0->writeback_job);

 FUNC_2(VAR_0->hdr_output_metadata);
}
