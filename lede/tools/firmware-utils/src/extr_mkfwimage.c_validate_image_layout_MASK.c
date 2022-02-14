
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_7__ TYPE_4__ ;
typedef struct TYPE_6__ TYPE_2__ ;
typedef struct TYPE_5__ TYPE_1__ ;


struct TYPE_7__ {scalar_t__ st_size; } ;
struct TYPE_5__ {scalar_t__ partition_length; TYPE_4__ stats; int filename; int partition_name; } ;
typedef TYPE_1__ part_data_t ;
struct TYPE_6__ {int part_count; TYPE_1__* parts; } ;
typedef TYPE_2__ image_info_t ;


 int FUNC_0 (char*,int,...) ;
 int VAR_0 ;
 scalar_t__ FUNC_1 (int ,TYPE_4__*) ;
 int FUNC_2 (int ) ;

__attribute__((used)) static int FUNC_3(image_info_t* VAR_1)
{
 int VAR_2;

 if (VAR_1->part_count == 0 || VAR_1->part_count > VAR_0)
 {
  FUNC_0("Invalid part count '%d'\n", VAR_1->part_count);
  return -1;
 }

 for (VAR_2 = 0; VAR_2 < VAR_1->part_count; ++VAR_2)
 {
  part_data_t* VAR_3 = &VAR_1->parts[VAR_2];
  int VAR_4 = FUNC_2(VAR_3->partition_name);
  if (VAR_4 == 0 || VAR_4 > 16)
  {
   FUNC_0("Invalid partition name '%s' of the part %d\n",
     VAR_3->partition_name, VAR_2);
   return -1;
  }
  if (FUNC_1(VAR_3->filename, &VAR_3->stats) < 0)
  {
   FUNC_0("Couldn't stat file '%s' from part '%s'\n",
            VAR_3->filename, VAR_3->partition_name);
   return -2;
  }
  if (VAR_3->stats.st_size == 0)
  {
   FUNC_0("File '%s' from part '%s' is empty!\n",
            VAR_3->filename, VAR_3->partition_name);
   return -3;
  }
  if (VAR_3->stats.st_size > VAR_3->partition_length) {
   FUNC_0("File '%s' too big (%d) - max size: 0x%08X (exceeds %lu bytes)\n",
            VAR_3->filename, VAR_2, VAR_3->partition_length,
     VAR_3->stats.st_size - VAR_3->partition_length);
   return -4;
  }
 }

 return 0;
}
