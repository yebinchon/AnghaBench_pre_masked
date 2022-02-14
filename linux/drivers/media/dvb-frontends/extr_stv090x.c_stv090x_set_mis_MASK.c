
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int u32 ;
struct stv090x_state {int dummy; } ;


 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int VAR_3 ;
 int VAR_4 ;
 int VAR_5 ;
 int FUNC_0 (struct stv090x_state*,int ) ;
 int FUNC_1 (int,int ,int) ;
 scalar_t__ FUNC_2 (struct stv090x_state*,int ,int) ;
 int FUNC_3 (int ,int,char*,...) ;

__attribute__((used)) static int FUNC_4(struct stv090x_state *VAR_6, int VAR_7)
{
 u32 VAR_8;

 if (VAR_7 < 0 || VAR_7 > 255) {
  FUNC_3(VAR_0, 1, "Disable MIS filtering");
  VAR_8 = FUNC_0(VAR_6, VAR_5);
  FUNC_1(VAR_8, VAR_2, 0x00);
  if (FUNC_2(VAR_6, VAR_5, VAR_8) < 0)
   goto err;
 } else {
  FUNC_3(VAR_0, 1, "Enable MIS filtering - %d", VAR_7);
  VAR_8 = FUNC_0(VAR_6, VAR_5);
  FUNC_1(VAR_8, VAR_2, 0x01);
  if (FUNC_2(VAR_6, VAR_5, VAR_8) < 0)
   goto err;
  if (FUNC_2(VAR_6, VAR_4, VAR_7) < 0)
   goto err;
  if (FUNC_2(VAR_6, VAR_3, 0xff) < 0)
   goto err;
 }
 return 0;
err:
 FUNC_3(VAR_1, 1, "I/O error");
 return -1;
}
