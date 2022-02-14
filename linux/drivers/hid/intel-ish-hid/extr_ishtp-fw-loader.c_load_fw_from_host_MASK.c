
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


typedef int u32 ;
struct TYPE_2__ {int xfer_mode; } ;
struct shim_fw_info {TYPE_1__ ldr_capability; } ;
struct ishtp_cl_data {int flag_retry; int retry_count; struct ishtp_cl* loader_ishtp_cl; } ;
struct ishtp_cl {int dummy; } ;
struct firmware {int dummy; } ;


 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int VAR_3 ;
 int VAR_4 ;
 int VAR_5 ;
 scalar_t__ VAR_6 ;
 int FUNC_0 (struct ishtp_cl_data*) ;
 int FUNC_1 (int ,char*,...) ;
 int FUNC_2 (int ,char*,char*) ;
 int FUNC_3 (int ,char*,int) ;
 int FUNC_4 (struct ishtp_cl_data*,char*) ;
 int FUNC_5 (struct ishtp_cl_data*) ;
 int FUNC_6 (struct ishtp_cl_data*,struct firmware const*,struct shim_fw_info) ;
 int FUNC_7 (struct ishtp_cl_data*,struct firmware const*) ;
 int FUNC_8 (int ) ;
 int FUNC_9 (struct ishtp_cl_data*,struct firmware const*,struct shim_fw_info*) ;
 int FUNC_10 (struct ishtp_cl*) ;
 int FUNC_11 (char*) ;
 char* FUNC_12 (int ,int ) ;
 int FUNC_13 (struct firmware const*) ;
 int FUNC_14 (struct firmware const**,char*,int ) ;

__attribute__((used)) static int FUNC_15(struct ishtp_cl_data *VAR_7)
{
 int VAR_8;
 u32 VAR_9;
 char *VAR_10;
 const struct firmware *VAR_11;
 struct shim_fw_info VAR_12;
 struct ishtp_cl *VAR_13 = VAR_7->loader_ishtp_cl;

 VAR_7->flag_retry = 0;

 VAR_10 = FUNC_12(VAR_2, VAR_3);
 if (!VAR_10) {
  VAR_7->flag_retry = 1;
  VAR_8 = -VAR_1;
  goto end_error;
 }


 VAR_8 = FUNC_4(VAR_7, VAR_10);
 if (VAR_8 < 0)
  goto end_err_filename_buf_release;

 VAR_8 = FUNC_14(&VAR_11, VAR_10, FUNC_0(VAR_7));
 if (VAR_8 < 0)
  goto end_err_filename_buf_release;



 VAR_8 = FUNC_9(VAR_7, VAR_11, &VAR_12);
 if (VAR_8 < 0)
  goto end_err_fw_release;



 VAR_9 = VAR_12.ldr_capability.xfer_mode;
 if (VAR_9 & VAR_4) {
  VAR_8 = FUNC_6(VAR_7, VAR_11, VAR_12);
 } else if (VAR_9 & VAR_5) {
  VAR_8 = FUNC_7(VAR_7, VAR_11);
 } else {
  FUNC_1(FUNC_0(VAR_7),
   "No transfer mode selected in firmware\n");
  VAR_8 = -VAR_0;
 }
 if (VAR_8 < 0)
  goto end_err_fw_release;



 VAR_8 = FUNC_5(VAR_7);
 if (VAR_8 < 0)
  goto end_err_fw_release;

 FUNC_13(VAR_11);
 FUNC_2(FUNC_0(VAR_7), "ISH firmware %s loaded\n",
   VAR_10);
 FUNC_11(VAR_10);
 return 0;

end_err_fw_release:
 FUNC_13(VAR_11);
end_err_filename_buf_release:
 FUNC_11(VAR_10);
end_error:

 if (VAR_7->flag_retry &&
     VAR_7->retry_count++ < VAR_6) {
  FUNC_3(FUNC_0(VAR_7),
    "ISH host firmware load failed %d. Resetting ISH, and trying again..\n",
    VAR_8);
  FUNC_8(FUNC_10(VAR_13));
 } else {
  FUNC_1(FUNC_0(VAR_7),
   "ISH host firmware load failed %d\n", VAR_8);
 }
 return VAR_8;
}
