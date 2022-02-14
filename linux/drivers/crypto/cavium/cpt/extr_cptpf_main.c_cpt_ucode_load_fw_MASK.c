
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


typedef void u8 ;
typedef int u64 ;
typedef int u16 ;
struct ucode_header {int code_length; } ;
struct microcode {void* version; int code_size; int is_ae; unsigned long long core_mask; int num_cores; int phys_base; int is_mc_valid; scalar_t__ code; } ;
struct firmware {scalar_t__ data; } ;
struct device {int dummy; } ;
struct cpt_device {size_t next_mc_idx; TYPE_1__* pdev; struct microcode* mcode; } ;
struct TYPE_2__ {struct device dev; } ;


 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int VAR_3 ;
 int FUNC_0 (int ) ;
 int FUNC_1 (int) ;
 int FUNC_2 (struct device*,char*,int) ;
 int FUNC_3 (struct device*,char*,...) ;
 int FUNC_4 (struct device*,char*,void*) ;
 scalar_t__ FUNC_5 (struct device*,int,int*,int ) ;
 int FUNC_6 (struct cpt_device*,struct microcode*) ;
 int FUNC_7 (void*,void*,int) ;
 int FUNC_8 (int ) ;
 int FUNC_9 (struct firmware const*) ;
 int FUNC_10 (struct firmware const**,void const*,struct device*) ;

__attribute__((used)) static int FUNC_11(struct cpt_device *VAR_4, const u8 *VAR_5, bool VAR_6)
{
 const struct firmware *VAR_7;
 struct device *VAR_8 = &VAR_4->pdev->dev;
 struct ucode_header *VAR_9;
 struct microcode *VAR_10;
 int VAR_11, VAR_12 = 0;

 VAR_12 = FUNC_10(&VAR_7, VAR_5, VAR_8);
 if (VAR_12)
  return VAR_12;

 VAR_9 = (struct ucode_header *)VAR_7->data;
 VAR_10 = &VAR_4->mcode[VAR_4->next_mc_idx];
 FUNC_7(VAR_10->version, (u8 *)VAR_7->data, VAR_0);
 VAR_10->code_size = FUNC_8(VAR_9->code_length) * 2;
 if (!VAR_10->code_size) {
  VAR_12 = -VAR_1;
  goto fw_release;
 }

 VAR_10->is_ae = VAR_6;
 VAR_10->core_mask = 0ULL;
 VAR_10->num_cores = VAR_6 ? 6 : 10;


 VAR_10->code = FUNC_5(&VAR_4->pdev->dev, VAR_10->code_size,
      &VAR_10->phys_base, VAR_3);
 if (!VAR_10->code) {
  FUNC_3(VAR_8, "Unable to allocate space for microcode");
  VAR_12 = -VAR_2;
  goto fw_release;
 }

 FUNC_7((void *)VAR_10->code, (void *)(VAR_7->data + sizeof(*VAR_9)),
        VAR_10->code_size);


 for (VAR_11 = 0; VAR_11 < (VAR_10->code_size / 8); VAR_11++)
  ((u64 *)VAR_10->code)[VAR_11] = FUNC_1(((u64 *)VAR_10->code)[VAR_11]);

 for (VAR_11 = 0; VAR_11 < (VAR_10->code_size / 2); VAR_11++)
  ((u16 *)VAR_10->code)[VAR_11] = FUNC_0(((u16 *)VAR_10->code)[VAR_11]);

 FUNC_2(VAR_8, "mcode->code_size = %u\n", VAR_10->code_size);
 FUNC_2(VAR_8, "mcode->is_ae = %u\n", VAR_10->is_ae);
 FUNC_2(VAR_8, "mcode->num_cores = %u\n", VAR_10->num_cores);
 FUNC_2(VAR_8, "mcode->code = %llx\n", (u64)VAR_10->code);
 FUNC_2(VAR_8, "mcode->phys_base = %llx\n", VAR_10->phys_base);

 VAR_12 = FUNC_6(VAR_4, VAR_10);
 if (VAR_12) {
  FUNC_3(VAR_8, "do_cpt_init failed with ret: %d\n", VAR_12);
  goto fw_release;
 }

 FUNC_4(VAR_8, "Microcode Loaded %s\n", VAR_10->version);
 VAR_10->is_mc_valid = 1;
 VAR_4->next_mc_idx++;

fw_release:
 FUNC_9(VAR_7);

 return VAR_12;
}
