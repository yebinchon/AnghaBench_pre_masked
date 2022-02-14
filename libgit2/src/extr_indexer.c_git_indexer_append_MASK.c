
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_17__ TYPE_6__ ;
typedef struct TYPE_16__ TYPE_3__ ;
typedef struct TYPE_15__ TYPE_2__ ;
typedef struct TYPE_14__ TYPE_1__ ;


struct git_pack_header {int hdr_entries; } ;
struct TYPE_14__ {scalar_t__ size; } ;
typedef TYPE_1__ git_mwindow_file ;
struct TYPE_15__ {unsigned int total_objects; scalar_t__ indexed_objects; scalar_t__ indexed_deltas; scalar_t__ total_deltas; scalar_t__ local_objects; scalar_t__ received_objects; } ;
typedef TYPE_2__ git_indexer_progress ;
struct TYPE_16__ {int parsed_header; int off; scalar_t__ nr_objects; int deltas; int objects; TYPE_6__* pack; struct git_pack_header hdr; } ;
typedef TYPE_3__ git_indexer ;
struct TYPE_17__ {int has_cache; int idx_cache; TYPE_1__ mwf; } ;


 int VAR_0 ;
 int VAR_1 ;
 int FUNC_0 (TYPE_3__*,void const*,size_t) ;
 int FUNC_1 (int ) ;
 int FUNC_2 (TYPE_3__*,TYPE_2__*) ;
 int FUNC_3 (int ,char*) ;
 scalar_t__ VAR_2 ;
 int FUNC_4 (TYPE_1__*) ;
 scalar_t__ FUNC_5 (int *) ;
 scalar_t__ FUNC_6 (int *,unsigned int,int *) ;
 int FUNC_7 (TYPE_3__*,void const*,int) ;
 scalar_t__ FUNC_8 (int ) ;
 int * VAR_3 ;
 int FUNC_9 (struct git_pack_header*,TYPE_6__*) ;
 int FUNC_10 (TYPE_3__*,TYPE_2__*) ;

int FUNC_11(git_indexer *VAR_4, const void *VAR_5, size_t VAR_6, git_indexer_progress *VAR_7)
{
 int VAR_8 = -1;
 struct git_pack_header *VAR_9 = &VAR_4->hdr;
 git_mwindow_file *VAR_10 = &VAR_4->pack->mwf;

 FUNC_1(VAR_4 && VAR_5 && VAR_7);

 if ((VAR_8 = FUNC_0(VAR_4, VAR_5, VAR_6)) < 0)
  return VAR_8;

 FUNC_7(VAR_4, VAR_5, (int)VAR_6);


 VAR_4->pack->mwf.size += VAR_6;

 if (!VAR_4->parsed_header) {
  unsigned int VAR_11;

  if ((unsigned)VAR_4->pack->mwf.size < sizeof(struct git_pack_header))
   return 0;

  if ((VAR_8 = FUNC_9(&VAR_4->hdr, VAR_4->pack)) < 0)
   return VAR_8;

  VAR_4->parsed_header = 1;
  VAR_4->nr_objects = FUNC_8(VAR_9->hdr_entries);
  VAR_4->off = sizeof(struct git_pack_header);

  if (VAR_4->nr_objects <= VAR_2) {
   VAR_11 = (unsigned int)VAR_4->nr_objects;
  } else {
   FUNC_3(VAR_1, "too many objects");
   return -1;
  }

  if (FUNC_5(&VAR_4->pack->idx_cache) < 0)
   return -1;

  VAR_4->pack->has_cache = 1;
  if (FUNC_6(&VAR_4->objects, VAR_11, VAR_3) < 0)
   return -1;

  if (FUNC_6(&VAR_4->deltas, VAR_11 / 2, ((void*)0)) < 0)
   return -1;

  VAR_7->received_objects = 0;
  VAR_7->local_objects = 0;
  VAR_7->total_deltas = 0;
  VAR_7->indexed_deltas = 0;
  VAR_7->indexed_objects = 0;
  VAR_7->total_objects = VAR_11;

  if ((VAR_8 = FUNC_2(VAR_4, VAR_7)) != 0)
   return VAR_8;
 }




 FUNC_4(VAR_10);

 while (VAR_7->indexed_objects < VAR_4->nr_objects) {
  if ((VAR_8 = FUNC_10(VAR_4, VAR_7)) != 0) {
   if (VAR_8 == VAR_0)
    break;
   else
    goto on_error;
  }
 }

 return 0;

on_error:
 FUNC_4(VAR_10);
 return VAR_8;
}
