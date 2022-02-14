
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct flash_partition_entry {char* name; } ;
typedef int FILE ;


 int VAR_0 ;
 int VAR_1 ;
 int FUNC_0 (int,int ,char*,char*) ;
 int FUNC_1 (int *) ;
 int * FUNC_2 (char*,char*) ;
 int FUNC_3 (char*,int,char*,char const*,char*) ;
 int FUNC_4 (int *,size_t,struct flash_partition_entry*,int *) ;

__attribute__((used)) static int FUNC_5(FILE *VAR_2, size_t VAR_3, struct flash_partition_entry *VAR_4, const char *VAR_5)
{
 FILE *VAR_6;
 char VAR_7[VAR_0];

 FUNC_3(VAR_7, VAR_0, "%s/%s", VAR_5, VAR_4->name);
 VAR_6 = FUNC_2(VAR_7, "wb+");
 if (VAR_6 == ((void*)0)) {
  FUNC_0(1, VAR_1, "Can not open output file %s", VAR_7);
 }

 FUNC_4(VAR_2, VAR_3, VAR_4, VAR_6);

 FUNC_1(VAR_6);

 return 0;
}
