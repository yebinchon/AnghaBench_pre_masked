
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_4__ TYPE_1__ ;


typedef int seq_hooks_t ;
struct TYPE_4__ {int in_use; } ;
typedef TYPE_1__ hooks_internal_t ;


 int VAR_0 ;
 int FUNC_0 (int) ;
 scalar_t__ FUNC_1 (int *,int ) ;
 int FUNC_2 (int *,scalar_t__,int ) ;
 int VAR_1 ;
 int FUNC_3 (int *,TYPE_1__*) ;
 int FUNC_4 (TYPE_1__*,int *) ;

__attribute__((used)) static void
FUNC_5(seq_hooks_t *VAR_2) {
 hooks_internal_t VAR_3;
 bool VAR_4 = FUNC_4(&VAR_3, VAR_2);

 FUNC_0(VAR_4);

 FUNC_0(VAR_3.in_use);
 VAR_3.in_use = 0;
 FUNC_3(VAR_2, &VAR_3);
 FUNC_2(&VAR_1, FUNC_1(&VAR_1, VAR_0) - 1,
     VAR_0);
}
