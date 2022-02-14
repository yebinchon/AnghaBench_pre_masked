
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct dc_plane_state {int refcount; } ;
struct dc {int ctx; } ;


 int VAR_0 ;
 int FUNC_0 (int ,struct dc_plane_state*) ;
 int FUNC_1 (int *) ;
 struct dc_plane_state* FUNC_2 (int,int ) ;

struct dc_plane_state *FUNC_3(struct dc *VAR_1)
{
 struct dc *VAR_2 = VAR_1;

 struct dc_plane_state *VAR_3 = FUNC_2(sizeof(*VAR_3),
            VAR_0);

 if (((void*)0) == VAR_3)
  return ((void*)0);

 FUNC_1(&VAR_3->refcount);
 FUNC_0(VAR_2->ctx, VAR_3);

 return VAR_3;
}
