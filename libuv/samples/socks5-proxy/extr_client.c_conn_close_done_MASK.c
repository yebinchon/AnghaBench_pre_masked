
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_5__ TYPE_2__ ;
typedef struct TYPE_4__ TYPE_1__ ;


struct TYPE_4__ {TYPE_2__* data; } ;
typedef TYPE_1__ uv_handle_t ;
struct TYPE_5__ {int client; } ;
typedef TYPE_2__ conn ;


 int FUNC_0 (int ) ;

__attribute__((used)) static void FUNC_1(uv_handle_t *VAR_0) {
  conn *VAR_1;

  VAR_1 = VAR_0->data;
  FUNC_0(VAR_1->client);
}
