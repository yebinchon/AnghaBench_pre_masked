
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int u64 ;
struct sev_data_download_firmware {int len; int address; } ;
struct page {int dummy; } ;
struct firmware {int size; int data; } ;
struct device {int dummy; } ;


 int FUNC_0 (int,int) ;
 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int FUNC_1 (struct page*,int) ;
 int FUNC_2 (struct sev_data_download_firmware*) ;
 struct page* FUNC_3 (int ,int) ;
 int FUNC_4 (struct device*,char*,...) ;
 int FUNC_5 (struct device*,char*) ;
 int FUNC_6 (int) ;
 int FUNC_7 (struct sev_data_download_firmware*,int ,int) ;
 struct sev_data_download_firmware* FUNC_8 (struct page*) ;
 int FUNC_9 (struct firmware const*) ;
 int FUNC_10 (int ,struct sev_data_download_firmware*,int*) ;
 int FUNC_11 (struct device*,struct firmware const**) ;

__attribute__((used)) static int FUNC_12(struct device *VAR_3)
{
 struct sev_data_download_firmware *VAR_4;
 const struct firmware *VAR_5;
 int VAR_6, VAR_7, VAR_8;
 struct page *VAR_9;
 u64 VAR_10;

 if (FUNC_11(VAR_3, &VAR_5) == -VAR_0) {
  FUNC_4(VAR_3, "No SEV firmware file present\n");
  return -1;
 }
 VAR_10 = FUNC_0(sizeof(struct sev_data_download_firmware), 32);

 VAR_8 = FUNC_6(VAR_5->size + VAR_10);
 VAR_9 = FUNC_3(VAR_1, VAR_8);
 if (!VAR_9) {
  VAR_6 = -1;
  goto fw_err;
 }





 VAR_4 = FUNC_8(VAR_9);
 FUNC_7(FUNC_8(VAR_9) + VAR_10, VAR_5->data, VAR_5->size);

 VAR_4->address = FUNC_2(FUNC_8(VAR_9) + VAR_10);
 VAR_4->len = VAR_5->size;

 VAR_6 = FUNC_10(VAR_2, VAR_4, &VAR_7);
 if (VAR_6)
  FUNC_4(VAR_3, "Failed to update SEV firmware: %#x\n", VAR_7);
 else
  FUNC_5(VAR_3, "SEV firmware update successful\n");

 FUNC_1(VAR_9, VAR_8);

fw_err:
 FUNC_9(VAR_5);

 return VAR_6;
}
