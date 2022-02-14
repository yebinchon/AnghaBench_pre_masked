
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_5__ TYPE_1__ ;


struct TYPE_5__ {int flags; int handle; int * read_cb; int * alloc_cb; } ;
typedef TYPE_1__ uv_tty_t ;
typedef int uv_tty_mode_t ;
typedef int * uv_read_cb ;
typedef int * uv_alloc_cb ;
typedef int DWORD ;


 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int VAR_3 ;
 int FUNC_0 () ;
 int FUNC_1 (int ,int) ;
 int VAR_4 ;
 int VAR_5 ;
 int VAR_6 ;
 int VAR_7 ;
 int VAR_8 ;



 int FUNC_2 (int *) ;
 int FUNC_3 (int *) ;
 int FUNC_4 (int) ;
 int VAR_9 ;
 int FUNC_5 (TYPE_1__*,int *,int *) ;
 int FUNC_6 (TYPE_1__*) ;

int FUNC_7(uv_tty_t* VAR_10, uv_tty_mode_t VAR_11) {
  DWORD VAR_12;
  unsigned char VAR_13;
  uv_alloc_cb VAR_14;
  uv_read_cb VAR_15;
  int VAR_16;

  if (!(VAR_10->flags & VAR_8)) {
    return VAR_4;
  }

  if (!!VAR_11 == !!(VAR_10->flags & VAR_7)) {
    return 0;
  }

  switch (VAR_11) {
    case 129:
      VAR_12 = VAR_0 | VAR_1 | VAR_2;
      break;
    case 128:
      VAR_12 = VAR_3;
      break;
    case 130:
      return VAR_5;
    default:
      return VAR_4;
  }


  if (VAR_10->flags & VAR_6) {
    VAR_13 = 1;
    VAR_14 = VAR_10->alloc_cb;
    VAR_15 = VAR_10->read_cb;
    VAR_16 = FUNC_6(VAR_10);
    if (VAR_16) {
      return FUNC_4(VAR_16);
    }
  } else {
    VAR_13 = 0;
    VAR_14 = ((void*)0);
    VAR_15 = ((void*)0);
  }

  FUNC_3(&VAR_9);
  if (!FUNC_1(VAR_10->handle, VAR_12)) {
    VAR_16 = FUNC_4(FUNC_0());
    FUNC_2(&VAR_9);
    return VAR_16;
  }
  FUNC_2(&VAR_9);


  VAR_10->flags &= ~VAR_7;
  VAR_10->flags |= VAR_11 ? VAR_7 : 0;


  if (VAR_13) {
    VAR_16 = FUNC_5(VAR_10, VAR_14, VAR_15);
    if (VAR_16) {
      return FUNC_4(VAR_16);
    }
  }

  return 0;
}
