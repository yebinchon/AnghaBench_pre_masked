
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


struct TYPE_2__ {int (* cb ) (char const*,int *,int ) ;int cb_data; int repo; } ;
typedef TYPE_1__ tag_cb_data ;
typedef int git_oid ;


 int VAR_0 ;
 scalar_t__ FUNC_0 (char const*,int ) ;
 int FUNC_1 (int,char*) ;
 int FUNC_2 (int *,int ,char const*) ;
 int FUNC_3 (char const*,int *,int ) ;

__attribute__((used)) static int FUNC_4(const char *VAR_1, void *VAR_2)
{
 int VAR_3;
 git_oid VAR_4;
 tag_cb_data *VAR_5 = (tag_cb_data *)VAR_2;

 if (FUNC_0(VAR_1, VAR_0) != 0)
  return 0;

 if (!(VAR_3 = FUNC_2(&VAR_4, VAR_5->repo, VAR_1))) {
  if ((VAR_3 = VAR_5->cb(VAR_1, &VAR_4, VAR_5->cb_data)) != 0)
   FUNC_1(VAR_3, "git_tag_foreach");
 }

 return VAR_3;
}
