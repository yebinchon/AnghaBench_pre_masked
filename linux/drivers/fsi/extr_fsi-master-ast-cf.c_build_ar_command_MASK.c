
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int uint8_t ;
typedef int uint32_t ;
struct fsi_msg {scalar_t__ msg; scalar_t__ bits; } ;
struct fsi_master_acf {int dummy; } ;


 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 scalar_t__ FUNC_0 (struct fsi_master_acf*,int,int,int*) ;
 scalar_t__ FUNC_1 (struct fsi_master_acf*,int,int) ;
 int FUNC_2 (struct fsi_msg*) ;
 int FUNC_3 (struct fsi_msg*,int,int) ;
 int FUNC_4 (struct fsi_msg*) ;
 int FUNC_5 (struct fsi_master_acf*,int) ;
 int FUNC_6 (struct fsi_master_acf*,int) ;
 int FUNC_7 (struct fsi_master_acf*) ;

__attribute__((used)) static void FUNC_8(struct fsi_master_acf *VAR_3,
        struct fsi_msg *VAR_4, uint8_t VAR_5,
        uint32_t VAR_6, size_t VAR_7,
        const void *VAR_8)
{
 int VAR_9, VAR_10, VAR_11;
 bool VAR_12 = !!VAR_8;
 uint8_t VAR_13, VAR_14;
 uint32_t VAR_15;

 VAR_4->bits = 0;
 VAR_4->msg = 0;


 VAR_6 &= ((1 << 21) - 1);


 VAR_11 = 3;

 if (FUNC_1(VAR_3, VAR_5, VAR_6)) {

  VAR_10 = 2;
  VAR_11 = 2;
  VAR_14 = VAR_2;
  FUNC_7(VAR_3);

 } else if (FUNC_0(VAR_3, VAR_5, VAR_6, &VAR_15)) {

  VAR_10 = 9;
  VAR_6 = VAR_15;
  VAR_14 = VAR_1;
  FUNC_6(VAR_3, VAR_15);

 } else {
  VAR_10 = 21;
  VAR_14 = VAR_0;
  FUNC_5(VAR_3, VAR_6);
 }
 VAR_13 = VAR_7 > 1 ? 1 : 0;
 VAR_6 &= ~(VAR_7 - 1);
 if (VAR_7 == 4)
  VAR_6 |= 1;

 FUNC_3(VAR_4, VAR_5, 2);
 FUNC_3(VAR_4, VAR_14, VAR_11);
 FUNC_3(VAR_4, VAR_12 ? 0 : 1, 1);
 FUNC_3(VAR_4, VAR_6, VAR_10);
 FUNC_3(VAR_4, VAR_13, 1);
 for (VAR_9 = 0; VAR_12 && VAR_9 < VAR_7; VAR_9++)
  FUNC_3(VAR_4, ((uint8_t *)VAR_8)[VAR_9], 8);

 FUNC_4(VAR_4);
 FUNC_2(VAR_4);
}
