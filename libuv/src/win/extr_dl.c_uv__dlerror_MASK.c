
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_4__ TYPE_1__ ;


typedef int va_list ;
struct TYPE_4__ {char* errmsg; } ;
typedef TYPE_1__ uv_lib_t ;
typedef int LPSTR ;
typedef scalar_t__ DWORD_PTR ;
typedef scalar_t__ DWORD ;


 scalar_t__ VAR_0 ;
 scalar_t__ VAR_1 ;
 scalar_t__ VAR_2 ;
 int VAR_3 ;
 int VAR_4 ;
 int VAR_5 ;
 int VAR_6 ;
 int VAR_7 ;
 scalar_t__ FUNC_0 (int,char*,scalar_t__,int ,int ,int ,int *) ;
 scalar_t__ FUNC_1 () ;
 int VAR_8 ;
 int FUNC_2 (char*) ;
 int FUNC_3 (int ,int ) ;
 int VAR_9 ;
 scalar_t__ FUNC_4 (char*,char*) ;
 int FUNC_5 (TYPE_1__*,scalar_t__) ;

__attribute__((used)) static int FUNC_6(uv_lib_t* VAR_10, const char* VAR_11, DWORD VAR_12) {
  DWORD_PTR VAR_13;
  DWORD VAR_14;
  char* VAR_15;

  if (VAR_10->errmsg) {
    FUNC_2(VAR_10->errmsg);
    VAR_10->errmsg = ((void*)0);
  }

  if (VAR_12 == 0)
    return 0;

  VAR_14 = FUNC_0(VAR_3 |
                       VAR_6 |
                       VAR_7, ((void*)0), VAR_12,
                       FUNC_3(VAR_8, VAR_9),
                       (LPSTR) &VAR_10->errmsg, 0, ((void*)0));

  if (!VAR_14 && (FUNC_1() == VAR_1 ||
               FUNC_1() == VAR_2)) {
    VAR_14 = FUNC_0(VAR_3 |
                         VAR_6 |
                         VAR_7, ((void*)0), VAR_12,
                         0, (LPSTR) &VAR_10->errmsg, 0, ((void*)0));
  }

  if (VAR_14 && VAR_12 == VAR_0 && FUNC_4(VAR_10->errmsg, "%1")) {
    VAR_15 = VAR_10->errmsg;
    VAR_10->errmsg = ((void*)0);
    VAR_13 = (DWORD_PTR) VAR_11;
    VAR_14 = FUNC_0(VAR_3 |
                         VAR_4 |
                         VAR_5,
                         VAR_15,
                         0, 0, (LPSTR) &VAR_10->errmsg, 0, (va_list*) &VAR_13);
    FUNC_2(VAR_15);
  }

  if (!VAR_14)
    FUNC_5(VAR_10, VAR_12);

  return -1;
}
