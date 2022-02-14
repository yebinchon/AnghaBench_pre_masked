
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_8__ TYPE_2__ ;
typedef struct TYPE_7__ TYPE_1__ ;


struct TYPE_7__ {scalar_t__ fs_type; scalar_t__ result; TYPE_2__* ptr; } ;
typedef TYPE_1__ uv_fs_t ;
struct TYPE_8__ {int nentries; int dirents; } ;
typedef TYPE_2__ uv_dir_t ;


 int FUNC_0 (int ) ;
 int FUNC_1 (int) ;
 scalar_t__ VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int VAR_3 ;
 TYPE_1__ VAR_4 ;
 int VAR_5 ;
 int FUNC_2 () ;
 int FUNC_3 (int ,int *,TYPE_2__*,int ) ;
 int FUNC_4 (TYPE_1__*) ;

__attribute__((used)) static void FUNC_5(uv_fs_t* VAR_6) {
  uv_dir_t* VAR_7;
  int VAR_8;

  FUNC_1(VAR_6 == &VAR_4);
  FUNC_1(VAR_6->fs_type == VAR_0);
  FUNC_1(VAR_6->result == 0);
  FUNC_1(VAR_6->ptr != ((void*)0));
  VAR_7 = VAR_6->ptr;
  VAR_7->dirents = VAR_1;
  VAR_7->nentries = FUNC_0(VAR_1);
  VAR_8 = FUNC_3(FUNC_2(),
                    &VAR_5,
                    VAR_7,
                    VAR_3);
  FUNC_1(VAR_8 == 0);
  FUNC_4(VAR_6);
  ++VAR_2;
}
