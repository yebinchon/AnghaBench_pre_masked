
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


typedef int uint8_t ;
typedef int uint16_t ;
struct tffs_key_name_table {int size; TYPE_1__* entries; } ;
struct tffs_entry {int dummy; } ;
struct TYPE_2__ {char* val; int * id; } ;


 int VAR_0 ;
 int VAR_1 ;
 scalar_t__ FUNC_0 (int *,int ,struct tffs_entry*) ;
 int FUNC_1 (int ,char*) ;
 int FUNC_2 (struct tffs_entry*) ;
 int FUNC_3 (char*,...) ;
 int VAR_2 ;
 int FUNC_4 (int ) ;

__attribute__((used)) static int FUNC_5(uint8_t *VAR_3,
        struct tffs_key_name_table *VAR_4)
{
 int VAR_5, VAR_6 = 0;
 uint16_t VAR_7;
 struct tffs_entry VAR_8;

 for (VAR_5 = 0; VAR_5 < VAR_4->size; VAR_5++) {
  VAR_7 = FUNC_4(*VAR_4->entries[VAR_5].id);

  if (FUNC_0(VAR_3, VAR_7, &VAR_8)) {
   FUNC_3("%s=", VAR_4->entries[VAR_5].val);
   FUNC_2(&VAR_8);
   FUNC_3("\n");
   VAR_6++;
  }
 }

 if (!VAR_6) {
  FUNC_1(VAR_2, "ERROR: no values found!\n");
  return VAR_0;
 }

 return VAR_1;
}
