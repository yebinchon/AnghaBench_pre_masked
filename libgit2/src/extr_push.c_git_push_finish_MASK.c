
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_4__ TYPE_1__ ;


typedef int git_remote_callbacks ;
struct TYPE_4__ {int unpack_ok; int remote; int connection; } ;
typedef TYPE_1__ git_push ;


 int VAR_0 ;
 int VAR_1 ;
 int FUNC_0 (TYPE_1__*,int const*) ;
 int FUNC_1 (int ) ;
 int FUNC_2 (int ,char*) ;
 int FUNC_3 (int ,int ,int const*,int *) ;
 int FUNC_4 (int ) ;

int FUNC_5(git_push *VAR_2, const git_remote_callbacks *VAR_3)
{
 int VAR_4;

 if (!FUNC_4(VAR_2->remote) &&
     (VAR_4 = FUNC_3(VAR_2->remote, VAR_0, VAR_3, &VAR_2->connection)) < 0)
  return VAR_4;

 if ((VAR_4 = FUNC_1(VAR_2->remote)) < 0 ||
     (VAR_4 = FUNC_0(VAR_2, VAR_3)) < 0)
  return VAR_4;

 if (!VAR_2->unpack_ok) {
  VAR_4 = -1;
  FUNC_2(VAR_1, "unpacking the sent packfile failed on the remote");
 }

 return VAR_4;
}
