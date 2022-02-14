
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_6__ TYPE_3__ ;
typedef struct TYPE_5__ TYPE_2__ ;
typedef struct TYPE_4__ TYPE_1__ ;


struct TYPE_6__ {int nr; struct commit** list; } ;
struct write_commit_graph_context {int progress_cnt; int progress; TYPE_3__ commits; } ;
struct hashfile {int dummy; } ;
struct TYPE_4__ {int* hash; } ;
struct TYPE_5__ {TYPE_1__ oid; } ;
struct commit {TYPE_2__ object; } ;


 int FUNC_0 (int ,int ) ;
 int FUNC_1 (struct hashfile*,int) ;

__attribute__((used)) static void FUNC_2(struct hashfile *VAR_0,
         struct write_commit_graph_context *VAR_1)
{
 int VAR_2, VAR_3 = 0;
 struct commit **VAR_4 = VAR_1->commits.list;






 for (VAR_2 = 0; VAR_2 < 256; VAR_2++) {
  while (VAR_3 < VAR_1->commits.nr) {
   if ((*VAR_4)->object.oid.hash[0] != VAR_2)
    break;
   FUNC_0(VAR_1->progress, ++VAR_1->progress_cnt);
   VAR_3++;
   VAR_4++;
  }

  FUNC_1(VAR_0, VAR_3);
 }
}
