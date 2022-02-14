
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


struct display_mode_lib {int dummy; } ;
struct TYPE_2__ {int dml; } ;
struct dc_state {int refcount; TYPE_1__ bw_ctx; } ;
struct dc {int dml; } ;


 int VAR_0 ;
 int FUNC_0 (int *) ;
 struct dc_state* FUNC_1 (int,int ) ;
 int FUNC_2 (int *,int *,int) ;

struct dc_state *FUNC_3(struct dc *VAR_1)
{
 struct dc_state *VAR_2 = FUNC_1(sizeof(struct dc_state),
         VAR_0);

 if (!VAR_2)
  return ((void*)0);
 FUNC_0(&VAR_2->refcount);

 return VAR_2;
}
