
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_14__ TYPE_5__ ;
typedef struct TYPE_13__ TYPE_4__ ;
typedef struct TYPE_12__ TYPE_3__ ;
typedef struct TYPE_11__ TYPE_2__ ;
typedef struct TYPE_10__ TYPE_1__ ;


struct TYPE_11__ {int overlapped; } ;
struct TYPE_12__ {TYPE_2__ io; } ;
struct TYPE_13__ {TYPE_3__ u; } ;
struct TYPE_14__ {char* path; char* filew; char* short_filew; scalar_t__ dir_handle; char* buffer; char* dirw; int req_pending; TYPE_4__ req; TYPE_1__* loop; int cb; } ;
typedef TYPE_5__ uv_fs_event_t ;
typedef int uv_fs_event_cb ;
typedef char WCHAR ;
typedef int ULONG_PTR ;
struct TYPE_10__ {int iocp; } ;
typedef int DWORD ;


 int FUNC_0 (char*) ;
 int VAR_0 ;
 int FUNC_1 (scalar_t__) ;
 scalar_t__ FUNC_2 (char*,int ,int,int *,int ,int,int *) ;
 int * FUNC_3 (scalar_t__,int ,int ,int ) ;
 int VAR_1 ;
 int VAR_2 ;
 int VAR_3 ;
 int VAR_4 ;
 int VAR_5 ;
 int VAR_6 ;
 int VAR_7 ;
 int VAR_8 ;
 int VAR_9 ;
 int VAR_10 ;
 int VAR_11 ;
 int VAR_12 ;
 int VAR_13 ;
 int VAR_14 ;
 int VAR_15 ;
 int VAR_16 ;
 int VAR_17 ;
 int FUNC_4 (char*) ;
 int FUNC_5 () ;
 int FUNC_6 (char*,char*,int) ;
 scalar_t__ FUNC_7 (char*,char*,int ) ;
 int VAR_18 ;
 scalar_t__ VAR_19 ;
 int VAR_20 ;
 int FUNC_8 (int ,int ,char const*,int,char*,int) ;
 int VAR_21 ;
 int FUNC_9 (scalar_t__,char*,int,int ,int,int *,int *,int *) ;
 int VAR_22 ;
 int VAR_23 ;
 unsigned int VAR_24 ;
 int FUNC_10 (int ) ;
 int FUNC_11 (int *,int ,int) ;
 int FUNC_12 (char*) ;
 int FUNC_13 (TYPE_5__*) ;
 int FUNC_14 (TYPE_5__*) ;
 scalar_t__ FUNC_15 (TYPE_5__*) ;
 scalar_t__ FUNC_16 (int) ;
 char* FUNC_17 (char const*) ;
 int VAR_25 ;
 int FUNC_18 (int ,char*) ;
 scalar_t__ FUNC_19 (char*,char**,char**) ;
 int FUNC_20 (int) ;

int FUNC_21(uv_fs_event_t* VAR_26,
                      uv_fs_event_cb VAR_27,
                      const char* VAR_28,
                      unsigned int VAR_29) {
  int VAR_30, VAR_31, VAR_32;
  DWORD VAR_33, VAR_34;
  WCHAR* VAR_35 = ((void*)0), *VAR_36, *VAR_37 = ((void*)0);
  WCHAR VAR_38[VAR_20];
  WCHAR* VAR_39, *VAR_40;

  if (FUNC_15(VAR_26))
    return VAR_23;

  VAR_26->cb = VAR_27;
  VAR_26->path = FUNC_17(VAR_28);
  if (!VAR_26->path) {
    FUNC_18(VAR_1, "uv__malloc");
  }

  FUNC_13(VAR_26);



  VAR_30 = FUNC_8(VAR_0, 0, VAR_28, -1, ((void*)0), 0) *
              sizeof(WCHAR);
  VAR_37 = (WCHAR*)FUNC_16(VAR_30);
  if (!VAR_37) {
    FUNC_18(VAR_1, "uv__malloc");
  }

  if (!FUNC_8(VAR_0,
                           0,
                           VAR_28,
                           -1,
                           VAR_37,
                           VAR_30 / sizeof(WCHAR))) {
    return FUNC_20(FUNC_5());
  }


  VAR_33 = FUNC_4(VAR_37);
  if (VAR_33 == VAR_18) {
    VAR_34 = FUNC_5();
    goto error;
  }

  VAR_31 = (VAR_33 & VAR_3) ? 1 : 0;

  if (VAR_31) {



    VAR_32 = FUNC_6(VAR_37, ((void*)0), 0);

    if (VAR_32) {
      VAR_40 = (WCHAR*)FUNC_16(VAR_32 * sizeof(WCHAR));
      if (!VAR_40) {
        FUNC_18(VAR_1, "uv__malloc");
      }

      VAR_32 = FUNC_6(VAR_37, VAR_40, VAR_32);
      if (VAR_32) {
        VAR_40[VAR_32] = '\0';
      } else {
        FUNC_12(VAR_40);
        VAR_40 = ((void*)0);
      }

      if (VAR_40) {
        FUNC_12(VAR_37);
        VAR_37 = VAR_40;
      }
    }

    VAR_36 = VAR_37;
  } else {






    if (FUNC_7(VAR_37,
                          VAR_38,
                          FUNC_0(VAR_38))) {
      VAR_39 = VAR_38;
    } else {
      VAR_39 = ((void*)0);
    }

    if (FUNC_19(VAR_37, &VAR_35, &VAR_26->filew) != 0) {
      VAR_34 = FUNC_5();
      goto error;
    }

    if (FUNC_19(VAR_39, ((void*)0), &VAR_26->short_filew) != 0) {
      VAR_34 = FUNC_5();
      goto error;
    }

    VAR_36 = VAR_35;
    FUNC_12(VAR_37);
    VAR_37 = ((void*)0);
  }

  VAR_26->dir_handle = FUNC_2(VAR_36,
                                   VAR_6,
                                   VAR_16 | VAR_15 |
                                     VAR_17,
                                   ((void*)0),
                                   VAR_21,
                                   VAR_4 |
                                     VAR_5,
                                   ((void*)0));

  if (VAR_35) {
    FUNC_12(VAR_35);
    VAR_35 = ((void*)0);
  }

  if (VAR_26->dir_handle == VAR_19) {
    VAR_34 = FUNC_5();
    goto error;
  }

  if (FUNC_3(VAR_26->dir_handle,
                             VAR_26->loop->iocp,
                             (ULONG_PTR)VAR_26,
                             0) == ((void*)0)) {
    VAR_34 = FUNC_5();
    goto error;
  }

  if (!VAR_26->buffer) {
    VAR_26->buffer = (char*)FUNC_16(VAR_25);
  }
  if (!VAR_26->buffer) {
    FUNC_18(VAR_1, "uv__malloc");
  }

  FUNC_11(&(VAR_26->req.u.io.overlapped), 0,
         sizeof(VAR_26->req.u.io.overlapped));

  if (!FUNC_9(VAR_26->dir_handle,
                             VAR_26->buffer,
                             VAR_25,
                             (VAR_29 & VAR_24) ? VAR_22 : VAR_2,
                             VAR_10 |
                               VAR_9 |
                               VAR_7 |
                               VAR_14 |
                               VAR_12 |
                               VAR_11 |
                               VAR_8 |
                               VAR_13,
                             ((void*)0),
                             &VAR_26->req.u.io.overlapped,
                             ((void*)0))) {
    VAR_34 = FUNC_5();
    goto error;
  }

  FUNC_10(VAR_31 ? VAR_37 != ((void*)0) : VAR_37 == ((void*)0));
  VAR_26->dirw = VAR_37;
  VAR_26->req_pending = 1;
  return 0;

error:
  if (VAR_26->path) {
    FUNC_12(VAR_26->path);
    VAR_26->path = ((void*)0);
  }

  if (VAR_26->filew) {
    FUNC_12(VAR_26->filew);
    VAR_26->filew = ((void*)0);
  }

  if (VAR_26->short_filew) {
    FUNC_12(VAR_26->short_filew);
    VAR_26->short_filew = ((void*)0);
  }

  FUNC_12(VAR_37);

  if (VAR_26->dir_handle != VAR_19) {
    FUNC_1(VAR_26->dir_handle);
    VAR_26->dir_handle = VAR_19;
  }

  if (VAR_26->buffer) {
    FUNC_12(VAR_26->buffer);
    VAR_26->buffer = ((void*)0);
  }

  if (FUNC_15(VAR_26))
    FUNC_14(VAR_26);

  return FUNC_20(VAR_34);
}
