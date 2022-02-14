
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_23__ TYPE_3__ ;
typedef struct TYPE_22__ TYPE_2__ ;
typedef struct TYPE_21__ TYPE_1__ ;
typedef struct TYPE_20__ TYPE_14__ ;
typedef struct TYPE_19__ TYPE_12__ ;


struct TYPE_21__ {void* curpos; } ;
typedef TYPE_1__ git_packfile_stream ;
typedef void* git_off_t ;
typedef scalar_t__ git_object_t ;
typedef int git_mwindow ;
struct TYPE_22__ {int received_objects; int indexed_objects; } ;
typedef TYPE_2__ git_indexer_progress ;
struct TYPE_23__ {int have_stream; int have_delta; void* off; TYPE_14__* pack; scalar_t__ entry_type; int hash_ctx; int entry_data; void* entry_start; TYPE_1__ stream; } ;
typedef TYPE_3__ git_indexer ;
struct TYPE_19__ {scalar_t__ size; } ;
struct TYPE_20__ {TYPE_12__ mwf; } ;


 int VAR_0 ;
 scalar_t__ VAR_1 ;
 scalar_t__ VAR_2 ;
 int FUNC_0 (TYPE_3__*,scalar_t__) ;
 int FUNC_1 (TYPE_3__*,TYPE_2__*) ;
 int FUNC_2 (int *) ;
 int FUNC_3 (int *) ;
 int FUNC_4 (int **) ;
 int FUNC_5 (TYPE_1__*) ;
 int FUNC_6 (TYPE_1__*,TYPE_14__*,void*) ;
 int FUNC_7 (size_t*,scalar_t__*,TYPE_12__*,int **,void**) ;
 int FUNC_8 (int *,size_t,scalar_t__) ;
 int FUNC_9 (TYPE_3__*,TYPE_1__*) ;
 int FUNC_10 (TYPE_3__*,TYPE_1__*) ;
 int FUNC_11 (TYPE_3__*) ;
 int FUNC_12 (TYPE_3__*) ;

__attribute__((used)) static int FUNC_13(git_indexer *VAR_3, git_indexer_progress *VAR_4)
{
 git_packfile_stream *VAR_5 = &VAR_3->stream;
 git_off_t VAR_6 = VAR_3->off;
 size_t VAR_7;
 git_object_t VAR_8;
 git_mwindow *VAR_9 = ((void*)0);
 int VAR_10;

 if (VAR_3->pack->mwf.size <= VAR_3->off + 20)
  return VAR_0;

 if (!VAR_3->have_stream) {
  VAR_10 = FUNC_7(&VAR_7, &VAR_8, &VAR_3->pack->mwf, &VAR_9, &VAR_3->off);
  if (VAR_10 == VAR_0) {
   VAR_3->off = VAR_6;
   return VAR_10;
  }
  if (VAR_10 < 0)
   return VAR_10;

  FUNC_4(&VAR_9);
  VAR_3->entry_start = VAR_6;
  FUNC_3(&VAR_3->hash_ctx);
  FUNC_2(&VAR_3->entry_data);

  if (VAR_8 == VAR_2 || VAR_8 == VAR_1) {
   VAR_10 = FUNC_0(VAR_3, VAR_8);
   if (VAR_10 == VAR_0) {
    VAR_3->off = VAR_6;
    return VAR_10;
   }
   if (VAR_10 < 0)
    return VAR_10;

   VAR_3->have_delta = 1;
  } else {
   VAR_3->have_delta = 0;

   VAR_10 = FUNC_8(&VAR_3->hash_ctx, VAR_7, VAR_8);
   if (VAR_10 < 0)
    return VAR_10;
  }

  VAR_3->have_stream = 1;
  VAR_3->entry_type = VAR_8;

  VAR_10 = FUNC_6(VAR_5, VAR_3->pack, VAR_3->off);
  if (VAR_10 < 0)
   return VAR_10;
 }

 if (VAR_3->have_delta) {
  VAR_10 = FUNC_10(VAR_3, VAR_5);
 } else {
  VAR_10 = FUNC_9(VAR_3, VAR_5);
 }

 VAR_3->off = VAR_5->curpos;
 if (VAR_10 == VAR_0)
  return VAR_10;


 VAR_3->have_stream = 0;
 FUNC_5(VAR_5);

 if (VAR_10 < 0)
  return VAR_10;

 if (VAR_3->have_delta) {
  VAR_10 = FUNC_11(VAR_3);
 } else {
  VAR_10 = FUNC_12(VAR_3);
 }

 if (VAR_10 < 0)
  return VAR_10;

 if (!VAR_3->have_delta) {
  VAR_4->indexed_objects++;
 }
 VAR_4->received_objects++;

 if ((VAR_10 = FUNC_1(VAR_3, VAR_4)) != 0)
  return VAR_10;

 return 0;
}
