
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct ishtp_fw_client {int dummy; } ;
struct ishtp_cl_data {int cl_device; } ;
struct ishtp_cl {int dummy; } ;


 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int VAR_3 ;
 int FUNC_0 (struct ishtp_cl_data*) ;
 int FUNC_1 (int ,char*,...) ;
 int FUNC_2 (int ,char*) ;
 int FUNC_3 (struct ishtp_cl*) ;
 int FUNC_4 (struct ishtp_cl*) ;
 int FUNC_5 (struct ishtp_cl*,int ) ;
 int FUNC_6 (struct ishtp_cl*) ;
 struct ishtp_fw_client* FUNC_7 (int ,int *) ;
 struct ishtp_cl_data* FUNC_8 (struct ishtp_cl*) ;
 int FUNC_9 (struct ishtp_fw_client*) ;
 int FUNC_10 (struct ishtp_cl*) ;
 int FUNC_11 (int ,int ) ;
 int FUNC_12 (struct ishtp_cl*,int ) ;
 int FUNC_13 (struct ishtp_cl*,int ) ;
 int FUNC_14 (struct ishtp_cl*,int ) ;
 int VAR_4 ;
 int VAR_5 ;

__attribute__((used)) static int FUNC_15(struct ishtp_cl *VAR_6, int VAR_7)
{
 int VAR_8;
 struct ishtp_fw_client *VAR_9;
 struct ishtp_cl_data *VAR_10 =
  FUNC_8(VAR_6);

 FUNC_1(FUNC_0(VAR_10), "reset flag: %d\n", VAR_7);

 VAR_8 = FUNC_4(VAR_6);
 if (VAR_8 < 0) {
  FUNC_2(FUNC_0(VAR_10), "ishtp_cl_link failed\n");
  return VAR_8;
 }


 FUNC_14(VAR_6, VAR_3);
 FUNC_13(VAR_6, VAR_2);

 VAR_9 =
  FUNC_7(FUNC_10(VAR_6),
           &VAR_5);
 if (!VAR_9) {
  FUNC_2(FUNC_0(VAR_10),
   "ISH client uuid not found\n");
  VAR_8 = -VAR_0;
  goto err_cl_unlink;
 }

 FUNC_5(VAR_6,
      FUNC_9(VAR_9));
 FUNC_12(VAR_6, VAR_1);

 VAR_8 = FUNC_3(VAR_6);
 if (VAR_8 < 0) {
  FUNC_2(FUNC_0(VAR_10), "Client connect fail\n");
  goto err_cl_unlink;
 }

 FUNC_1(FUNC_0(VAR_10), "Client connected\n");

 FUNC_11(VAR_10->cl_device, VAR_4);

 return 0;

err_cl_unlink:
 FUNC_6(VAR_6);
 return VAR_8;
}
