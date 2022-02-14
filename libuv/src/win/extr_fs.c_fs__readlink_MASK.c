
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_7__ TYPE_2__ ;
typedef struct TYPE_6__ TYPE_1__ ;


struct TYPE_6__ {int pathw; } ;
struct TYPE_7__ {int flags; int ptr; TYPE_1__ file; } ;
typedef TYPE_2__ uv_fs_t ;
typedef scalar_t__ HANDLE ;


 int FUNC_0 (scalar_t__) ;
 scalar_t__ FUNC_1 (int ,int ,int ,int *,int ,int,int *) ;
 int VAR_0 ;
 int VAR_1 ;
 int FUNC_2 () ;
 scalar_t__ VAR_2 ;
 int VAR_3 ;
 int FUNC_3 (TYPE_2__*,int ) ;
 int FUNC_4 (TYPE_2__*,int ) ;
 int VAR_4 ;
 scalar_t__ FUNC_5 (scalar_t__,char**,int *) ;

__attribute__((used)) static void FUNC_6(uv_fs_t* VAR_5) {
  HANDLE VAR_6;

  VAR_6 = FUNC_1(VAR_5->file.pathw,
                       0,
                       0,
                       ((void*)0),
                       VAR_3,
                       VAR_1 | VAR_0,
                       ((void*)0));

  if (VAR_6 == VAR_2) {
    FUNC_4(VAR_5, FUNC_2());
    return;
  }

  if (FUNC_5(VAR_6, (char**) &VAR_5->ptr, ((void*)0)) != 0) {
    FUNC_4(VAR_5, FUNC_2());
    FUNC_0(VAR_6);
    return;
  }

  VAR_5->flags |= VAR_4;
  FUNC_3(VAR_5, 0);

  FUNC_0(VAR_6);
}
