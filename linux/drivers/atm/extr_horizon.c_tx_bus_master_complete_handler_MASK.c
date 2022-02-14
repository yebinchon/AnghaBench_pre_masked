
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_5__ TYPE_1__ ;


struct TYPE_5__ {int flags; } ;
typedef TYPE_1__ hrz_dev ;


 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int FUNC_0 (int,char*) ;
 scalar_t__ FUNC_1 (int ,int *) ;
 int VAR_3 ;
 int FUNC_2 (TYPE_1__*,int) ;
 int FUNC_3 (TYPE_1__*,int ,int ) ;

__attribute__((used)) static void FUNC_4 (hrz_dev * VAR_4) {
  if (FUNC_1 (VAR_3, &VAR_4->flags)) {
    FUNC_2 (VAR_4, 1);
  } else {
    FUNC_0 (VAR_1|VAR_0, "unexpected TX bus master completion");

    FUNC_3 (VAR_4, VAR_2, 0);
  }
  return;
}
