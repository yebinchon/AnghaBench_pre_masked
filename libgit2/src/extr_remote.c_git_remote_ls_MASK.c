
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_6__ TYPE_2__ ;
typedef struct TYPE_5__ TYPE_1__ ;


typedef int git_remote_head ;
struct TYPE_5__ {TYPE_2__* transport; } ;
typedef TYPE_1__ git_remote ;
struct TYPE_6__ {int (* ls ) (int const***,size_t*,TYPE_2__*) ;} ;


 int VAR_0 ;
 int FUNC_0 (TYPE_1__*) ;
 int FUNC_1 (int ,char*) ;
 int FUNC_2 (int const***,size_t*,TYPE_2__*) ;

int FUNC_3(const git_remote_head ***VAR_1, size_t *VAR_2, git_remote *VAR_3)
{
 FUNC_0(VAR_3);

 if (!VAR_3->transport) {
  FUNC_1(VAR_0, "this remote has never connected");
  return -1;
 }

 return VAR_3->transport->ls(VAR_1, VAR_2, VAR_3->transport);
}
