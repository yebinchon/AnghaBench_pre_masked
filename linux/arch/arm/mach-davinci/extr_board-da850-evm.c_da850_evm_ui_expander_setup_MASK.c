
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct i2c_client {int dummy; } ;


 size_t VAR_0 ;
 size_t VAR_1 ;
 size_t VAR_2 ;
 int FUNC_0 (int) ;
 int FUNC_1 () ;
 int FUNC_2 (int) ;
 int * VAR_3 ;
 int VAR_4 ;
 int FUNC_3 (unsigned int) ;
 int FUNC_4 (int,int) ;
 int FUNC_5 (int) ;
 int FUNC_6 (int,int ) ;
 int FUNC_7 (int *) ;
 int FUNC_8 (char*) ;
 int FUNC_9 (char*,...) ;

__attribute__((used)) static int FUNC_10(struct i2c_client *VAR_5, unsigned VAR_6,
      unsigned VAR_7, void *VAR_8)
{
 int VAR_9, VAR_10, VAR_11, VAR_12;

 VAR_9 = VAR_6 + VAR_0;
 VAR_10 = VAR_6 + VAR_1;
 VAR_11 = VAR_6 + VAR_2;

 VAR_12 = FUNC_6(VAR_9, VAR_3[VAR_0]);
 if (VAR_12) {
  FUNC_9("Cannot open UI expander pin %d\n", VAR_9);
  goto exp_setup_sela_fail;
 }

 VAR_12 = FUNC_6(VAR_10, VAR_3[VAR_1]);
 if (VAR_12) {
  FUNC_9("Cannot open UI expander pin %d\n", VAR_10);
  goto exp_setup_selb_fail;
 }

 VAR_12 = FUNC_6(VAR_11, VAR_3[VAR_2]);
 if (VAR_12) {
  FUNC_9("Cannot open UI expander pin %d\n", VAR_11);
  goto exp_setup_selc_fail;
 }


 FUNC_4(VAR_9, 1);
 FUNC_4(VAR_10, 1);
 FUNC_4(VAR_11, 1);

 FUNC_3(VAR_6);
 VAR_12 = FUNC_7(&VAR_4);
 if (VAR_12) {
  FUNC_9("Could not register UI GPIO expander push-buttons");
  goto exp_setup_keys_fail;
 }

 FUNC_8("DA850/OMAP-L138 EVM UI card detected\n");

 FUNC_1();

 FUNC_0(VAR_9);

 FUNC_2(VAR_11);

 return 0;

exp_setup_keys_fail:
 FUNC_5(VAR_11);
exp_setup_selc_fail:
 FUNC_5(VAR_10);
exp_setup_selb_fail:
 FUNC_5(VAR_9);
exp_setup_sela_fail:
 return VAR_12;
}
