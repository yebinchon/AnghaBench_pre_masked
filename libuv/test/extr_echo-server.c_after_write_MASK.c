
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_5__ TYPE_2__ ;
typedef struct TYPE_4__ TYPE_1__ ;


struct TYPE_4__ {TYPE_2__* base; } ;
struct TYPE_5__ {TYPE_1__ buf; } ;
typedef TYPE_2__ write_req_t ;
typedef int uv_write_t ;


 int FUNC_0 (int ,char*,char*,char*) ;
 int FUNC_1 (TYPE_2__*) ;
 int VAR_0 ;
 char* FUNC_2 (int) ;
 char* FUNC_3 (int) ;

__attribute__((used)) static void FUNC_4(uv_write_t* VAR_1, int VAR_2) {
  write_req_t* VAR_3;


  VAR_3 = (write_req_t*) VAR_1;
  FUNC_1(VAR_3->buf.base);
  FUNC_1(VAR_3);

  if (VAR_2 == 0)
    return;

  FUNC_0(VAR_0,
          "uv_write error: %s - %s\n",
          FUNC_2(VAR_2),
          FUNC_3(VAR_2));
}
