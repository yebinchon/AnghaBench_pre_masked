
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_6__ TYPE_3__ ;
typedef struct TYPE_5__ TYPE_1__ ;


struct TYPE_5__ {unsigned int nbufs; scalar_t__ off; int file; TYPE_3__* bufs; TYPE_3__* bufsml; } ;
typedef TYPE_1__ uv_fs_t ;
struct stat {int st_mode; } ;
struct iovec {int dummy; } ;
typedef int ssize_t ;
struct TYPE_6__ {int len; int base; } ;


 scalar_t__ VAR_0 ;
 scalar_t__ VAR_1 ;
 scalar_t__ VAR_2 ;
 scalar_t__ FUNC_0 (int ) ;
 scalar_t__ VAR_3 ;
 int FUNC_1 (int ,struct stat*) ;
 int FUNC_2 (int ,int ,int ,scalar_t__) ;
 int FUNC_3 (int ,struct iovec*,int,scalar_t__) ;
 int FUNC_4 (int ,int ,int ) ;
 int FUNC_5 (int ,struct iovec*,int) ;
 int FUNC_6 (TYPE_3__*) ;
 int FUNC_7 (int ,TYPE_3__*,int,scalar_t__) ;
 unsigned int FUNC_8 () ;
 int FUNC_9 (int ,struct iovec*,int,scalar_t__) ;

__attribute__((used)) static ssize_t FUNC_10(uv_fs_t* VAR_4) {

  static int VAR_5;

  unsigned int VAR_6;
  ssize_t VAR_7;

  VAR_6 = FUNC_8();
  if (VAR_4->nbufs > VAR_6)
    VAR_4->nbufs = VAR_6;

  if (VAR_4->off < 0) {
    if (VAR_4->nbufs == 1)
      VAR_7 = FUNC_4(VAR_4->file, VAR_4->bufs[0].base, VAR_4->bufs[0].len);
    else
      VAR_7 = FUNC_5(VAR_4->file, (struct iovec*) VAR_4->bufs, VAR_4->nbufs);
  } else {
    if (VAR_4->nbufs == 1) {
      VAR_7 = FUNC_2(VAR_4->file, VAR_4->bufs[0].base, VAR_4->bufs[0].len, VAR_4->off);
      goto done;
    }





    if (VAR_5) retry:

    {
      VAR_7 = FUNC_7(VAR_4->file, VAR_4->bufs, VAR_4->nbufs, VAR_4->off);
    }

    else {
      VAR_7 = FUNC_9(VAR_4->file,
                          (struct iovec*)VAR_4->bufs,
                          VAR_4->nbufs,
                          VAR_4->off);
      if (VAR_7 == -1 && VAR_3 == VAR_1) {
        VAR_5 = 1;
        goto retry;
      }
    }


  }

done:

  if (VAR_4->bufs != VAR_4->bufsml)
    FUNC_6(VAR_4->bufs);

  VAR_4->bufs = ((void*)0);
  VAR_4->nbufs = 0;
  return VAR_7;
}
