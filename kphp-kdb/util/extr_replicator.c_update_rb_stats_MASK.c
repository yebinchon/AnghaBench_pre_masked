
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct related_binlog {scalar_t__ status; } ;


 int FUNC_0 (struct related_binlog*) ;
 int FUNC_1 (struct related_binlog*,scalar_t__,int) ;

__attribute__((used)) static void FUNC_2 (struct related_binlog *VAR_0) {
  if (VAR_0->status) {
    int VAR_1 = FUNC_0 (VAR_0);
    FUNC_1 (VAR_0, VAR_0->status, VAR_1);
    FUNC_1 (VAR_0, VAR_0->status + 1, VAR_1);
  }
}
