
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct gengetopt_args_info {scalar_t__ align_rootfs_flag; int * pad_orig; scalar_t__ kernel_file_has_header_flag; int * reserved2_orig; int * reserved2_arg; int * inactive_orig; void* inactive_arg; int * second_image_flag_orig; void* second_image_flag_arg; int * rsa_signature_orig; int * rsa_signature_arg; scalar_t__ root_first_flag; int * info2_orig; int * info2_arg; int * altinfo_orig; int * altinfo_arg; int * info1_orig; int * info1_arg; int * layoutver_orig; int * layoutver_arg; int * entry_orig; int * entry_arg; int * load_addr_orig; int * load_addr_arg; int * block_size_orig; void* block_size_arg; int * signature2_orig; void* signature2_arg; int * signature_orig; void* signature_arg; int * tag_version_orig; void* tag_version_arg; int * image_offset_orig; void* image_offset_arg; int * flash_start_orig; void* flash_start_arg; int * chipid_orig; int * chipid_arg; int * boardid_orig; int * boardid_arg; int * cfe_orig; int * cfe_arg; int * output_orig; int * output_arg; int * rootfs_orig; int * rootfs_arg; int * kernel_orig; int * kernel_arg; } ;


 int FUNC_0 (struct gengetopt_args_info*) ;
 void* FUNC_1 (char*) ;

__attribute__((used)) static
void FUNC_2 (struct gengetopt_args_info *VAR_0)
{
  FUNC_0 (VAR_0);
  VAR_0->kernel_arg = ((void*)0);
  VAR_0->kernel_orig = ((void*)0);
  VAR_0->rootfs_arg = ((void*)0);
  VAR_0->rootfs_orig = ((void*)0);
  VAR_0->output_arg = ((void*)0);
  VAR_0->output_orig = ((void*)0);
  VAR_0->cfe_arg = ((void*)0);
  VAR_0->cfe_orig = ((void*)0);
  VAR_0->boardid_arg = ((void*)0);
  VAR_0->boardid_orig = ((void*)0);
  VAR_0->chipid_arg = ((void*)0);
  VAR_0->chipid_orig = ((void*)0);
  VAR_0->flash_start_arg = FUNC_1 ("0xBFC00000");
  VAR_0->flash_start_orig = ((void*)0);
  VAR_0->image_offset_arg = FUNC_1 ("0x10000");
  VAR_0->image_offset_orig = ((void*)0);
  VAR_0->tag_version_arg = FUNC_1 ("6");
  VAR_0->tag_version_orig = ((void*)0);
  VAR_0->signature_arg = FUNC_1 ("Broadcom Corporatio");
  VAR_0->signature_orig = ((void*)0);
  VAR_0->signature2_arg = FUNC_1 ("ver. 2.0");
  VAR_0->signature2_orig = ((void*)0);
  VAR_0->block_size_arg = FUNC_1 ("0x10000");
  VAR_0->block_size_orig = ((void*)0);
  VAR_0->load_addr_arg = ((void*)0);
  VAR_0->load_addr_orig = ((void*)0);
  VAR_0->entry_arg = ((void*)0);
  VAR_0->entry_orig = ((void*)0);
  VAR_0->layoutver_arg = ((void*)0);
  VAR_0->layoutver_orig = ((void*)0);
  VAR_0->info1_arg = ((void*)0);
  VAR_0->info1_orig = ((void*)0);
  VAR_0->altinfo_arg = ((void*)0);
  VAR_0->altinfo_orig = ((void*)0);
  VAR_0->info2_arg = ((void*)0);
  VAR_0->info2_orig = ((void*)0);
  VAR_0->root_first_flag = 0;
  VAR_0->rsa_signature_arg = ((void*)0);
  VAR_0->rsa_signature_orig = ((void*)0);
  VAR_0->second_image_flag_arg = FUNC_1 ("2");
  VAR_0->second_image_flag_orig = ((void*)0);
  VAR_0->inactive_arg = FUNC_1 ("2");
  VAR_0->inactive_orig = ((void*)0);
  VAR_0->reserved2_arg = ((void*)0);
  VAR_0->reserved2_orig = ((void*)0);
  VAR_0->kernel_file_has_header_flag = 0;
  VAR_0->pad_orig = ((void*)0);
  VAR_0->align_rootfs_flag = 0;

}
