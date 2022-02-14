
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int u32 ;
struct firmware {scalar_t__ size; scalar_t__ data; } ;
struct cdn_firmware_header {int dram_size; scalar_t__ iram_size; scalar_t__ header_size; int size_bytes; } ;
struct cdn_dp_device {int dev; struct firmware* fw; } ;


 int FUNC_0 (int ,char*,...) ;
 int VAR_0 ;
 int FUNC_1 (struct cdn_dp_device*) ;
 int FUNC_2 (struct cdn_dp_device*,int const*,scalar_t__,int const*,int ) ;
 int FUNC_3 (struct cdn_dp_device*,int) ;
 scalar_t__ FUNC_4 (int ) ;

__attribute__((used)) static int FUNC_5(struct cdn_dp_device *VAR_1)
{
 int VAR_2;
 const u32 *VAR_3, *VAR_4;
 const struct firmware *VAR_5 = VAR_1->fw;
 const struct cdn_firmware_header *VAR_6;

 VAR_6 = (struct cdn_firmware_header *)VAR_5->data;
 if (VAR_5->size != FUNC_4(VAR_6->size_bytes)) {
  FUNC_0(VAR_1->dev, "firmware is invalid\n");
  return -VAR_0;
 }

 VAR_3 = (const u32 *)(VAR_5->data + VAR_6->header_size);
 VAR_4 = (const u32 *)(VAR_5->data + VAR_6->header_size + VAR_6->iram_size);

 VAR_2 = FUNC_2(VAR_1, VAR_3, VAR_6->iram_size,
       VAR_4, VAR_6->dram_size);
 if (VAR_2)
  return VAR_2;

 VAR_2 = FUNC_3(VAR_1, 1);
 if (VAR_2) {
  FUNC_0(VAR_1->dev, "active ucpu failed: %d\n", VAR_2);
  return VAR_2;
 }

 return FUNC_1(VAR_1);
}
