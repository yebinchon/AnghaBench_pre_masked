
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_22__ TYPE_6__ ;
typedef struct TYPE_21__ TYPE_5__ ;
typedef struct TYPE_20__ TYPE_4__ ;
typedef struct TYPE_19__ TYPE_3__ ;
typedef struct TYPE_18__ TYPE_2__ ;
typedef struct TYPE_17__ TYPE_1__ ;


struct TYPE_17__ {scalar_t__ InternalHigh; } ;
struct TYPE_18__ {TYPE_1__ overlapped; } ;
struct TYPE_19__ {TYPE_2__ io; } ;
struct TYPE_20__ {scalar_t__ type; TYPE_3__ u; } ;
typedef TYPE_4__ uv_req_t ;
typedef int uv_loop_t ;
typedef int uv_handle_t ;
struct TYPE_21__ {int req_pending; int flags; int buffer; char* filew; char* short_filew; int (* cb ) (TYPE_5__*,char*,int ,int ) ;scalar_t__ dirw; } ;
typedef TYPE_5__ uv_fs_event_t ;
typedef char WCHAR ;
struct TYPE_22__ {char* FileName; int FileNameLength; int Action; int NextEntryOffset; } ;
typedef TYPE_6__ FILE_NOTIFY_INFORMATION ;
typedef int DWORD ;


 int VAR_0 ;





 int FUNC_0 (TYPE_4__*) ;
 int FUNC_1 (char*,char*,int) ;
 scalar_t__ FUNC_2 (TYPE_4__*) ;
 int VAR_1 ;
 scalar_t__ VAR_2 ;
 int VAR_3 ;
 int VAR_4 ;
 int FUNC_3 (char*,int,char*,scalar_t__,int,char*) ;
 int FUNC_4 (int) ;
 scalar_t__ FUNC_5 (char*,char*,int) ;
 int FUNC_6 (TYPE_5__*,char*,int ,int ) ;
 int FUNC_7 (TYPE_5__*,char*,int ,int ) ;
 int FUNC_8 (TYPE_5__*,char*,int ,int ) ;
 int FUNC_9 (TYPE_5__*,char*,int ,int ) ;
 int FUNC_10 (char*,int,char**) ;
 int FUNC_11 (char*) ;
 int FUNC_12 (TYPE_5__*) ;
 scalar_t__ FUNC_13 (int) ;
 int FUNC_14 (int ,char*) ;
 int FUNC_15 (int *,TYPE_5__*) ;
 int FUNC_16 (char*,scalar_t__,char**) ;
 int FUNC_17 (int) ;
 int FUNC_18 (int *,int *) ;
 int FUNC_19 (scalar_t__) ;

void FUNC_20(uv_loop_t* VAR_5, uv_req_t* VAR_6,
    uv_fs_event_t* VAR_7) {
  FILE_NOTIFY_INFORMATION* VAR_8;
  int VAR_9, VAR_10, VAR_11;
  char* VAR_12 = ((void*)0);
  WCHAR* VAR_13 = ((void*)0);
  WCHAR* VAR_14 = ((void*)0);
  DWORD VAR_15 = 0;

  FUNC_4(VAR_6->type == VAR_2);
  FUNC_4(VAR_7->req_pending);
  VAR_7->req_pending = 0;





  if (!FUNC_12(VAR_7)) {
    if (VAR_7->flags & VAR_3) {
      FUNC_18(VAR_5, (uv_handle_t*) VAR_7);
    }
    return;
  }

  VAR_8 = (FILE_NOTIFY_INFORMATION*)(VAR_7->buffer + VAR_15);

  if (FUNC_2(VAR_6)) {
    if (VAR_6->u.io.overlapped.InternalHigh > 0) {
      do {
        VAR_8 = (FILE_NOTIFY_INFORMATION*)((char*)VAR_8 + VAR_15);
        FUNC_4(!VAR_12);
        FUNC_4(!VAR_13);
        FUNC_4(!VAR_14);





        if (VAR_7->dirw ||
            FUNC_5(VAR_7->filew,
                          VAR_8->FileName,
                          VAR_8->FileNameLength) == 0 ||
            FUNC_5(VAR_7->short_filew,
                          VAR_8->FileName,
                          VAR_8->FileNameLength) == 0) {

          if (VAR_7->dirw) {






            if (VAR_8->Action != 130 &&
              VAR_8->Action != 128) {

              VAR_11 = FUNC_19(VAR_7->dirw) +
                VAR_8->FileNameLength / sizeof(WCHAR) + 2;

              VAR_13 = (WCHAR*)FUNC_13(VAR_11 * sizeof(WCHAR));
              if (!VAR_13) {
                FUNC_14(VAR_0, "uv__malloc");
              }

              FUNC_3(VAR_13, VAR_11, L"%s\\%.*s", VAR_7->dirw,
                VAR_8->FileNameLength / (DWORD)sizeof(WCHAR),
                VAR_8->FileName);

              VAR_13[VAR_11 - 1] = L'\0';


              VAR_11 = FUNC_1(VAR_13, ((void*)0), 0);

              if (VAR_11) {
                VAR_14 = (WCHAR*)FUNC_13(VAR_11 * sizeof(WCHAR));
                if (!VAR_14) {
                  FUNC_14(VAR_0, "uv__malloc");
                }

                VAR_11 = FUNC_1(VAR_13, VAR_14, VAR_11);
                if (VAR_11) {
                  VAR_14[VAR_11] = '\0';
                } else {
                  FUNC_11(VAR_14);
                  VAR_14 = ((void*)0);
                }
              }

              FUNC_11(VAR_13);

              if (VAR_14) {

                FUNC_16(VAR_14,
                                 VAR_7->dirw,
                                 &VAR_13);
                FUNC_11(VAR_14);
                VAR_14 = VAR_13;
                VAR_10 = -1;
              } else {

                VAR_13 = VAR_8->FileName;
                VAR_10 = VAR_8->FileNameLength / sizeof(WCHAR);
              }
            } else {





              VAR_13 = VAR_8->FileName;
              VAR_10 = VAR_8->FileNameLength / sizeof(WCHAR);
            }
          } else {

            VAR_13 = VAR_7->filew;
            VAR_10 = -1;
          }


          FUNC_10(VAR_13, VAR_10, &VAR_12);

          switch (VAR_8->Action) {
            case 132:
            case 130:
            case 128:
            case 129:
              VAR_7->cb(VAR_7, VAR_12, VAR_4, 0);
              break;

            case 131:
              VAR_7->cb(VAR_7, VAR_12, VAR_1, 0);
              break;
          }

          FUNC_11(VAR_12);
          VAR_12 = ((void*)0);
          FUNC_11(VAR_14);
          VAR_14 = ((void*)0);
          VAR_13 = ((void*)0);
        }

        VAR_15 = VAR_8->NextEntryOffset;
      } while (VAR_15 && !(VAR_7->flags & VAR_3));
    } else {
      VAR_7->cb(VAR_7, ((void*)0), VAR_1, 0);
    }
  } else {
    VAR_9 = FUNC_0(VAR_6);
    VAR_7->cb(VAR_7, ((void*)0), 0, FUNC_17(VAR_9));
  }

  if (!(VAR_7->flags & VAR_3)) {
    FUNC_15(VAR_5, VAR_7);
  } else {
    FUNC_18(VAR_5, (uv_handle_t*)VAR_7);
  }
}
