
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_13__ TYPE_2__ ;
typedef struct TYPE_12__ TYPE_1__ ;


typedef int mode_t ;
struct TYPE_12__ {int do_not_buffer; int do_fsync; size_t buf_size; int fd; int compute_digest; int fd_is_open; int created_lock; int * path_original; int * path_lock; int * write; int flush_mode; int * z_buf; int zs; int digest; int * buffer; int last_error; scalar_t__ buf_pos; } ;
typedef TYPE_1__ git_filebuf ;
struct TYPE_13__ {size_t size; } ;
typedef TYPE_2__ git_buf ;


 int VAR_0 ;
 TYPE_2__ VAR_1 ;
 int VAR_2 ;
 int FUNC_0 (int *) ;
 int FUNC_1 (size_t*,size_t,size_t) ;
 int VAR_3 ;
 int VAR_4 ;
 int VAR_5 ;
 int VAR_6 ;
 int VAR_7 ;
 int VAR_8 ;
 int VAR_9 ;
 int * VAR_10 ;
 size_t VAR_11 ;
 int VAR_12 ;
 scalar_t__ VAR_13 ;
 int FUNC_2 (int) ;
 scalar_t__ FUNC_3 (int *,int) ;
 void* FUNC_4 (size_t) ;
 void* FUNC_5 (TYPE_2__*) ;
 int FUNC_6 (TYPE_2__*) ;
 int FUNC_7 (int ,char*,...) ;
 int FUNC_8 (TYPE_1__*) ;
 int FUNC_9 (TYPE_2__*,char const*,int ) ;
 scalar_t__ FUNC_10 (int *) ;
 scalar_t__ FUNC_11 (int *) ;
 int FUNC_12 (TYPE_1__*,int,int ) ;
 int FUNC_13 (int *,int *,size_t) ;
 int FUNC_14 (TYPE_1__*,int,int) ;
 int FUNC_15 (TYPE_2__*,char const*) ;
 int VAR_14 ;
 int VAR_15 ;

int FUNC_16(git_filebuf *VAR_16, const char *VAR_17, int VAR_18, mode_t VAR_19, size_t VAR_20)
{
 int VAR_21, VAR_22 = -1;
 size_t VAR_23, VAR_24;




 FUNC_2(VAR_16 && VAR_17 && VAR_16->buffer == ((void*)0));

 FUNC_14(VAR_16, 0x0, sizeof(git_filebuf));

 if (VAR_18 & VAR_6)
  VAR_16->do_not_buffer = 1;

 if (VAR_18 & VAR_7)
  VAR_16->do_fsync = 1;

 VAR_16->buf_size = VAR_20;
 VAR_16->buf_pos = 0;
 VAR_16->fd = -1;
 VAR_16->last_error = VAR_0;


 if (!VAR_16->do_not_buffer) {
  VAR_16->buffer = FUNC_4(VAR_16->buf_size);
  FUNC_0(VAR_16->buffer);
 }


 if (VAR_18 & VAR_8) {
  VAR_16->compute_digest = 1;

  if (FUNC_10(&VAR_16->digest) < 0)
   goto cleanup;
 }

 VAR_21 = VAR_18 >> VAR_5;


 if (VAR_21 != 0) {

  if (FUNC_3(&VAR_16->zs, VAR_21) != VAR_13) {
   FUNC_7(VAR_4, "failed to initialize zlib");
   goto cleanup;
  }


  VAR_16->z_buf = FUNC_4(VAR_16->buf_size);
  FUNC_0(VAR_16->z_buf);


  VAR_16->flush_mode = VAR_12;
  VAR_16->write = &VAR_14;
 } else {
  VAR_16->write = &VAR_15;
 }


 if (VAR_18 & VAR_9) {
  git_buf VAR_25 = VAR_1;


  VAR_16->fd = FUNC_9(&VAR_25, VAR_17, VAR_19);

  if (VAR_16->fd < 0) {
   FUNC_6(&VAR_25);
   goto cleanup;
  }
  VAR_16->fd_is_open = 1;
  VAR_16->created_lock = 1;


  VAR_16->path_original = ((void*)0);
  VAR_16->path_lock = FUNC_5(&VAR_25);
  FUNC_0(VAR_16->path_lock);
 } else {
  git_buf VAR_26 = VAR_1;

  if ((VAR_22 = FUNC_15(&VAR_26, VAR_17)) < 0)
   goto cleanup;


  VAR_23 = VAR_26.size;
  VAR_16->path_original = FUNC_5(&VAR_26);


  FUNC_1(&VAR_24, VAR_23, VAR_11);
  VAR_16->path_lock = FUNC_4(VAR_24);
  FUNC_0(VAR_16->path_lock);

  FUNC_13(VAR_16->path_lock, VAR_16->path_original, VAR_23);
  FUNC_13(VAR_16->path_lock + VAR_23, VAR_10, VAR_11);

  if (FUNC_11(VAR_16->path_original)) {
   FUNC_7(VAR_3, "path '%s' is a directory", VAR_16->path_original);
   VAR_22 = VAR_2;
   goto cleanup;
  }


  if ((VAR_22 = FUNC_12(VAR_16, VAR_18, VAR_19)) < 0)
   goto cleanup;

  VAR_16->created_lock = 1;
 }

 return 0;

cleanup:
 FUNC_8(VAR_16);
 return VAR_22;
}
