
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


struct stv090x_state {int srate; TYPE_1__* internal; } ;
struct TYPE_2__ {int dev_ver; } ;


 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 scalar_t__ FUNC_0 (struct stv090x_state*,int ,int) ;
 int FUNC_1 (int ,int,char*) ;

__attribute__((used)) static int FUNC_2(struct stv090x_state *VAR_3)
{
 if (VAR_3->internal->dev_ver >= 0x30) {

  if (VAR_3->srate >= 15000000) {
   if (FUNC_0(VAR_3, VAR_0, 0x2b) < 0)
    goto err;
   if (FUNC_0(VAR_3, VAR_1, 0x1a) < 0)
    goto err;
  } else if ((VAR_3->srate >= 7000000) && (15000000 > VAR_3->srate)) {
   if (FUNC_0(VAR_3, VAR_0, 0x0c) < 0)
    goto err;
   if (FUNC_0(VAR_3, VAR_1, 0x1b) < 0)
    goto err;
  } else if (VAR_3->srate < 7000000) {
   if (FUNC_0(VAR_3, VAR_0, 0x2c) < 0)
    goto err;
   if (FUNC_0(VAR_3, VAR_1, 0x1c) < 0)
    goto err;
  }

 } else {

  if (FUNC_0(VAR_3, VAR_0, 0x1a) < 0)
   goto err;
  if (FUNC_0(VAR_3, VAR_1, 0x09) < 0)
   goto err;
 }
 return 0;
err:
 FUNC_1(VAR_2, 1, "I/O error");
 return -1;
}
