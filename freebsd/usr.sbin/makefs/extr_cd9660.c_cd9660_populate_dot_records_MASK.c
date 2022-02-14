
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_13__ TYPE_8__ ;
typedef struct TYPE_12__ TYPE_4__ ;
typedef struct TYPE_11__ TYPE_3__ ;
typedef struct TYPE_10__ TYPE_2__ ;
typedef struct TYPE_9__ TYPE_1__ ;


struct TYPE_10__ {TYPE_3__* rootNode; } ;
typedef TYPE_2__ iso9660_disk ;
struct TYPE_11__ {TYPE_8__* dot_dot_record; TYPE_1__* parent; int isoDirRecord; int fileDataSector; TYPE_8__* dot_record; } ;
typedef TYPE_3__ cd9660node ;
struct TYPE_13__ {void* fileRecordSize; TYPE_4__* isoDirRecord; int fileDataSector; } ;
struct TYPE_12__ {int* name_len; int* name; int* length; } ;
struct TYPE_9__ {int isoDirRecord; int fileDataSector; } ;


 void* FUNC_0 (TYPE_2__*,TYPE_8__*) ;
 int FUNC_1 (TYPE_4__*,int ,int) ;

__attribute__((used)) static void
FUNC_2(iso9660_disk *VAR_0, cd9660node *VAR_1)
{
 VAR_1->dot_record->fileDataSector = VAR_1->fileDataSector;
 FUNC_1(VAR_1->dot_record->isoDirRecord,VAR_1->isoDirRecord, 34);
 VAR_1->dot_record->isoDirRecord->name_len[0] = 1;
 VAR_1->dot_record->isoDirRecord->name[0] = 0;
 VAR_1->dot_record->isoDirRecord->name[1] = 0;
 VAR_1->dot_record->isoDirRecord->length[0] = 34;
 VAR_1->dot_record->fileRecordSize =
     FUNC_0(VAR_0, VAR_1->dot_record);

 if (VAR_1 == VAR_0->rootNode) {
  VAR_1->dot_dot_record->fileDataSector = VAR_1->fileDataSector;
  FUNC_1(VAR_1->dot_dot_record->isoDirRecord,VAR_1->isoDirRecord,
      34);
 } else {
  VAR_1->dot_dot_record->fileDataSector =
      VAR_1->parent->fileDataSector;
  FUNC_1(VAR_1->dot_dot_record->isoDirRecord,
      VAR_1->parent->isoDirRecord,34);
 }
 VAR_1->dot_dot_record->isoDirRecord->name_len[0] = 1;
 VAR_1->dot_dot_record->isoDirRecord->name[0] = 1;
 VAR_1->dot_dot_record->isoDirRecord->name[1] = 0;
 VAR_1->dot_dot_record->isoDirRecord->length[0] = 34;
 VAR_1->dot_dot_record->fileRecordSize =
     FUNC_0(VAR_0, VAR_1->dot_dot_record);
}
