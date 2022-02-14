
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_3__ TYPE_1__ ;


struct TYPE_3__ {scalar_t__ filled; } ;


 scalar_t__ VAR_0 ;
 scalar_t__ VAR_1 ;
 int * VAR_2 ;
 int VAR_3 ;
 scalar_t__ VAR_4 ;
 int FUNC_0 (int ) ;
 int FUNC_1 (int ,scalar_t__) ;
 int FUNC_2 (TYPE_1__*,int ) ;
 TYPE_1__ VAR_5 ;

__attribute__((used)) static void FUNC_3 (void) {
  int VAR_6;
  for (VAR_6 = 0; VAR_6 < VAR_3 && VAR_5.filled + VAR_4 <= VAR_0; VAR_6++) {
    FUNC_2 (&VAR_5, VAR_1 < 0 ? FUNC_0 (VAR_2[VAR_6]) : FUNC_1 (VAR_2[VAR_6], VAR_1));
  }
}
