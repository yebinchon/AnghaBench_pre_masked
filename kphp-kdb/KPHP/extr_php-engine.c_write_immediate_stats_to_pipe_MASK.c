
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int php_immediate_stats_t ;


 int VAR_0 ;
 int VAR_1 ;
 int FUNC_0 (int,int ) ;
 int FUNC_1 (char*,int ) ;
 int VAR_2 ;
 int VAR_3 ;
 int VAR_4 ;
 int FUNC_2 (int*,int *,int) ;
 int FUNC_3 (int*,int ,size_t) ;
 int VAR_5 ;
 int FUNC_4 (int ,int*,int) ;
 scalar_t__ FUNC_5 (int,int*,size_t) ;

void FUNC_6() {
  if (VAR_4 != -1) {

    int VAR_6[(sizeof (php_immediate_stats_t) + 1 + sizeof (int) * 5 + 3) & -4];
    int VAR_7 = (sizeof (php_immediate_stats_t) + 1 + sizeof (int) * 5 + 3) & -4;

    FUNC_3 (VAR_6, 0, (size_t)VAR_7);

    VAR_6[2] = VAR_1;
    FUNC_2 (VAR_6 + 3, &VAR_3, sizeof (php_immediate_stats_t));

    FUNC_4 (VAR_5++, VAR_6, VAR_7);
    int VAR_8 = (int)FUNC_5 (VAR_4, VAR_6, (size_t)VAR_7);
    FUNC_0 (VAR_8 == VAR_7, FUNC_1 ("error [%d] during write to pipe", VAR_2));
  }
}
