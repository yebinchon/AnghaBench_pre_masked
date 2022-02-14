
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_4__ TYPE_1__ ;


struct TYPE_4__ {int * data; } ;
typedef TYPE_1__ uv_timer_t ;
typedef int uv_stream_t ;


 int FUNC_0 (int) ;
 int VAR_0 ;
 int VAR_1 ;
 scalar_t__ FUNC_1 (int) ;
 int FUNC_2 () ;
 int FUNC_3 (int ,TYPE_1__*) ;
 int FUNC_4 (TYPE_1__*,int ,int,int ) ;

__attribute__((used)) static void FUNC_5(uv_stream_t* VAR_2, int VAR_3) {
  int VAR_4;
  uv_timer_t* VAR_5;

  FUNC_0(VAR_3 == 0);

  VAR_5 = (uv_timer_t*)FUNC_1(sizeof *VAR_5);
  FUNC_0(VAR_5 != ((void*)0));


  VAR_4 = FUNC_3(FUNC_2(), VAR_5);
  FUNC_0(VAR_4 == 0);

  VAR_5->data = VAR_2;

  VAR_4 = FUNC_4(VAR_5, VAR_1, 1000, 0);
  FUNC_0(VAR_4 == 0);

  VAR_0++;
}
