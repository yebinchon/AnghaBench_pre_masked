
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct partition_entry {int fs_Index; } ;
typedef int int32_t ;


 int FUNC_0 (char*,char const*,...) ;
 struct partition_entry* FUNC_1 (char const*) ;

void
FUNC_2(const char *VAR_0, int32_t VAR_1)
{
 struct partition_entry *VAR_2;

 if ((VAR_2 = FUNC_1(VAR_0)) == ((void*)0)) {
  FUNC_0("%s IS MISSING from hrPartitionTable", VAR_0);
  return;
 }
 FUNC_0("%s [FS index = %d] IS in hrPartitionTable", VAR_0, VAR_1);
 VAR_2->fs_Index = VAR_1;
}
