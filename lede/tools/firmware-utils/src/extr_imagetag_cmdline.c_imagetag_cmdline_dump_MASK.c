
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct gengetopt_args_info {scalar_t__ align_rootfs_given; int pad_orig; scalar_t__ pad_given; scalar_t__ kernel_file_has_header_given; int reserved2_orig; scalar_t__ reserved2_given; int inactive_orig; scalar_t__ inactive_given; int second_image_flag_orig; scalar_t__ second_image_flag_given; int rsa_signature_orig; scalar_t__ rsa_signature_given; scalar_t__ root_first_given; int info2_orig; scalar_t__ info2_given; int altinfo_orig; scalar_t__ altinfo_given; int info1_orig; scalar_t__ info1_given; int layoutver_orig; scalar_t__ layoutver_given; int entry_orig; scalar_t__ entry_given; int load_addr_orig; scalar_t__ load_addr_given; int block_size_orig; scalar_t__ block_size_given; int signature2_orig; scalar_t__ signature2_given; int signature_orig; scalar_t__ signature_given; int tag_version_orig; scalar_t__ tag_version_given; int image_offset_orig; scalar_t__ image_offset_given; int flash_start_orig; scalar_t__ flash_start_given; int chipid_orig; scalar_t__ chipid_given; int boardid_orig; scalar_t__ boardid_given; int cfe_orig; scalar_t__ cfe_given; int output_orig; scalar_t__ output_given; int rootfs_orig; scalar_t__ rootfs_given; int kernel_orig; scalar_t__ kernel_given; scalar_t__ version_given; scalar_t__ help_given; } ;
typedef int FILE ;


 int VAR_0 ;
 int VAR_1 ;
 char* VAR_2 ;
 int FUNC_0 (int ,char*,char*) ;
 int VAR_3 ;
 int VAR_4 ;
 int VAR_5 ;
 int FUNC_1 (int *,char*,int ,int ) ;

int
FUNC_2(FILE *VAR_6, struct gengetopt_args_info *VAR_7)
{
  int VAR_8 = 0;

  if (!VAR_6)
    {
      FUNC_0 (VAR_5, "%s: cannot dump options to stream\n", VAR_2);
      return VAR_0;
    }

  if (VAR_7->help_given)
    FUNC_1(VAR_6, "help", 0, 0 );
  if (VAR_7->version_given)
    FUNC_1(VAR_6, "version", 0, 0 );
  if (VAR_7->kernel_given)
    FUNC_1(VAR_6, "kernel", VAR_7->kernel_orig, 0);
  if (VAR_7->rootfs_given)
    FUNC_1(VAR_6, "rootfs", VAR_7->rootfs_orig, 0);
  if (VAR_7->output_given)
    FUNC_1(VAR_6, "output", VAR_7->output_orig, 0);
  if (VAR_7->cfe_given)
    FUNC_1(VAR_6, "cfe", VAR_7->cfe_orig, 0);
  if (VAR_7->boardid_given)
    FUNC_1(VAR_6, "boardid", VAR_7->boardid_orig, 0);
  if (VAR_7->chipid_given)
    FUNC_1(VAR_6, "chipid", VAR_7->chipid_orig, 0);
  if (VAR_7->flash_start_given)
    FUNC_1(VAR_6, "flash-start", VAR_7->flash_start_orig, 0);
  if (VAR_7->image_offset_given)
    FUNC_1(VAR_6, "image-offset", VAR_7->image_offset_orig, 0);
  if (VAR_7->tag_version_given)
    FUNC_1(VAR_6, "tag-version", VAR_7->tag_version_orig, 0);
  if (VAR_7->signature_given)
    FUNC_1(VAR_6, "signature", VAR_7->signature_orig, 0);
  if (VAR_7->signature2_given)
    FUNC_1(VAR_6, "signature2", VAR_7->signature2_orig, 0);
  if (VAR_7->block_size_given)
    FUNC_1(VAR_6, "block-size", VAR_7->block_size_orig, 0);
  if (VAR_7->load_addr_given)
    FUNC_1(VAR_6, "load-addr", VAR_7->load_addr_orig, 0);
  if (VAR_7->entry_given)
    FUNC_1(VAR_6, "entry", VAR_7->entry_orig, 0);
  if (VAR_7->layoutver_given)
    FUNC_1(VAR_6, "layoutver", VAR_7->layoutver_orig, 0);
  if (VAR_7->info1_given)
    FUNC_1(VAR_6, "info1", VAR_7->info1_orig, 0);
  if (VAR_7->altinfo_given)
    FUNC_1(VAR_6, "altinfo", VAR_7->altinfo_orig, 0);
  if (VAR_7->info2_given)
    FUNC_1(VAR_6, "info2", VAR_7->info2_orig, 0);
  if (VAR_7->root_first_given)
    FUNC_1(VAR_6, "root-first", 0, 0 );
  if (VAR_7->rsa_signature_given)
    FUNC_1(VAR_6, "rsa-signature", VAR_7->rsa_signature_orig, 0);
  if (VAR_7->second_image_flag_given)
    FUNC_1(VAR_6, "second-image-flag", VAR_7->second_image_flag_orig, VAR_4);
  if (VAR_7->inactive_given)
    FUNC_1(VAR_6, "inactive", VAR_7->inactive_orig, VAR_3);
  if (VAR_7->reserved2_given)
    FUNC_1(VAR_6, "reserved2", VAR_7->reserved2_orig, 0);
  if (VAR_7->kernel_file_has_header_given)
    FUNC_1(VAR_6, "kernel-file-has-header", 0, 0 );
  if (VAR_7->pad_given)
    FUNC_1(VAR_6, "pad", VAR_7->pad_orig, 0);
  if (VAR_7->align_rootfs_given)
    FUNC_1(VAR_6, "align-rootfs", 0, 0 );


  VAR_8 = VAR_1;
  return VAR_8;
}
