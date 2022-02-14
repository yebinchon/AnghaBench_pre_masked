
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_9__ TYPE_3__ ;
typedef struct TYPE_8__ TYPE_2__ ;
typedef struct TYPE_7__ TYPE_1__ ;


struct TYPE_8__ {int (* negotiate_fetch ) (TYPE_2__*,int ,int const* const*,int ) ;} ;
typedef TYPE_2__ git_transport ;
typedef int git_remote_head ;
struct TYPE_7__ {int length; scalar_t__ contents; } ;
struct TYPE_9__ {TYPE_1__ refs; int repo; scalar_t__ need_pack; TYPE_2__* transport; } ;
typedef TYPE_3__ git_remote ;
typedef int git_fetch_options ;


 int VAR_0 ;
 scalar_t__ FUNC_0 (TYPE_3__*,int const*) ;
 int FUNC_1 (int ,char*) ;
 int FUNC_2 (TYPE_2__*,int ,int const* const*,int ) ;

int FUNC_3(git_remote *VAR_1, const git_fetch_options *VAR_2)
{
 git_transport *VAR_3 = VAR_1->transport;

 VAR_1->need_pack = 0;

 if (FUNC_0(VAR_1, VAR_2) < 0) {
  FUNC_1(VAR_0, "failed to filter the reference list for wants");
  return -1;
 }


 if (!VAR_1->need_pack)
  return 0;





 return VAR_3->negotiate_fetch(VAR_3,
  VAR_1->repo,
  (const git_remote_head * const *)VAR_1->refs.contents,
  VAR_1->refs.length);
}
