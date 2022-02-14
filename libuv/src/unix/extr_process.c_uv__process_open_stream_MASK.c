
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_5__ TYPE_2__ ;
typedef struct TYPE_4__ TYPE_1__ ;


struct TYPE_4__ {int stream; } ;
struct TYPE_5__ {int flags; TYPE_1__ data; } ;
typedef TYPE_2__ uv_stdio_container_t ;


 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int VAR_3 ;
 int VAR_4 ;
 int FUNC_0 () ;
 int FUNC_1 (int) ;
 int FUNC_2 (int,int) ;
 int FUNC_3 (int ,int,int) ;

__attribute__((used)) static int FUNC_4(uv_stdio_container_t* VAR_5,
                                   int VAR_6[2]) {
  int VAR_7;
  int VAR_8;

  if (!(VAR_5->flags & VAR_0) || VAR_6[0] < 0)
    return 0;

  VAR_8 = FUNC_1(VAR_6[1]);
  if (VAR_8 != 0)
    FUNC_0();

  VAR_6[1] = -1;
  FUNC_2(VAR_6[0], 1);

  VAR_7 = 0;
  if (VAR_5->flags & VAR_4)
    VAR_7 |= VAR_1;
  if (VAR_5->flags & VAR_3)
    VAR_7 |= VAR_2;

  return FUNC_3(VAR_5->data.stream, VAR_6[0], VAR_7);
}
