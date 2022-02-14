
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_4__ TYPE_2__ ;
typedef struct TYPE_3__ TYPE_1__ ;


typedef void* u16 ;
struct TYPE_3__ {void* ws_col; void* ws_row; } ;
struct TYPE_4__ {TYPE_1__ ws; } ;
struct port {TYPE_2__ cons; } ;


 int FUNC_0 (struct port*) ;

__attribute__((used)) static void FUNC_1(struct port *VAR_0, u16 VAR_1, u16 VAR_2)
{
 if (!VAR_0 || !FUNC_0(VAR_0))
  return;

 VAR_0->cons.ws.ws_row = VAR_1;
 VAR_0->cons.ws.ws_col = VAR_2;
}
