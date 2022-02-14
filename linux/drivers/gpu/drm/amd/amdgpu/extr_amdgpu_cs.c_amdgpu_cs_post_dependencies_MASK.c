
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


struct amdgpu_cs_parser {int num_post_deps; int fence; TYPE_1__* post_deps; } ;
struct TYPE_2__ {int syncobj; int * chain; scalar_t__ point; } ;


 int FUNC_0 (int ,int *,int ,scalar_t__) ;
 int FUNC_1 (int ,int ) ;

__attribute__((used)) static void FUNC_2(struct amdgpu_cs_parser *VAR_0)
{
 int VAR_1;

 for (VAR_1 = 0; VAR_1 < VAR_0->num_post_deps; ++VAR_1) {
  if (VAR_0->post_deps[VAR_1].chain && VAR_0->post_deps[VAR_1].point) {
   FUNC_0(VAR_0->post_deps[VAR_1].syncobj,
           VAR_0->post_deps[VAR_1].chain,
           VAR_0->fence, VAR_0->post_deps[VAR_1].point);
   VAR_0->post_deps[VAR_1].chain = ((void*)0);
  } else {
   FUNC_1(VAR_0->post_deps[VAR_1].syncobj,
        VAR_0->fence);
  }
 }
}
