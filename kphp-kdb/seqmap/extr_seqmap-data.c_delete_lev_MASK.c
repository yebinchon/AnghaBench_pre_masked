
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct lev_seq_delete {int type; int data; } ;


 int VAR_0 ;
 int FUNC_0 (int,struct lev_seq_delete*,int,int ) ;

int FUNC_1 (struct lev_seq_delete *VAR_1) {
  int VAR_2 = (VAR_1->type - VAR_0) & 0xff;
  return FUNC_0 (sizeof (*VAR_1) + VAR_2 * 4, VAR_1, VAR_2, VAR_1->data);
}
