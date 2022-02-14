
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_4__ TYPE_1__ ;


struct TYPE_4__ {int initialized; } ;
typedef TYPE_1__ sc_data_t ;


 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int VAR_3 ;
 int FUNC_0 (int) ;
 int FUNC_1 (TYPE_1__*,int ,int ,int ,int,int ,int) ;

void
FUNC_2(sc_data_t *VAR_4) {
 FUNC_0(!VAR_4->initialized);

 int VAR_5 = 12;

 FUNC_1(VAR_4, VAR_2, VAR_1, VAR_3,
     VAR_5, VAR_0, 2);

 VAR_4->initialized = 1;
}
