
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_16__ TYPE_5__ ;
typedef struct TYPE_15__ TYPE_4__ ;
typedef struct TYPE_14__ TYPE_3__ ;
typedef struct TYPE_13__ TYPE_2__ ;
typedef struct TYPE_12__ TYPE_1__ ;


struct TYPE_12__ {TYPE_3__* ptr; int flags; } ;
typedef TYPE_1__ uv_fs_t ;
struct TYPE_13__ {int * name; int type; } ;
typedef TYPE_2__ uv_dirent_t ;
struct TYPE_16__ {int* cFileName; int dwFileAttributes; } ;
struct TYPE_14__ {int nentries; void* need_find_call; int dir_handle; TYPE_5__ find_data; TYPE_2__* dirents; } ;
typedef TYPE_3__ uv_dir_t ;
struct TYPE_15__ {int d_type; } ;
typedef TYPE_4__ uv__dirent_t ;
typedef int WCHAR ;
typedef TYPE_5__* PWIN32_FIND_DATAW ;


 scalar_t__ VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int VAR_3 ;
 scalar_t__ FUNC_0 (int ,TYPE_5__*) ;
 scalar_t__ FUNC_1 () ;
 int FUNC_2 (TYPE_1__*,unsigned int) ;
 int FUNC_3 (TYPE_1__*,scalar_t__) ;
 void* VAR_4 ;
 int VAR_5 ;
 int VAR_6 ;
 int VAR_7 ;
 int VAR_8 ;
 int VAR_9 ;
 int FUNC_4 (TYPE_2__*,int ,int) ;
 int FUNC_5 (int const*,int,char**) ;
 int FUNC_6 (char*) ;
 int FUNC_7 (TYPE_4__*) ;

void FUNC_8(uv_fs_t* VAR_10) {
  uv_dir_t* VAR_11;
  uv_dirent_t* VAR_12;
  uv__dirent_t VAR_13;
  unsigned int VAR_14;
  PWIN32_FIND_DATAW VAR_15;
  unsigned int VAR_16;
  int VAR_17;

  VAR_10->flags |= VAR_5;
  VAR_11 = VAR_10->ptr;
  VAR_12 = VAR_11->dirents;
  FUNC_4(VAR_12, 0, VAR_11->nentries * sizeof(*VAR_11->dirents));
  VAR_15 = &VAR_11->find_data;
  VAR_14 = 0;

  while (VAR_14 < VAR_11->nentries) {
    if (VAR_11->need_find_call && FUNC_0(VAR_11->dir_handle, VAR_15) == 0) {
      if (FUNC_1() == VAR_0)
        break;
      goto error;
    }


    if (VAR_15->cFileName[0] == L'.' &&
        (VAR_15->cFileName[1] == L'\0' ||
        (VAR_15->cFileName[1] == L'.' &&
        VAR_15->cFileName[2] == L'\0'))) {
      VAR_11->need_find_call = VAR_4;
      continue;
    }

    VAR_17 = FUNC_5((const WCHAR*) &VAR_15->cFileName,
                                  -1,
                                  (char**) &VAR_12[VAR_14].name);
    if (VAR_17 != 0)
      goto error;


    if ((VAR_15->dwFileAttributes & VAR_2) != 0)
      VAR_13.d_type = VAR_7;
    else if ((VAR_15->dwFileAttributes & VAR_3) != 0)
      VAR_13.d_type = VAR_9;
    else if ((VAR_15->dwFileAttributes & VAR_1) != 0)
      VAR_13.d_type = VAR_6;
    else
      VAR_13.d_type = VAR_8;

    VAR_12[VAR_14].type = FUNC_7(&VAR_13);
    VAR_11->need_find_call = VAR_4;
    ++VAR_14;
  }

  FUNC_2(VAR_10, VAR_14);
  return;

error:
  FUNC_3(VAR_10, FUNC_1());
  for (VAR_16 = 0; VAR_16 < VAR_14; ++VAR_16) {
    FUNC_6((char*) VAR_12[VAR_16].name);
    VAR_12[VAR_16].name = ((void*)0);
  }
}
