
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct flash_partition_entry {int size; scalar_t__ base; } ;
typedef int buf ;
typedef int FILE ;


 int VAR_0 ;
 int VAR_1 ;
 int FUNC_0 (int,int ,char*) ;
 scalar_t__ FUNC_1 (char*,size_t,int,int *) ;
 int FUNC_2 (int *,scalar_t__,int ) ;
 scalar_t__ FUNC_3 (char*,size_t,int,int *) ;

__attribute__((used)) static void FUNC_4(
  FILE *VAR_2,
  size_t VAR_3,
  struct flash_partition_entry *VAR_4,
  FILE *VAR_5)
{
 char VAR_6[4096];
 size_t VAR_7;

 FUNC_2(VAR_2, VAR_4->base + VAR_3, VAR_0);

 for (VAR_7 = 0; sizeof(VAR_6) + VAR_7 <= VAR_4->size; VAR_7 += sizeof(VAR_6)) {
  if (FUNC_1(VAR_6, sizeof(VAR_6), 1, VAR_2) < 0)
   FUNC_0(1, VAR_1, "Can not read partition from input_file");

  if (FUNC_3(VAR_6, sizeof(VAR_6), 1, VAR_5) < 0)
   FUNC_0(1, VAR_1, "Can not write partition to output_file");
 }

 if (VAR_7 < VAR_4->size) {
  VAR_7 = VAR_4->size - VAR_7;
  if (FUNC_1(VAR_6, VAR_7, 1, VAR_2) < 0)
   FUNC_0(1, VAR_1, "Can not read partition from input_file");
  if (FUNC_3(VAR_6, VAR_7, 1, VAR_5) < 0)
   FUNC_0(1, VAR_1, "Can not write partition to output_file");
 }
}
