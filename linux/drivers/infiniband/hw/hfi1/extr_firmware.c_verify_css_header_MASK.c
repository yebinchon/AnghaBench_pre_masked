
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct hfi1_devdata {int dummy; } ;
struct firmware_file {int dummy; } ;
struct css_header {int exponent_size; int modulus_size; int key_size; int module_vendor; int header_version; int header_len; int module_type; } ;


 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int VAR_3 ;
 int VAR_4 ;
 int VAR_5 ;
 scalar_t__ FUNC_0 (struct hfi1_devdata*,char*,int ,int) ;

__attribute__((used)) static int FUNC_1(struct hfi1_devdata *VAR_6, struct css_header *VAR_7)
{

 if (FUNC_0(VAR_6, "module_type", VAR_7->module_type,
      VAR_1) ||
     FUNC_0(VAR_6, "header_len", VAR_7->header_len,
      (sizeof(struct firmware_file) / 4)) ||
     FUNC_0(VAR_6, "header_version", VAR_7->header_version,
      VAR_0) ||
     FUNC_0(VAR_6, "module_vendor", VAR_7->module_vendor,
      VAR_2) ||
     FUNC_0(VAR_6, "key_size", VAR_7->key_size, VAR_5 / 4) ||
     FUNC_0(VAR_6, "modulus_size", VAR_7->modulus_size,
      VAR_5 / 4) ||
     FUNC_0(VAR_6, "exponent_size", VAR_7->exponent_size,
      VAR_4 / 4)) {
  return -VAR_3;
 }
 return 0;
}
