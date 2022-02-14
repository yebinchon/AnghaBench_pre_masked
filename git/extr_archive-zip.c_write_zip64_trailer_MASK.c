
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


struct zip64_dir_trailer_locator {int number_of_disks; int offset; int disk; int magic; int size; int entries; int entries_on_this_disk; int directory_start_disk; int version; int creator_version; int record_size; } ;
struct zip64_dir_trailer {int number_of_disks; int offset; int disk; int magic; int size; int entries; int entries_on_this_disk; int directory_start_disk; int version; int creator_version; int record_size; } ;
struct TYPE_2__ {scalar_t__ len; } ;


 int VAR_0 ;
 scalar_t__ VAR_1 ;
 int VAR_2 ;
 int FUNC_0 (int ,int) ;
 int FUNC_1 (int ,int) ;
 int FUNC_2 (int ,scalar_t__) ;
 int VAR_3 ;
 int FUNC_3 (int,struct zip64_dir_trailer_locator*,int ) ;
 TYPE_1__ VAR_4 ;
 scalar_t__ VAR_5 ;
 scalar_t__ VAR_6 ;

__attribute__((used)) static void FUNC_4(void)
{
 struct zip64_dir_trailer VAR_7;
 struct zip64_dir_trailer_locator VAR_8;

 FUNC_1(VAR_7, 0x06064b50);
 FUNC_2(VAR_7, VAR_1);
 FUNC_0(VAR_7, VAR_3);
 FUNC_0(VAR_7, 45);
 FUNC_1(VAR_7, 0);
 FUNC_1(VAR_7, 0);
 FUNC_2(VAR_7, VAR_5);
 FUNC_2(VAR_7, VAR_5);
 FUNC_2(VAR_7, VAR_4.len);
 FUNC_2(VAR_7, VAR_6);

 FUNC_1(VAR_8, 0x07064b50);
 FUNC_1(VAR_8, 0);
 FUNC_2(VAR_8, VAR_6 + VAR_4.len);
 FUNC_1(VAR_8, 1);

 FUNC_3(1, &VAR_7, VAR_2);
 FUNC_3(1, &VAR_8, VAR_0);
}
