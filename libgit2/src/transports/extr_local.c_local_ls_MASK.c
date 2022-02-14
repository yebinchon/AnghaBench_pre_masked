
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_4__ TYPE_2__ ;
typedef struct TYPE_3__ TYPE_1__ ;


struct TYPE_3__ {size_t length; scalar_t__ contents; } ;
struct TYPE_4__ {TYPE_1__ refs; int have_refs; } ;
typedef TYPE_2__ transport_local ;
typedef int git_transport ;
typedef int git_remote_head ;


 int VAR_0 ;
 int FUNC_0 (int ,char*) ;

__attribute__((used)) static int FUNC_1(const git_remote_head ***VAR_1, size_t *VAR_2, git_transport *VAR_3)
{
 transport_local *VAR_4 = (transport_local *)VAR_3;

 if (!VAR_4->have_refs) {
  FUNC_0(VAR_0, "the transport has not yet loaded the refs");
  return -1;
 }

 *VAR_1 = (const git_remote_head **)VAR_4->refs.contents;
 *VAR_2 = VAR_4->refs.length;

 return 0;
}
