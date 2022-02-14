
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_6__ TYPE_2__ ;
typedef struct TYPE_5__ TYPE_1__ ;


struct TYPE_5__ {scalar_t__ avail_in; scalar_t__ avail_out; int next_out; void* next_in; } ;
typedef TYPE_1__ z_stream ;
typedef void* uInt ;
struct TYPE_6__ {size_t buf_size; int digest; scalar_t__ compute_digest; int last_error; int z_buf; int fd; int flush_mode; TYPE_1__ zs; } ;
typedef TYPE_2__ git_filebuf ;


 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 scalar_t__ VAR_3 ;
 int FUNC_0 (int) ;
 scalar_t__ FUNC_1 (TYPE_1__*,int ) ;
 int FUNC_2 (int *,void*,size_t) ;
 scalar_t__ FUNC_3 (int ,int ,size_t) ;

__attribute__((used)) static int FUNC_4(git_filebuf *VAR_4, void *VAR_5, size_t VAR_6)
{
 z_stream *VAR_7 = &VAR_4->zs;

 if (VAR_6 > 0 || VAR_4->flush_mode == VAR_2) {
  VAR_7->next_in = VAR_5;
  VAR_7->avail_in = (uInt)VAR_6;

  do {
   size_t VAR_8;

   VAR_7->next_out = VAR_4->z_buf;
   VAR_7->avail_out = (uInt)VAR_4->buf_size;

   if (FUNC_1(VAR_7, VAR_4->flush_mode) == VAR_3) {
    VAR_4->last_error = VAR_1;
    return -1;
   }

   VAR_8 = VAR_4->buf_size - (size_t)VAR_7->avail_out;

   if (FUNC_3(VAR_4->fd, VAR_4->z_buf, VAR_8) < 0) {
    VAR_4->last_error = VAR_0;
    return -1;
   }

  } while (VAR_7->avail_out == 0);

  FUNC_0(VAR_7->avail_in == 0);

  if (VAR_4->compute_digest)
   FUNC_2(&VAR_4->digest, VAR_5, VAR_6);
 }

 return 0;
}
