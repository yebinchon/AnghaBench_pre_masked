
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


struct ucma_file {int dummy; } ;
struct ucma_context {TYPE_1__* cm_id; } ;
struct TYPE_2__ {int device; } ;


 int VAR_0 ;
 struct ucma_context* FUNC_0 (int ) ;
 scalar_t__ FUNC_1 (struct ucma_context*) ;
 struct ucma_context* FUNC_2 (struct ucma_file*,int) ;
 int FUNC_3 (struct ucma_context*) ;

__attribute__((used)) static struct ucma_context *FUNC_4(struct ucma_file *VAR_1, int VAR_2)
{
 struct ucma_context *VAR_3 = FUNC_2(VAR_1, VAR_2);

 if (FUNC_1(VAR_3))
  return VAR_3;
 if (!VAR_3->cm_id->device) {
  FUNC_3(VAR_3);
  return FUNC_0(-VAR_0);
 }
 return VAR_3;
}
