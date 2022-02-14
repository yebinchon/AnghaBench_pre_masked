
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct intel_timeline {scalar_t__* hwsp_seqno; scalar_t__ seqno; } ;
struct drm_i915_private {int gt; } ;


 int VAR_0 ;
 struct intel_timeline* FUNC_0 (int ) ;
 scalar_t__ FUNC_1 (struct intel_timeline*) ;
 struct intel_timeline* FUNC_2 (int *,int *) ;
 int FUNC_3 (struct intel_timeline*) ;
 int FUNC_4 (char*,scalar_t__,scalar_t__) ;

__attribute__((used)) static struct intel_timeline *
FUNC_5(struct drm_i915_private *VAR_1)
{
 struct intel_timeline *VAR_2;

 VAR_2 = FUNC_2(&VAR_1->gt, ((void*)0));
 if (FUNC_1(VAR_2))
  return VAR_2;

 if (*VAR_2->hwsp_seqno != VAR_2->seqno) {
  FUNC_4("Timeline created with incorrect breadcrumb, found %x, expected %x\n",
         *VAR_2->hwsp_seqno, VAR_2->seqno);
  FUNC_3(VAR_2);
  return FUNC_0(-VAR_0);
 }

 return VAR_2;
}
