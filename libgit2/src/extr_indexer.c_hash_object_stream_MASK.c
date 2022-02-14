
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_3__ TYPE_1__ ;


typedef scalar_t__ ssize_t ;
typedef int git_packfile_stream ;
struct TYPE_3__ {int objbuf; int hash_ctx; int entry_data; scalar_t__ do_verify; } ;
typedef TYPE_1__ git_indexer ;


 int FUNC_0 (int) ;
 int FUNC_1 (int *,int ,scalar_t__) ;
 int FUNC_2 (int *,int ,scalar_t__) ;
 scalar_t__ FUNC_3 (int *,int ,int) ;

__attribute__((used)) static int FUNC_4(git_indexer*VAR_0, git_packfile_stream *VAR_1)
{
 ssize_t VAR_2;

 FUNC_0(VAR_0 && VAR_1);

 do {
  if ((VAR_2 = FUNC_3(VAR_1, VAR_0->objbuf, sizeof(VAR_0->objbuf))) < 0)
   break;

  if (VAR_0->do_verify)
   FUNC_1(&VAR_0->entry_data, VAR_0->objbuf, VAR_2);

  FUNC_2(&VAR_0->hash_ctx, VAR_0->objbuf, VAR_2);
 } while (VAR_2 > 0);

 if (VAR_2 < 0)
  return (int)VAR_2;

 return 0;
}
