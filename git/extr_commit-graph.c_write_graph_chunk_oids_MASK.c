
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_6__ TYPE_3__ ;
typedef struct TYPE_5__ TYPE_2__ ;
typedef struct TYPE_4__ TYPE_1__ ;


struct TYPE_4__ {int nr; struct commit** list; } ;
struct write_commit_graph_context {int progress_cnt; int progress; TYPE_1__ commits; } ;
struct hashfile {int dummy; } ;
struct TYPE_6__ {int hash; } ;
struct TYPE_5__ {TYPE_3__ oid; } ;
struct commit {TYPE_2__ object; } ;


 int FUNC_0 (int ,int ) ;
 int FUNC_1 (struct hashfile*,int ,int) ;

__attribute__((used)) static void FUNC_2(struct hashfile *VAR_0, int VAR_1,
       struct write_commit_graph_context *VAR_2)
{
 struct commit **VAR_3 = VAR_2->commits.list;
 int VAR_4;
 for (VAR_4 = 0; VAR_4 < VAR_2->commits.nr; VAR_4++, VAR_3++) {
  FUNC_0(VAR_2->progress, ++VAR_2->progress_cnt);
  FUNC_1(VAR_0, (*VAR_3)->object.oid.hash, (int)VAR_1);
 }
}
