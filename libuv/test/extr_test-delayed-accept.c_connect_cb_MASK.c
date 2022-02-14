
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_4__ TYPE_1__ ;


typedef int uv_stream_t ;
struct TYPE_4__ {scalar_t__ handle; } ;
typedef TYPE_1__ uv_connect_t ;


 int FUNC_0 (int) ;
 int VAR_0 ;
 int VAR_1 ;
 int FUNC_1 (TYPE_1__*) ;
 int VAR_2 ;
 int FUNC_2 (int *,int ,int ) ;

__attribute__((used)) static void FUNC_3(uv_connect_t* VAR_3, int VAR_4) {
  int VAR_5;

  FUNC_0(VAR_3 != ((void*)0));
  FUNC_0(VAR_4 == 0);



  VAR_5 = FUNC_2((uv_stream_t*)(VAR_3->handle), VAR_0, VAR_2);
  FUNC_0(VAR_5 == 0);

  VAR_1++;

  FUNC_1(VAR_3);
}
