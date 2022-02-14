
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
 scalar_t__ FUNC_0 (struct stv090x_state*,int ,int) ;
 int FUNC_1 (int ,int,char*,...) ;

__attribute__((used)) static int FUNC_2(struct stv090x_state *VAR_5, u32 VAR_6)
{
 FUNC_1(VAR_0, 1, "Set Gold PLS code %d", VAR_6);
 if (FUNC_0(VAR_5, VAR_2, VAR_6 & 0xff) < 0)
  goto err;
 if (FUNC_0(VAR_5, VAR_3, (VAR_6 >> 8) & 0xff) < 0)
  goto err;
 if (FUNC_0(VAR_5, VAR_4, 0x04 | (VAR_6 >> 16)) < 0)
  goto err;
 return 0;
err:
 FUNC_1(VAR_1, 1, "I/O error");
 return -1;
}
