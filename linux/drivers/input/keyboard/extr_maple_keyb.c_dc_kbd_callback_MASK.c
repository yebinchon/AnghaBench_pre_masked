
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


struct mapleq {TYPE_1__* recvbuf; struct maple_device* dev; } ;
struct maple_device {unsigned long function; } ;
struct dc_kbd {int new; } ;
struct TYPE_2__ {scalar_t__ buf; } ;


 int FUNC_0 (struct dc_kbd*) ;
 scalar_t__ FUNC_1 (int ) ;
 struct dc_kbd* FUNC_2 (struct maple_device*) ;
 int VAR_0 ;
 int FUNC_3 (int ,unsigned long*,int) ;
 int FUNC_4 (int *) ;
 int FUNC_5 (int *) ;

__attribute__((used)) static void FUNC_6(struct mapleq *VAR_1)
{
 struct maple_device *VAR_2 = VAR_1->dev;
 struct dc_kbd *VAR_3 = FUNC_2(VAR_2);
 unsigned long *VAR_4 = (unsigned long *)(VAR_1->recvbuf->buf);





 if (FUNC_1(FUNC_4(&VAR_0))) {

  if (VAR_4[1] == VAR_2->function) {
   FUNC_3(VAR_3->new, VAR_4 + 2, 8);
   FUNC_0(VAR_3);
  }

  FUNC_5(&VAR_0);
 }
}
