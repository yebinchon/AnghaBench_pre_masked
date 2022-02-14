
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_10__ TYPE_4__ ;
typedef struct TYPE_9__ TYPE_3__ ;
typedef struct TYPE_8__ TYPE_2__ ;
typedef struct TYPE_7__ TYPE_1__ ;


struct TYPE_9__ {int mtime; int atime; } ;
struct TYPE_7__ {TYPE_3__ time; } ;
struct TYPE_8__ {int pathw; } ;
struct TYPE_10__ {scalar_t__ result; TYPE_1__ fs; TYPE_2__ file; } ;
typedef TYPE_4__ uv_fs_t ;
typedef scalar_t__ HANDLE ;


 int FUNC_0 (scalar_t__) ;
 scalar_t__ FUNC_1 (int ,int ,int,int *,int ,int ,int *) ;
 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int VAR_3 ;
 int VAR_4 ;
 int FUNC_2 () ;
 scalar_t__ VAR_5 ;
 int VAR_6 ;
 int FUNC_3 (TYPE_4__*,int ) ;
 scalar_t__ FUNC_4 (scalar_t__,int ,int ) ;

__attribute__((used)) static void FUNC_5(uv_fs_t* VAR_7) {
  HANDLE VAR_8;

  VAR_8 = FUNC_1(VAR_7->file.pathw,
                       VAR_4,
                       VAR_2 | VAR_3 | VAR_1,
                       ((void*)0),
                       VAR_6,
                       VAR_0,
                       ((void*)0));

  if (VAR_8 == VAR_5) {
    FUNC_3(VAR_7, FUNC_2());
    return;
  }

  if (FUNC_4(VAR_8, VAR_7->fs.time.atime, VAR_7->fs.time.mtime) != 0) {
    FUNC_3(VAR_7, FUNC_2());
    FUNC_0(VAR_8);
    return;
  }

  FUNC_0(VAR_8);

  VAR_7->result = 0;
}
