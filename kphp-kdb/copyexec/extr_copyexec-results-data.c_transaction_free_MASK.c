
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_5__ TYPE_1__ ;


struct TYPE_5__ {int root; int transaction_id; int volume_id; } ;
typedef TYPE_1__ transaction_t ;


 int FUNC_0 (int ) ;
 int FUNC_1 (int ,int ,int) ;
 int FUNC_2 (TYPE_1__*) ;
 int VAR_0 ;
 int FUNC_3 (TYPE_1__*,int) ;

__attribute__((used)) static void FUNC_4 (transaction_t *VAR_1) {
  FUNC_2 (VAR_1);
  FUNC_1 (VAR_1->volume_id, VAR_1->transaction_id, -1);
  FUNC_0 (VAR_1->root);
  FUNC_3 (VAR_1, sizeof (*VAR_1));
  VAR_0--;
}
