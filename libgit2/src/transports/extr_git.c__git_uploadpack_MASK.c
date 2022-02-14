
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_5__ TYPE_2__ ;
typedef struct TYPE_4__ TYPE_1__ ;


struct TYPE_5__ {TYPE_1__* current_stream; } ;
typedef TYPE_2__ git_subtransport ;
typedef int git_smart_subtransport_stream ;
struct TYPE_4__ {int parent; } ;


 int VAR_0 ;
 int FUNC_0 (char const*) ;
 int FUNC_1 (int ,char*) ;

__attribute__((used)) static int FUNC_2(
 git_subtransport *VAR_1,
 const char *VAR_2,
 git_smart_subtransport_stream **VAR_3)
{
 FUNC_0(VAR_2);

 if (VAR_1->current_stream) {
  *VAR_3 = &VAR_1->current_stream->parent;
  return 0;
 }

 FUNC_1(VAR_0, "must call UPLOADPACK_LS before UPLOADPACK");
 return -1;
}
