
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct related_binlog {int flags; } ;


 struct related_binlog* VAR_0 ;
 int VAR_1 ;
 size_t FUNC_0 (struct related_binlog*) ;
 int VAR_2 ;
 int FUNC_1 (int*,int ,int) ;
 int FUNC_2 (struct related_binlog*) ;

void FUNC_3 (int VAR_3[4]) {
  int VAR_4;
  FUNC_1 (VAR_3, 0, 16);
  for (VAR_4 = 0; VAR_4 < VAR_2; VAR_4++) {
    struct related_binlog *VAR_5 = &VAR_0[VAR_4];
    if (!(VAR_5->flags & VAR_1)) {
      VAR_3[FUNC_0 (VAR_5)]++;
    }
    FUNC_2 (VAR_5);
  }
}
