
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_14__ TYPE_5__ ;
typedef struct TYPE_13__ TYPE_4__ ;
typedef struct TYPE_12__ TYPE_3__ ;
typedef struct TYPE_11__ TYPE_2__ ;
typedef struct TYPE_10__ TYPE_1__ ;


struct TYPE_12__ {int* length; unsigned char* name; int parent_number; int first_sector; int * extended_attribute_length; } ;
typedef TYPE_3__ path_table_entry ;
typedef int off_t ;
struct TYPE_13__ {TYPE_5__* rootNode; int sectorSize; int pathTableLength; } ;
typedef TYPE_4__ iso9660_disk ;
struct TYPE_14__ {struct TYPE_14__* ptnext; TYPE_2__* parent; int fileDataSector; TYPE_1__* isoDirRecord; } ;
typedef TYPE_5__ cd9660node ;
struct TYPE_11__ {int ptnumber; } ;
struct TYPE_10__ {int* name_len; TYPE_3__* name; int * ext_attr_length; } ;
typedef int FILE ;


 int FUNC_0 (int ,int ) ;
 int VAR_0 ;
 int FUNC_1 (int,int ) ;
 int FUNC_2 (int,int ) ;
 int FUNC_3 (int ,int ) ;
 int FUNC_4 (int ,int ) ;
 int FUNC_5 (TYPE_4__*,int *,int ,unsigned char*,int) ;
 unsigned char* FUNC_6 (int,int ) ;
 int FUNC_7 (unsigned char*) ;
 int FUNC_8 (unsigned char*,TYPE_3__*,int) ;
 int FUNC_9 (TYPE_3__*,int ,int) ;

__attribute__((used)) static int
FUNC_10(iso9660_disk *VAR_1, FILE *VAR_2, off_t VAR_3,
    int VAR_4)
{
 int VAR_5 = FUNC_0(VAR_1->sectorSize,
     VAR_1->pathTableLength);
 unsigned char *VAR_6;
 unsigned char *VAR_7;
 int VAR_8, VAR_9;
 path_table_entry VAR_10;
 cd9660node *VAR_11;

 VAR_6 = FUNC_6(VAR_5, VAR_1->sectorSize);
 VAR_7 = VAR_6;

 VAR_11 = VAR_1->rootNode;

 while (VAR_11 != ((void*)0)) {
  FUNC_9(&VAR_10, 0, sizeof(path_table_entry));
  VAR_10.length[0] = VAR_11->isoDirRecord->name_len[0];
  VAR_10.extended_attribute_length[0] =
      VAR_11->isoDirRecord->ext_attr_length[0];
  FUNC_8(VAR_10.name, VAR_11->isoDirRecord->name,
      VAR_10.length[0] + 1);


  VAR_8 = VAR_10.length[0] + 8 + (VAR_10.length[0] & 0x01);


  if (VAR_4 == VAR_0) {
   FUNC_3(VAR_11->fileDataSector,
       VAR_10.first_sector);
   FUNC_1((VAR_11->parent == ((void*)0) ?
    1 : VAR_11->parent->ptnumber),
       VAR_10.parent_number);
  } else {
   FUNC_4(VAR_11->fileDataSector,
       VAR_10.first_sector);
   FUNC_2((VAR_11->parent == ((void*)0) ?
    1 : VAR_11->parent->ptnumber),
       VAR_10.parent_number);
  }


  FUNC_8(VAR_6, &VAR_10, VAR_8);
  VAR_6 += VAR_8;

  VAR_11 = VAR_11->ptnext;
 }

 VAR_9 = FUNC_5(VAR_1, VAR_2, VAR_3, VAR_7,
     VAR_5);
 FUNC_7(VAR_7);
 return VAR_9;
}
