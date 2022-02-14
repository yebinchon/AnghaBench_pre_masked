
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct stat {int st_mode; } ;
struct flash_partition_entry {scalar_t__ base; scalar_t__ size; int * name; } ;
typedef int FILE ;


 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int FUNC_0 (int,int ,char*,...) ;
 int FUNC_1 (int *,size_t,struct flash_partition_entry*,char const*) ;
 int * FUNC_2 (char const*,char*) ;
 scalar_t__ FUNC_3 (int *,size_t,struct flash_partition_entry*,int,int ) ;
 scalar_t__ FUNC_4 (char const*,struct stat*) ;

__attribute__((used)) static int FUNC_5(const char *VAR_3, const char *VAR_4)
{
 struct flash_partition_entry VAR_5[16] = { 0 };
 size_t VAR_6 = 16;
 size_t VAR_7 = 0x1014;
 FILE *VAR_8;

 struct stat VAR_9;


 if (FUNC_4(VAR_3, &VAR_9)) {
  FUNC_0(1, VAR_2, "Can not read input firmware %s", VAR_3);
 }


 if (FUNC_4(VAR_4, &VAR_9)) {
  FUNC_0(1, VAR_2, "Failed to stat output directory %s", VAR_4);
 }

 if ((VAR_9.st_mode & VAR_1) != VAR_0) {
  FUNC_0(1, VAR_2, "Given output directory is not a directory %s", VAR_4);
 }

 VAR_8 = FUNC_2(VAR_3, "rb");

 if (FUNC_3(VAR_8, VAR_7, VAR_5, 16, 0) != 0) {
  FUNC_0(1, 0, "Error can not read the partition table (fwup-ptn)");
 }

 for (int VAR_10 = 0; VAR_10 < VAR_6; VAR_10++) {
  if (VAR_5[VAR_10].name == ((void*)0) &&
    VAR_5[VAR_10].base == 0 &&
    VAR_5[VAR_10].size == 0)
   continue;

  FUNC_1(VAR_8, VAR_7, &VAR_5[VAR_10], VAR_4);
 }

 return 0;
}
