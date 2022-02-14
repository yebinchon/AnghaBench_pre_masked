
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_8__ TYPE_2__ ;
typedef struct TYPE_7__ TYPE_1__ ;


struct TYPE_7__ {TYPE_2__* data; } ;
typedef TYPE_1__ uv_timer_t ;
struct TYPE_8__ {int loop; } ;
typedef TYPE_2__ uv_fs_event_t ;


 int FUNC_0 (int) ;
 int VAR_0 ;
 TYPE_2__ VAR_1 ;
 scalar_t__ VAR_2 ;
 scalar_t__ FUNC_1 (char const*,char*) ;
 int VAR_3 ;
 int FUNC_2 (int ,TYPE_1__*) ;
 int FUNC_3 (TYPE_1__*,int ,int,int ) ;

__attribute__((used)) static void FUNC_4(uv_fs_event_t* VAR_4,
  const char* VAR_5, int VAR_6, int VAR_7) {
  FUNC_0(VAR_2 == 0);
  ++VAR_2;

  FUNC_0(VAR_4 == &VAR_1);
  FUNC_0(VAR_7 == 0);
  FUNC_0(VAR_6 == VAR_0);

  FUNC_0(FUNC_1(VAR_5, "watch_file") == 0);





  {
    static uv_timer_t VAR_8;
    FUNC_2(VAR_4->loop, &VAR_8);
    VAR_8.data = VAR_4;
    FUNC_3(&VAR_8, VAR_3, 250, 0);
  }
}
