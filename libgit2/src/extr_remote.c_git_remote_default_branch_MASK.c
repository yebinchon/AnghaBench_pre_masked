
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_3__ TYPE_1__ ;


struct TYPE_3__ {scalar_t__ name; int oid; scalar_t__ symref_target; } ;
typedef TYPE_1__ git_remote_head ;
typedef int git_remote ;
typedef int git_oid ;
typedef int git_buf ;


 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int VAR_3 ;
 int FUNC_0 (int *) ;
 scalar_t__ FUNC_1 (scalar_t__,int ) ;
 int FUNC_2 (int ,scalar_t__) ;
 int FUNC_3 (int *,scalar_t__) ;
 int FUNC_4 (int *) ;
 scalar_t__ FUNC_5 (int const*,int *) ;
 int FUNC_6 (TYPE_1__ const***,size_t*,int *) ;
 scalar_t__ FUNC_7 (scalar_t__,int ) ;

int FUNC_8(git_buf *VAR_4, git_remote *VAR_5)
{
 const git_remote_head **VAR_6;
 const git_remote_head *VAR_7 = ((void*)0);
 const git_oid *VAR_8;
 size_t VAR_9, VAR_10;
 int VAR_11;

 FUNC_0(VAR_4);

 if ((VAR_11 = FUNC_6(&VAR_6, &VAR_9, VAR_5)) < 0)
  return VAR_11;

 if (VAR_9 == 0)
  return VAR_0;

 if (FUNC_7(VAR_6[0]->name, VAR_1))
  return VAR_0;

 FUNC_4(VAR_4);

 if (VAR_6[0]->symref_target)
  return FUNC_3(VAR_4, VAR_6[0]->symref_target);






 VAR_8 = &VAR_6[0]->oid;

 for (VAR_10 = 1; VAR_10 < VAR_9; VAR_10++) {
  if (FUNC_5(VAR_8, &VAR_6[VAR_10]->oid))
   continue;

  if (FUNC_1(VAR_6[VAR_10]->name, VAR_2))
   continue;

  if (!VAR_7) {
   VAR_7 = VAR_6[VAR_10];
   continue;
  }

  if (!FUNC_2(VAR_3, VAR_6[VAR_10]->name)) {
   VAR_7 = VAR_6[VAR_10];
   break;
  }
 }

 if (!VAR_7)
  return VAR_0;

 return FUNC_3(VAR_4, VAR_7->name);
}
