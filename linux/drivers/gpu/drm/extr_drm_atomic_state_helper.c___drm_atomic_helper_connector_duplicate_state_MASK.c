
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct drm_connector_state {int * writeback_job; scalar_t__ hdr_output_metadata; int * commit; scalar_t__ crtc; } ;
struct drm_connector {int state; } ;


 int FUNC_0 (struct drm_connector*) ;
 int FUNC_1 (scalar_t__) ;
 int FUNC_2 (struct drm_connector_state*,int ,int) ;

void
FUNC_3(struct drm_connector *VAR_0,
         struct drm_connector_state *VAR_1)
{
 FUNC_2(VAR_1, VAR_0->state, sizeof(*VAR_1));
 if (VAR_1->crtc)
  FUNC_0(VAR_0);
 VAR_1->commit = ((void*)0);

 if (VAR_1->hdr_output_metadata)
  FUNC_1(VAR_1->hdr_output_metadata);


 VAR_1->writeback_job = ((void*)0);
}
