
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_9__ TYPE_4__ ;
typedef struct TYPE_8__ TYPE_3__ ;
typedef struct TYPE_7__ TYPE_2__ ;
typedef struct TYPE_6__ TYPE_1__ ;


typedef int uv_loop_t ;
struct TYPE_7__ {unsigned int nbufs; int offset; int * bufs; int * bufsml; } ;
struct TYPE_8__ {TYPE_2__ info; } ;
struct TYPE_6__ {int fd; } ;
struct TYPE_9__ {TYPE_3__ fs; TYPE_1__ file; } ;
typedef TYPE_4__ uv_fs_t ;
typedef int uv_fs_cb ;
typedef int uv_file ;
typedef int uv_buf_t ;
typedef int int64_t ;


 unsigned int FUNC_0 (int *) ;
 int FUNC_1 (int ) ;
 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int VAR_3 ;
 int FUNC_2 (int *,int const*,unsigned int) ;
 int * FUNC_3 (unsigned int) ;

int FUNC_4(uv_loop_t* VAR_4,
                uv_fs_t* VAR_5,
                uv_file VAR_6,
                const uv_buf_t VAR_7[],
                unsigned int VAR_8,
                int64_t VAR_9,
                uv_fs_cb VAR_10) {
  FUNC_1(VAR_3);

  if (VAR_7 == ((void*)0) || VAR_8 == 0)
    return VAR_1;

  VAR_5->file.fd = VAR_6;

  VAR_5->fs.info.nbufs = VAR_8;
  VAR_5->fs.info.bufs = VAR_5->fs.info.bufsml;
  if (VAR_8 > FUNC_0(VAR_5->fs.info.bufsml))
    VAR_5->fs.info.bufs = FUNC_3(VAR_8 * sizeof(*VAR_7));

  if (VAR_5->fs.info.bufs == ((void*)0))
    return VAR_2;

  FUNC_2(VAR_5->fs.info.bufs, VAR_7, VAR_8 * sizeof(*VAR_7));

  VAR_5->fs.info.offset = VAR_9;
  VAR_0;
}
