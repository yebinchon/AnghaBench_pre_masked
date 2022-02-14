
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_6__ TYPE_3__ ;
typedef struct TYPE_5__ TYPE_2__ ;
typedef struct TYPE_4__ TYPE_1__ ;


struct hfi1_devdata {TYPE_1__* pcidev; } ;
struct firmware_file {int firmware; int signature; int exponent; int modulus; } ;
struct TYPE_5__ {int mu; int r2; } ;
struct firmware_details {int firmware_len; TYPE_3__* fw; int firmware_ptr; int mu; int r2; int signature; int exponent; int modulus; struct css_header* css_header; TYPE_2__ dummy_header; } ;
struct css_header {int module_type; int header_len; int header_version; int module_id; int module_vendor; int date; int size; int key_size; int modulus_size; int exponent_size; } ;
struct augmented_firmware_file {int firmware; int mu; int r2; int signature; int exponent; int modulus; } ;
struct TYPE_6__ {int size; scalar_t__ data; } ;
struct TYPE_4__ {int dev; } ;


 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int FUNC_0 (struct hfi1_devdata*,char*,...) ;
 int FUNC_1 (struct hfi1_devdata*,char*,char const*) ;
 int FUNC_2 (struct hfi1_devdata*,char*,char const*,int) ;
 int FUNC_3 (struct firmware_details*) ;
 int FUNC_4 (int ,char*,...) ;
 int FUNC_5 (struct firmware_details*,int ,int) ;
 int FUNC_6 (struct hfi1_devdata*,char const*,int,int) ;
 int FUNC_7 (TYPE_3__**,char const*,int *) ;
 int FUNC_8 (struct hfi1_devdata*,struct css_header*) ;

__attribute__((used)) static int FUNC_9(struct hfi1_devdata *VAR_3, const char *VAR_4,
          struct firmware_details *VAR_5)
{
 struct css_header *VAR_6;
 int VAR_7;

 FUNC_5(VAR_5, 0, sizeof(*VAR_5));

 VAR_7 = FUNC_7(&VAR_5->fw, VAR_4, &VAR_3->pcidev->dev);
 if (VAR_7) {
  FUNC_2(VAR_3, "cannot find firmware \"%s\", err %d\n",
       VAR_4, VAR_7);
  return VAR_7;
 }


 if (VAR_5->fw->size < sizeof(struct css_header)) {
  FUNC_0(VAR_3, "firmware \"%s\" is too small\n", VAR_4);
  VAR_7 = -VAR_1;
  goto done;
 }
 VAR_6 = (struct css_header *)VAR_5->fw->data;

 FUNC_4(VAR_2, "Firmware %s details:", VAR_4);
 FUNC_4(VAR_2, "file size: 0x%lx bytes", VAR_5->fw->size);
 FUNC_4(VAR_2, "CSS structure:");
 FUNC_4(VAR_2, "  module_type    0x%x", VAR_6->module_type);
 FUNC_4(VAR_2, "  header_len     0x%03x (0x%03x bytes)",
    VAR_6->header_len, 4 * VAR_6->header_len);
 FUNC_4(VAR_2, "  header_version 0x%x", VAR_6->header_version);
 FUNC_4(VAR_2, "  module_id      0x%x", VAR_6->module_id);
 FUNC_4(VAR_2, "  module_vendor  0x%x", VAR_6->module_vendor);
 FUNC_4(VAR_2, "  date           0x%x", VAR_6->date);
 FUNC_4(VAR_2, "  size           0x%03x (0x%03x bytes)",
    VAR_6->size, 4 * VAR_6->size);
 FUNC_4(VAR_2, "  key_size       0x%03x (0x%03x bytes)",
    VAR_6->key_size, 4 * VAR_6->key_size);
 FUNC_4(VAR_2, "  modulus_size   0x%03x (0x%03x bytes)",
    VAR_6->modulus_size, 4 * VAR_6->modulus_size);
 FUNC_4(VAR_2, "  exponent_size  0x%03x (0x%03x bytes)",
    VAR_6->exponent_size, 4 * VAR_6->exponent_size);
 FUNC_4(VAR_2, "firmware size: 0x%lx bytes",
    VAR_5->fw->size - sizeof(struct firmware_file));
 VAR_7 = FUNC_8(VAR_3, VAR_6);
 if (VAR_7) {
  FUNC_1(VAR_3, "Invalid CSS header for \"%s\"\n", VAR_4);
 } else if ((VAR_6->size * 4) == VAR_5->fw->size) {

  struct firmware_file *VAR_8 = (struct firmware_file *)
       VAR_5->fw->data;


  VAR_7 = FUNC_6(VAR_3, VAR_4, VAR_5->fw->size,
        sizeof(struct firmware_file));
  if (VAR_7 == 0) {
   VAR_5->css_header = VAR_6;
   VAR_5->modulus = VAR_8->modulus;
   VAR_5->exponent = VAR_8->exponent;
   VAR_5->signature = VAR_8->signature;
   VAR_5->r2 = VAR_5->dummy_header.r2;
   VAR_5->mu = VAR_5->dummy_header.mu;
   VAR_5->firmware_ptr = VAR_8->firmware;
   VAR_5->firmware_len = VAR_5->fw->size -
      sizeof(struct firmware_file);




   FUNC_0(VAR_3, "driver is unable to validate firmware without r2 and mu (not in firmware file)\n");
   VAR_7 = -VAR_1;
  }
 } else if ((VAR_6->size * 4) + VAR_0 == VAR_5->fw->size) {

  struct augmented_firmware_file *VAR_9 =
   (struct augmented_firmware_file *)VAR_5->fw->data;


  VAR_7 = FUNC_6(VAR_3, VAR_4, VAR_5->fw->size,
        sizeof(struct augmented_firmware_file));
  if (VAR_7 == 0) {
   VAR_5->css_header = VAR_6;
   VAR_5->modulus = VAR_9->modulus;
   VAR_5->exponent = VAR_9->exponent;
   VAR_5->signature = VAR_9->signature;
   VAR_5->r2 = VAR_9->r2;
   VAR_5->mu = VAR_9->mu;
   VAR_5->firmware_ptr = VAR_9->firmware;
   VAR_5->firmware_len = VAR_5->fw->size -
     sizeof(struct augmented_firmware_file);
  }
 } else {

  FUNC_0(VAR_3,
      "invalid firmware header field size: expected 0x%lx or 0x%lx, actual 0x%x\n",
      VAR_5->fw->size / 4,
      (VAR_5->fw->size - VAR_0) / 4,
      VAR_6->size);

  VAR_7 = -VAR_1;
 }

done:

 if (VAR_7)
  FUNC_3(VAR_5);
 return VAR_7;
}
