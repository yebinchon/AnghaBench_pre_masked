
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct intel_plane_state {int scaler_id; int base; } ;
struct intel_plane {int base; } ;


 int VAR_0 ;
 struct intel_plane* FUNC_0 (int ) ;
 int VAR_1 ;
 int FUNC_1 (int *,int *) ;
 int FUNC_2 (struct intel_plane*) ;
 void* FUNC_3 (int,int ) ;

struct intel_plane *FUNC_4(void)
{
 struct intel_plane_state *VAR_2;
 struct intel_plane *VAR_3;

 VAR_3 = FUNC_3(sizeof(*VAR_3), VAR_1);
 if (!VAR_3)
  return FUNC_0(-VAR_0);

 VAR_2 = FUNC_3(sizeof(*VAR_2), VAR_1);
 if (!VAR_2) {
  FUNC_2(VAR_3);
  return FUNC_0(-VAR_0);
 }

 FUNC_1(&VAR_3->base, &VAR_2->base);
 VAR_2->scaler_id = -1;

 return VAR_3;
}
