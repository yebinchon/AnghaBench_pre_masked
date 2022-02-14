
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_16__ TYPE_6__ ;
typedef struct TYPE_15__ TYPE_5__ ;
typedef struct TYPE_14__ TYPE_2__ ;
typedef struct TYPE_13__ TYPE_1__ ;


typedef int opts ;
typedef int git_odb ;
struct TYPE_13__ {int verify; int progress_cb_payload; int progress_cb; } ;
typedef TYPE_1__ git_indexer_options ;
struct TYPE_14__ {unsigned int mode; int do_fsync; TYPE_5__* pack; int do_verify; int expected_oids; int entry_data; int trailer; int hash_ctx; int progress_payload; int progress_cb; int * odb; } ;
typedef TYPE_2__ git_indexer ;
typedef int git_buf ;
struct TYPE_16__ {int fd; } ;
struct TYPE_15__ {int pack_name; TYPE_6__ mwf; } ;


 int VAR_0 ;
 int FUNC_0 (TYPE_2__*) ;
 TYPE_1__ VAR_1 ;
 unsigned int VAR_2 ;
 TYPE_2__* FUNC_1 (int,int) ;
 int FUNC_2 (TYPE_2__*) ;
 int FUNC_3 (int *) ;
 int FUNC_4 (int *) ;
 int FUNC_5 (int *,int ) ;
 int FUNC_6 (int *,char const*,char const*) ;
 scalar_t__ FUNC_7 (int *) ;
 int FUNC_8 (int *,int ,unsigned int) ;
 int FUNC_9 (int *) ;
 int FUNC_10 (TYPE_6__*) ;
 int FUNC_11 (int *) ;
 int FUNC_12 (TYPE_5__**,int ) ;
 scalar_t__ VAR_3 ;
 int FUNC_13 (TYPE_1__*,TYPE_1__*,int) ;
 int FUNC_14 (int) ;
 int FUNC_15 (int ) ;

int FUNC_16(
  git_indexer **VAR_4,
  const char *VAR_5,
  unsigned int VAR_6,
  git_odb *VAR_7,
  git_indexer_options *VAR_8)
{
 git_indexer_options VAR_9 = VAR_1;
 git_indexer *VAR_10;
 git_buf VAR_11 = VAR_0, VAR_12 = VAR_0;
 static const char VAR_13[] = "/pack";
 int VAR_14, VAR_15 = -1;

 if (VAR_8)
  FUNC_13(&VAR_9, VAR_8, sizeof(VAR_9));

 VAR_10 = FUNC_1(1, sizeof(git_indexer));
 FUNC_0(VAR_10);
 VAR_10->odb = VAR_7;
 VAR_10->progress_cb = VAR_9.progress_cb;
 VAR_10->progress_payload = VAR_9.progress_cb_payload;
 VAR_10->mode = VAR_6 ? VAR_6 : VAR_2;
 FUNC_9(&VAR_10->hash_ctx);
 FUNC_9(&VAR_10->trailer);
 FUNC_5(&VAR_10->entry_data, 0);

 if ((VAR_14 = FUNC_11(&VAR_10->expected_oids)) < 0)
  goto cleanup;

 VAR_10->do_verify = VAR_9.verify;

 if (VAR_3)
  VAR_10->do_fsync = 1;

 VAR_14 = FUNC_6(&VAR_11, VAR_5, VAR_13);
 if (VAR_14 < 0)
  goto cleanup;

 VAR_15 = FUNC_8(&VAR_12, FUNC_3(&VAR_11), VAR_10->mode);
 FUNC_4(&VAR_11);
 if (VAR_15 < 0)
  goto cleanup;

 VAR_14 = FUNC_12(&VAR_10->pack, FUNC_3(&VAR_12));
 FUNC_4(&VAR_12);

 if (VAR_14 < 0)
  goto cleanup;

 VAR_10->pack->mwf.fd = VAR_15;
 if ((VAR_14 = FUNC_10(&VAR_10->pack->mwf)) < 0)
  goto cleanup;

 *VAR_4 = VAR_10;
 return 0;

cleanup:
 if (VAR_15 != -1)
  FUNC_14(VAR_15);

 if (FUNC_7(&VAR_12) > 0)
  FUNC_15(FUNC_3(&VAR_12));

 if (VAR_10->pack != ((void*)0))
  FUNC_15(VAR_10->pack->pack_name);

 FUNC_4(&VAR_11);
 FUNC_4(&VAR_12);
 FUNC_2(VAR_10);
 return -1;
}
