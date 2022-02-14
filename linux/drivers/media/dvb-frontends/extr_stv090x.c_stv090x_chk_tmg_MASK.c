
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int u8 ;
typedef int u32 ;
struct stv090x_state {int dummy; } ;
typedef int s32 ;


 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int VAR_3 ;
 int VAR_4 ;
 int VAR_5 ;
 int VAR_6 ;
 int VAR_7 ;
 int VAR_8 ;
 int VAR_9 ;
 int VAR_10 ;
 int FUNC_0 (int,int ) ;
 int FUNC_1 (struct stv090x_state*,int ) ;
 int FUNC_2 (int,int ,int) ;
 scalar_t__ FUNC_3 (struct stv090x_state*,int ,int) ;
 int VAR_11 ;
 int VAR_12 ;
 int VAR_13 ;
 int FUNC_4 (int ,int,char*) ;
 int FUNC_5 (int) ;

__attribute__((used)) static int FUNC_6(struct stv090x_state *VAR_14)
{
 u32 VAR_15;
 s32 VAR_16 = 0, VAR_17;
 u8 VAR_18, VAR_19, VAR_20;
 int VAR_21 = 0;

 VAR_18 = FUNC_1(VAR_14, VAR_1);
 VAR_19 = FUNC_1(VAR_14, VAR_13);
 VAR_20 = FUNC_1(VAR_14, VAR_12);
 if (FUNC_3(VAR_14, VAR_13, 0x20) < 0)
  goto err;
 if (FUNC_3(VAR_14, VAR_12, 0x00) < 0)
  goto err;

 VAR_15 = FUNC_1(VAR_14, VAR_5);
 FUNC_2(VAR_15, VAR_4, 0x00);
 if (FUNC_3(VAR_14, VAR_5, VAR_15) < 0)
  goto err;
 if (FUNC_3(VAR_14, VAR_9, 0x80) < 0)
  goto err;

 if (FUNC_3(VAR_14, VAR_10, 0x40) < 0)
  goto err;
 if (FUNC_3(VAR_14, VAR_1, 0x00) < 0)
  goto err;

 if (FUNC_3(VAR_14, VAR_3, 0x00) < 0)
  goto err;
 if (FUNC_3(VAR_14, VAR_2, 0x00) < 0)
  goto err;
 if (FUNC_3(VAR_14, VAR_0, 0x65) < 0)
  goto err;

 if (FUNC_3(VAR_14, VAR_6, 0x18) < 0)
  goto err;
 FUNC_5(10);

 for (VAR_17 = 0; VAR_17 < 10; VAR_17++) {
  VAR_15 = FUNC_1(VAR_14, VAR_7);
  if (FUNC_0(VAR_15, VAR_11) >= 2)
   VAR_16++;
  FUNC_5(1);
 }
 if (VAR_16 >= 3)
  VAR_21 = 1;

 if (FUNC_3(VAR_14, VAR_0, 0x38) < 0)
  goto err;
 if (FUNC_3(VAR_14, VAR_9, 0x88) < 0)
  goto err;
 if (FUNC_3(VAR_14, VAR_10, 0x68) < 0)
  goto err;

 if (FUNC_3(VAR_14, VAR_1, VAR_18) < 0)
  goto err;
 if (FUNC_3(VAR_14, VAR_13, VAR_19) < 0)
  goto err;
 if (FUNC_3(VAR_14, VAR_12, VAR_20) < 0)
  goto err;

 return VAR_21;

err:
 FUNC_4(VAR_8, 1, "I/O error");
 return -1;
}
