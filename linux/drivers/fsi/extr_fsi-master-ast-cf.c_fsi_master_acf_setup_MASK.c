
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef scalar_t__ uint32_t ;
struct fsi_master_acf {scalar_t__ cvic; scalar_t__ sram; int t_echo_delay; int t_send_delay; int dev; scalar_t__ is_ast2500; } ;


 scalar_t__ VAR_0 ;
 scalar_t__ VAR_1 ;
 int VAR_2 ;
 scalar_t__ VAR_3 ;
 int VAR_4 ;
 int FUNC_0 (struct fsi_master_acf*) ;
 int FUNC_1 (struct fsi_master_acf*) ;
 int FUNC_2 (int ,char*) ;
 scalar_t__ FUNC_3 (scalar_t__) ;
 int FUNC_4 (int ,scalar_t__) ;
 int FUNC_5 (struct fsi_master_acf*) ;
 int FUNC_6 (scalar_t__,int ,int ) ;
 int FUNC_7 (int) ;
 int FUNC_8 (struct fsi_master_acf*) ;
 int FUNC_9 (struct fsi_master_acf*) ;
 int FUNC_10 (struct fsi_master_acf*) ;
 int FUNC_11 (struct fsi_master_acf*) ;
 int FUNC_12 (struct fsi_master_acf*) ;
 int FUNC_13 (struct fsi_master_acf*) ;
 int FUNC_14 (struct fsi_master_acf*) ;
 int FUNC_15 (struct fsi_master_acf*) ;

__attribute__((used)) static int FUNC_16(struct fsi_master_acf *VAR_5)
{
 int VAR_6, VAR_7;
 uint32_t VAR_8;


 FUNC_9(VAR_5);





 FUNC_6(VAR_5->sram, 0, VAR_4);


 VAR_7 = FUNC_14(VAR_5);
 if (VAR_7)
  return VAR_7;


 VAR_7 = FUNC_5(VAR_5);
 if (VAR_7)
  return VAR_7;


 VAR_7 = FUNC_0(VAR_5);
 if (VAR_7)
  return VAR_7;


 if (VAR_5->is_ast2500) {
  FUNC_12(VAR_5);
  FUNC_13(VAR_5);
 } else {
  FUNC_10(VAR_5);
  FUNC_11(VAR_5);
 }


 FUNC_15(VAR_5);




 for (VAR_6 = 0; VAR_6 < 10; VAR_6++) {
  VAR_8 = FUNC_3(VAR_5->sram + VAR_0);
  if (VAR_8)
   break;
  FUNC_7(1);
 }
 if (!VAR_8) {
  FUNC_2(VAR_5->dev, "Coprocessor startup timeout !\n");
  VAR_7 = -VAR_2;
  goto err;
 }


 FUNC_4(VAR_5->t_send_delay, VAR_5->sram + VAR_3);
 FUNC_4(VAR_5->t_echo_delay, VAR_5->sram + VAR_1);


 if (VAR_5->cvic) {
  VAR_7 = FUNC_1(VAR_5);
  if (VAR_7)
   goto err;
 }
 return 0;
 err:

 FUNC_9(VAR_5);


 FUNC_8(VAR_5);

 return VAR_7;
}
