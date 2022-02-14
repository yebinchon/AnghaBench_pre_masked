
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_3__ TYPE_1__ ;


struct TYPE_3__ {int mask; int transaction_id; int binlog_pos; } ;
typedef TYPE_1__ transaction_t ;


 int FUNC_0 (unsigned char*,int,unsigned char*) ;
 int FUNC_1 (int) ;
 int FUNC_2 (unsigned char*,int,char*,int) ;
 int FUNC_3 (unsigned char*,int *,int) ;
 int FUNC_4 (char*) ;
 int FUNC_5 (int,char*,int ,int ,int ) ;

__attribute__((used)) static void FUNC_6 (transaction_t *VAR_0, char VAR_1[28]) {
  unsigned char VAR_2[16], VAR_3[20];
  FUNC_5 (4, "{0} = %lld, {1} = %d, {2} = %d\n", VAR_0->binlog_pos, VAR_0->transaction_id, VAR_0->mask);
  FUNC_3 (VAR_2, &VAR_0->binlog_pos, 8);
  FUNC_3 (VAR_2 + 8, &VAR_0->transaction_id, 4);
  FUNC_3 (VAR_2 + 12, &VAR_0->mask, 4);
  FUNC_0 (VAR_2, 16, VAR_3);
  int VAR_4 = FUNC_2 (VAR_3, 20, VAR_1, 40);
  FUNC_1 (!VAR_4);
  FUNC_1 (FUNC_4 (VAR_1) == 27);
}
