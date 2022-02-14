
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_6__ TYPE_2__ ;
typedef struct TYPE_5__ TYPE_1__ ;


struct TYPE_5__ {scalar_t__ data; } ;
typedef TYPE_1__ uv_handle_t ;
struct TYPE_6__ {int i; int (* make_connect ) (TYPE_2__*) ;} ;
typedef TYPE_2__ conn_rec ;


 int FUNC_0 (int ) ;
 int VAR_0 ;
 int VAR_1 ;
 int FUNC_1 (char*,int) ;
 int VAR_2 ;
 int FUNC_2 (TYPE_2__*) ;
 int FUNC_3 (int ) ;

__attribute__((used)) static void FUNC_4(uv_handle_t* VAR_3) {
  conn_rec* VAR_4 = (conn_rec*)VAR_3->data;

  FUNC_0(VAR_3 != ((void*)0));
  VAR_0++;





  if (FUNC_3(VAR_1) - VAR_2 < 10000) {
    VAR_4->make_connect(VAR_4);
  }
}
