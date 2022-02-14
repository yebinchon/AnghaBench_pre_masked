
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_5__ TYPE_2__ ;
typedef struct TYPE_4__ TYPE_1__ ;


struct TYPE_5__ {scalar_t__ off; int nbufs; TYPE_1__* bufs; int file; } ;
typedef TYPE_2__ uv_fs_t ;
struct iovec {int dummy; } ;
typedef int ssize_t ;
typedef int pthread_mutex_t ;
struct TYPE_4__ {int len; int base; } ;


 scalar_t__ VAR_0 ;
 int VAR_1 ;
 int FUNC_0 () ;
 scalar_t__ VAR_2 ;
 scalar_t__ FUNC_1 (int *) ;
 scalar_t__ FUNC_2 (int *) ;
 int FUNC_3 (int ,int ,int ,scalar_t__) ;
 int FUNC_4 (int ,struct iovec*,int,scalar_t__) ;
 int FUNC_5 (int ,struct iovec*,int,scalar_t__) ;
 int FUNC_6 (int ,int ,int ) ;
 int FUNC_7 (int ,struct iovec*,int) ;

__attribute__((used)) static ssize_t FUNC_8(uv_fs_t* VAR_3) {

  static int VAR_4;

  ssize_t VAR_5;
  if (VAR_3->off < 0) {
    if (VAR_3->nbufs == 1)
      VAR_5 = FUNC_6(VAR_3->file, VAR_3->bufs[0].base, VAR_3->bufs[0].len);
    else
      VAR_5 = FUNC_7(VAR_3->file, (struct iovec*) VAR_3->bufs, VAR_3->nbufs);
  } else {
    if (VAR_3->nbufs == 1) {
      VAR_5 = FUNC_3(VAR_3->file, VAR_3->bufs[0].base, VAR_3->bufs[0].len, VAR_3->off);
      goto done;
    }




    if (VAR_4) retry:

    {
      VAR_5 = FUNC_3(VAR_3->file, VAR_3->bufs[0].base, VAR_3->bufs[0].len, VAR_3->off);
    }

    else {
      VAR_5 = FUNC_5(VAR_3->file,
                      (struct iovec*) VAR_3->bufs,
                      VAR_3->nbufs,
                      VAR_3->off);
      if (VAR_5 == -1 && VAR_2 == VAR_0) {
        VAR_4 = 1;
        goto retry;
      }
    }


  }

done:





  return VAR_5;
}
