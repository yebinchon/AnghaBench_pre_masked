
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_5__ TYPE_2__ ;
typedef struct TYPE_4__ TYPE_1__ ;


struct TYPE_4__ {int st_mode; } ;
struct TYPE_5__ {TYPE_1__ st; } ;
typedef TYPE_2__ file_t ;


 scalar_t__ FUNC_0 (int ) ;
 scalar_t__ FUNC_1 (int ) ;
 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;

__attribute__((used)) static void FUNC_2 (file_t *VAR_3) {
  if (FUNC_1 (VAR_3->st.st_mode)) {
    VAR_2++;
  } else if (FUNC_0 (VAR_3->st.st_mode)) {
    VAR_0++;
  } else {
    VAR_1++;
  }
}
