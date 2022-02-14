
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_6__ TYPE_2__ ;
typedef struct TYPE_5__ TYPE_1__ ;


struct TYPE_5__ {int free; int commit; int append; int * backend; } ;
struct pack_writepack {TYPE_1__ parent; int indexer; } ;
struct pack_backend {int pack_folder; } ;
struct git_odb_writepack {int dummy; } ;
typedef struct git_odb_writepack git_odb_writepack ;
typedef int git_odb_backend ;
typedef int git_odb ;
typedef int git_indexer_progress_cb ;
struct TYPE_6__ {void* progress_cb_payload; int progress_cb; } ;
typedef TYPE_2__ git_indexer_options ;


 int FUNC_0 (struct pack_writepack*) ;
 TYPE_2__ VAR_0 ;
 int FUNC_1 (int) ;
 struct pack_writepack* FUNC_2 (int,int) ;
 int FUNC_3 (struct pack_writepack*) ;
 scalar_t__ FUNC_4 (int *,int ,int ,int *,TYPE_2__*) ;
 int VAR_1 ;
 int VAR_2 ;
 int VAR_3 ;

__attribute__((used)) static int FUNC_5(struct git_odb_writepack **VAR_4,
 git_odb_backend *VAR_5,
        git_odb *VAR_6,
 git_indexer_progress_cb VAR_7,
 void *VAR_8)
{
 git_indexer_options VAR_9 = VAR_0;
 struct pack_backend *VAR_10;
 struct pack_writepack *VAR_11;

 FUNC_1(VAR_4 && VAR_5);

 *VAR_4 = ((void*)0);

 VAR_9.progress_cb = VAR_7;
 VAR_9.progress_cb_payload = VAR_8;

 VAR_10 = (struct pack_backend *)VAR_5;

 VAR_11 = FUNC_2(1, sizeof(struct pack_writepack));
 FUNC_0(VAR_11);

 if (FUNC_4(&VAR_11->indexer,
  VAR_10->pack_folder, 0, VAR_6, &VAR_9) < 0) {
  FUNC_3(VAR_11);
  return -1;
 }

 VAR_11->parent.backend = VAR_5;
 VAR_11->parent.append = VAR_1;
 VAR_11->parent.commit = VAR_2;
 VAR_11->parent.free = VAR_3;

 *VAR_4 = (git_odb_writepack *)VAR_11;

 return 0;
}
