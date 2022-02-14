
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


typedef int u32 ;
struct stv090x_state {TYPE_1__* internal; } ;
struct TYPE_2__ {int dev_ver; } ;


 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int VAR_3 ;
 int FUNC_0 (struct stv090x_state*,int ) ;
 int FUNC_1 (int ,int ,int) ;
 scalar_t__ FUNC_2 (struct stv090x_state*,int ,int ) ;
 int FUNC_3 (int ,int,char*) ;

__attribute__((used)) static int FUNC_4(struct stv090x_state *VAR_4)
{
 u32 VAR_5;

 if (VAR_4->internal->dev_ver <= 0x20) {

  VAR_5 = FUNC_0(VAR_4, VAR_0);
  FUNC_1(VAR_5, VAR_3, 0x00);
  if (FUNC_2(VAR_4, VAR_0, VAR_5) < 0)
   goto err;
 } else {

  VAR_5 = FUNC_0(VAR_4, VAR_0);
  FUNC_1(VAR_5, VAR_2, 0x00);
  if (FUNC_2(VAR_4, VAR_0, VAR_5) < 0)
   goto err;
 }
 return 0;
err:
 FUNC_3(VAR_1, 1, "I/O error");
 return -1;
}
