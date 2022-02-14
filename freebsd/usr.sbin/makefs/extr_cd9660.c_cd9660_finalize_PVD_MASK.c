
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_13__ TYPE_6__ ;
typedef struct TYPE_12__ TYPE_5__ ;
typedef struct TYPE_11__ TYPE_4__ ;
typedef struct TYPE_10__ TYPE_3__ ;
typedef struct TYPE_9__ TYPE_2__ ;
typedef struct TYPE_8__ TYPE_1__ ;


typedef int u_char ;
typedef int time_t ;
struct TYPE_8__ {int* root_directory_record; int* file_structure_version; scalar_t__ effective_date; scalar_t__* expiration_date; scalar_t__ modification_date; scalar_t__ creation_date; int bibliographic_file_id; int abstract_file_id; int copyright_file_id; int application_id; int preparer_id; int publisher_id; int volume_set_id; int system_id; int volume_id; scalar_t__ type_m_path_table; scalar_t__ type_l_path_table; scalar_t__ path_table_size; scalar_t__ logical_block_size; scalar_t__ volume_sequence_number; scalar_t__ volume_set_size; scalar_t__ volume_space_size; } ;
struct TYPE_11__ {int sectorSize; TYPE_3__* rootNode; TYPE_1__ primaryDescriptor; int primaryBigEndianTableSector; int primaryLittleEndianTableSector; int pathTableLength; int totalSectors; } ;
typedef TYPE_4__ iso9660_disk ;
struct TYPE_13__ {int date; } ;
struct TYPE_12__ {int st_mtime; scalar_t__ st_ino; } ;
struct TYPE_10__ {TYPE_2__* dot_record; } ;
struct TYPE_9__ {TYPE_6__* isoDirRecord; } ;


 int FUNC_0 (int ,int *) ;
 int FUNC_1 (int ,int *) ;
 int FUNC_2 (int ,unsigned char*) ;
 int FUNC_3 (int,unsigned char*) ;
 int FUNC_4 (int ,int) ;
 int FUNC_5 (scalar_t__*,int ) ;
 int FUNC_6 (unsigned char*,int ) ;
 int FUNC_7 (int ,int ) ;
 int FUNC_8 (int*,TYPE_6__*,int) ;
 int FUNC_9 (scalar_t__*,int ,int) ;
 TYPE_5__ VAR_0 ;
 int FUNC_10 (int *) ;

__attribute__((used)) static void
FUNC_11(iso9660_disk *VAR_1)
{
 time_t VAR_2 = VAR_0.st_ino ? VAR_0.st_mtime : FUNC_10(((void*)0));


 FUNC_8(VAR_1->primaryDescriptor.root_directory_record,
  VAR_1->rootNode->dot_record->isoDirRecord, 34);


 VAR_1->primaryDescriptor.root_directory_record[0] = 34;


 FUNC_2(VAR_1->totalSectors,
     (unsigned char *)VAR_1->primaryDescriptor.volume_space_size);
 FUNC_3(1,
     (unsigned char *)VAR_1->primaryDescriptor.volume_set_size);
 FUNC_3(1,
     (unsigned char *)
  VAR_1->primaryDescriptor.volume_sequence_number);
 FUNC_3(VAR_1->sectorSize,
     (unsigned char *)
  VAR_1->primaryDescriptor.logical_block_size);
 FUNC_2(VAR_1->pathTableLength,
     (unsigned char *)VAR_1->primaryDescriptor.path_table_size);

 FUNC_0(VAR_1->primaryLittleEndianTableSector,
  (u_char *)VAR_1->primaryDescriptor.type_l_path_table);
 FUNC_1(VAR_1->primaryBigEndianTableSector,
  (u_char *)VAR_1->primaryDescriptor.type_m_path_table);

 VAR_1->primaryDescriptor.file_structure_version[0] = 1;


 FUNC_4(VAR_1->primaryDescriptor.volume_id, 32);
 FUNC_4(VAR_1->primaryDescriptor.system_id, 32);
 FUNC_4(VAR_1->primaryDescriptor.volume_set_id,
     128);
 FUNC_4(VAR_1->primaryDescriptor.publisher_id,
     128);
 FUNC_4(VAR_1->primaryDescriptor.preparer_id,
     128);
 FUNC_4(VAR_1->primaryDescriptor.application_id,
     128);
 FUNC_4(
     VAR_1->primaryDescriptor.copyright_file_id, 37);
 FUNC_4(
  VAR_1->primaryDescriptor.abstract_file_id, 37);
 FUNC_4(
  VAR_1->primaryDescriptor.bibliographic_file_id, 37);


 FUNC_6(
     (unsigned char *)VAR_1->primaryDescriptor.creation_date,
     VAR_2);
 FUNC_6(
     (unsigned char *)VAR_1->primaryDescriptor.modification_date,
     VAR_2);






 FUNC_9(VAR_1->primaryDescriptor.expiration_date, '0', 16);
 VAR_1->primaryDescriptor.expiration_date[16] = 0;

 FUNC_6(
     (unsigned char *)VAR_1->primaryDescriptor.effective_date,
     VAR_2);

 FUNC_7(VAR_1->rootNode->dot_record->isoDirRecord->date,
     VAR_2);
}
