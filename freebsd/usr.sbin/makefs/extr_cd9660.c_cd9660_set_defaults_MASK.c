
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_5__ TYPE_2__ ;
typedef struct TYPE_4__ TYPE_1__ ;


struct TYPE_5__ {int system_id; struct TYPE_5__* bibliographic_file_id; struct TYPE_5__* abstract_file_id; struct TYPE_5__* copyright_file_id; struct TYPE_5__* application_id; struct TYPE_5__* preparer_id; struct TYPE_5__* publisher_id; } ;
struct TYPE_4__ {int sectorSize; int isoLevel; int include_padding_areas; int boot_entries; int boot_images; scalar_t__ is_bootable; scalar_t__ boot_image_directory; int * generic_bootimage; scalar_t__ has_generic_bootimage; TYPE_2__ primaryDescriptor; scalar_t__ omit_trailing_period; scalar_t__ allow_multidot; scalar_t__ allow_lowercase; scalar_t__ allow_illegal_chars; scalar_t__ allow_max_name; scalar_t__ allow_start_dot; scalar_t__ allow_deep_trees; scalar_t__ chrp_boot; scalar_t__ archimedes_enabled; scalar_t__ rr_moved_dir; scalar_t__ rock_ridge_move_count; scalar_t__ rock_ridge_renamed_dir_name; scalar_t__ rock_ridge_enabled; scalar_t__ follow_sym_links; scalar_t__ keep_bad_images; scalar_t__ verbose_level; } ;
typedef TYPE_1__ iso9660_disk ;


 int FUNC_0 (int *) ;
 int FUNC_1 (int *) ;
 int FUNC_2 (TYPE_2__*,int,int) ;
 int FUNC_3 (int ,char*) ;

__attribute__((used)) static void
FUNC_4(iso9660_disk *VAR_0)
{

 VAR_0->sectorSize = 2048;


 VAR_0->verbose_level = 0;
 VAR_0->keep_bad_images = 0;
 VAR_0->follow_sym_links = 0;
 VAR_0->isoLevel = 2;

 VAR_0->rock_ridge_enabled = 0;
 VAR_0->rock_ridge_renamed_dir_name = 0;
 VAR_0->rock_ridge_move_count = 0;
 VAR_0->rr_moved_dir = 0;

 VAR_0->archimedes_enabled = 0;
 VAR_0->chrp_boot = 0;

 VAR_0->include_padding_areas = 1;


 VAR_0->allow_deep_trees =
     VAR_0->allow_start_dot =
     VAR_0->allow_max_name =
     VAR_0->allow_illegal_chars =
     VAR_0->allow_lowercase =
     VAR_0->allow_multidot =
     VAR_0->omit_trailing_period = 0;


 FUNC_2(&VAR_0->primaryDescriptor, 0, 2048);

 FUNC_2(VAR_0->primaryDescriptor.publisher_id, 0x20,128);
 FUNC_2(VAR_0->primaryDescriptor.preparer_id, 0x20,128);
 FUNC_2(VAR_0->primaryDescriptor.application_id, 0x20,128);
 FUNC_2(VAR_0->primaryDescriptor.copyright_file_id, 0x20,37);
 FUNC_2(VAR_0->primaryDescriptor.abstract_file_id, 0x20,37);
 FUNC_2(VAR_0->primaryDescriptor.bibliographic_file_id, 0x20,37);

 FUNC_3(VAR_0->primaryDescriptor.system_id, "FreeBSD");


 VAR_0->has_generic_bootimage = 0;
 VAR_0->generic_bootimage = ((void*)0);

 VAR_0->boot_image_directory = 0;


 VAR_0->is_bootable = 0;
 FUNC_1(&VAR_0->boot_images);
 FUNC_0(&VAR_0->boot_entries);
}
