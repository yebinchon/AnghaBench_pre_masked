
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_4__ TYPE_1__ ;


struct TYPE_4__ {unsigned int nbufs; scalar_t__ off; int * bufs; int * bufsml; } ;
typedef TYPE_1__ uv_fs_t ;
typedef int uv_buf_t ;
typedef scalar_t__ ssize_t ;


 scalar_t__ VAR_0 ;
 scalar_t__ VAR_1 ;
 int FUNC_0 (int *) ;
 unsigned int FUNC_1 (int *,scalar_t__) ;
 scalar_t__ FUNC_2 (TYPE_1__*) ;
 unsigned int FUNC_3 () ;

__attribute__((used)) static ssize_t FUNC_4(uv_fs_t* VAR_2) {
  unsigned int VAR_3;
  unsigned int VAR_4;
  uv_buf_t* VAR_5;
  ssize_t VAR_6;
  ssize_t VAR_7;

  VAR_3 = FUNC_3();
  VAR_4 = VAR_2->nbufs;
  VAR_5 = VAR_2->bufs;
  VAR_6 = 0;

  while (VAR_4 > 0) {
    VAR_2->nbufs = VAR_4;
    if (VAR_2->nbufs > VAR_3)
      VAR_2->nbufs = VAR_3;

    do
      VAR_7 = FUNC_2(VAR_2);
    while (VAR_7 < 0 && VAR_1 == VAR_0);

    if (VAR_7 <= 0) {
      if (VAR_6 == 0)
        VAR_6 = VAR_7;
      break;
    }

    if (VAR_2->off >= 0)
      VAR_2->off += VAR_7;

    VAR_2->nbufs = FUNC_1(VAR_2->bufs, VAR_7);
    VAR_2->bufs += VAR_2->nbufs;
    VAR_4 -= VAR_2->nbufs;
    VAR_6 += VAR_7;
  }

  if (VAR_5 != VAR_2->bufsml)
    FUNC_0(VAR_5);

  VAR_2->bufs = ((void*)0);
  VAR_2->nbufs = 0;

  return VAR_6;
}
