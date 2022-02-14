
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_7__ TYPE_3__ ;
typedef struct TYPE_6__ TYPE_2__ ;
typedef struct TYPE_5__ TYPE_1__ ;


struct TYPE_5__ {int fd; TYPE_3__* stream; } ;
struct TYPE_6__ {int flags; TYPE_1__ data; } ;
typedef TYPE_2__ uv_stdio_container_t ;
struct TYPE_7__ {int type; } ;



 int VAR_0 ;



 int VAR_1 ;
 int FUNC_0 (int ) ;
 int FUNC_1 (int*,int ) ;
 int FUNC_2 (TYPE_3__*) ;

__attribute__((used)) static int FUNC_3(uv_stdio_container_t* VAR_2, int VAR_3[2]) {
  int VAR_4;
  int VAR_5;

  VAR_4 = 130 | 131 | 129 | 128;

  switch (VAR_2->flags & VAR_4) {
  case 130:
    return 0;

  case 131:
    FUNC_0(VAR_2->data.stream != ((void*)0));
    if (VAR_2->data.stream->type != VAR_1)
      return VAR_0;
    else
      return FUNC_1(VAR_3, 0);

  case 129:
  case 128:
    if (VAR_2->flags & 129)
      VAR_5 = VAR_2->data.fd;
    else
      VAR_5 = FUNC_2(VAR_2->data.stream);

    if (VAR_5 == -1)
      return VAR_0;

    VAR_3[1] = VAR_5;
    return 0;

  default:
    FUNC_0(0 && "Unexpected flags");
    return VAR_0;
  }
}
