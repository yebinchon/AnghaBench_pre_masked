
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


typedef int sm_t ;
typedef int sm_status ;
typedef TYPE_1__* my_sm_t ;
struct TYPE_2__ {int port; } ;


 int VAR_0 ;
 int VAR_1 ;
 void* FUNC_0 (int,int) ;

sm_status FUNC_1(sm_t VAR_2, int VAR_3, void *VAR_4,
    int VAR_5, void **VAR_6) {
  int VAR_7 = ((my_sm_t)VAR_4)->port;
  *VAR_6 = FUNC_0(VAR_5, VAR_7);
  return (*VAR_6 ? VAR_1 : VAR_0);
}
