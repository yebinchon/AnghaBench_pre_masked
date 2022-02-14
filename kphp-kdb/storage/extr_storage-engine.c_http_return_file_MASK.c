
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_7__ TYPE_2__ ;
typedef struct TYPE_6__ TYPE_1__ ;


struct lev_storage_file {long long secret; scalar_t__ type; int content_type; scalar_t__ local_id; int mtime; int size; scalar_t__ data; } ;
struct connection {int dummy; } ;
struct TYPE_7__ {scalar_t__ local_id; TYPE_1__* B; int offset; int * data; scalar_t__ corrupted; scalar_t__ aio; int refcnt; } ;
typedef TYPE_2__ metafile_t ;
struct TYPE_6__ {int volume_id; int abs_filename; } ;


 scalar_t__ VAR_0 ;
 long long VAR_1 ;
 int VAR_2 ;
 int FUNC_0 (struct connection*,TYPE_2__*,long long,int,int,int *) ;
 int VAR_3 ;
 int VAR_4 ;
 int VAR_5 ;
 int VAR_6 ;
 int VAR_7 ;
 int VAR_8 ;
 int FUNC_1 (TYPE_2__*,int) ;
 int FUNC_2 (int,char*,...) ;
 int FUNC_3 (struct connection*,void*,int ,int ,int) ;

int FUNC_4 (struct connection *VAR_9, metafile_t *VAR_10, long long VAR_11, int VAR_12) {
  if (VAR_10 == ((void*)0)) {
    FUNC_2 (1, "http_return_file: meta == NULL\n");
    return -500;
  }
  VAR_10->refcnt--;
  if (VAR_10->aio) {
    FUNC_2 (2, "Metafile timeout error %s, offset: %lld, volume_id: %lld\n", VAR_10->B->abs_filename, VAR_10->offset, VAR_10->B->volume_id);
    return FUNC_0 (VAR_9, VAR_10, VAR_11, VAR_12, -500, &VAR_6);
  }
  if (VAR_10->corrupted) {
    FUNC_2 (2, "Metafile read error %s, offset: %lld, volume_id: %lld\n", VAR_10->B->abs_filename, VAR_10->offset, VAR_10->B->volume_id);
    return FUNC_0 (VAR_9, VAR_10, VAR_11, VAR_12, -500, &VAR_4);
  }

  const struct lev_storage_file *VAR_13 = (struct lev_storage_file *) &VAR_10->data[0];

  if ((VAR_11 ^ VAR_13->secret) & VAR_1) {
    FUNC_2 (2, "Metafiles 2 high bytes of secret is corrupted, %s, offset: %lld, volume_id: %lld\n", VAR_10->B->abs_filename, VAR_10->offset, VAR_10->B->volume_id);
    return FUNC_0 (VAR_9, VAR_10, VAR_11, VAR_12, -500, &VAR_7);
  }

  if (VAR_13->type != VAR_0) {
    FUNC_2 (2, "E->type isn't LEV_STORAGE_FILE %s, offset: %lld, volume_id: %lld\n", VAR_10->B->abs_filename, VAR_10->offset, VAR_10->B->volume_id);
    return FUNC_0 (VAR_9, VAR_10, VAR_11, VAR_12, -500, &VAR_8);
  }
  if (VAR_13->content_type >= VAR_2 || VAR_13->content_type < 0) {
    FUNC_2 (2, "Illegal E->content_type in %s, offset: %lld, volume_id: %lld\n", VAR_10->B->abs_filename, VAR_10->offset, VAR_10->B->volume_id);
    return FUNC_0 (VAR_9, VAR_10, VAR_11, VAR_12, -500, &VAR_3);
  }
  if (VAR_13->local_id != VAR_10->local_id) {
    FUNC_2 (2, "local_id not matched %s, offset: %lld, volume_id: %lld\n", VAR_10->B->abs_filename, VAR_10->offset, VAR_10->B->volume_id);
    return FUNC_0 (VAR_9, VAR_10, VAR_11, VAR_12, -500, &VAR_5);
  }
  FUNC_1 (VAR_10, 1);
  if (VAR_13->secret != VAR_11) {
    FUNC_2 (2, "secret not matched %s, offset: %lld, volume_id: %lld\n", VAR_10->B->abs_filename, VAR_10->offset, VAR_10->B->volume_id);
    return -403;
  }
  if (VAR_13->content_type != VAR_12) {
    FUNC_2 (2, "E->content_type (%d) != content_type (%d) %s, offset: %lld, volume_id: %lld\n", VAR_13->content_type, VAR_12, VAR_10->B->abs_filename, VAR_10->offset, VAR_10->B->volume_id);
    return -404;
  }
  FUNC_2 (3, "E->size = %d\n", VAR_13->size);

  FUNC_3 (VAR_9, (void *) VAR_13->data, VAR_13->size, VAR_13->mtime, VAR_13->content_type);
  return 0;
}
