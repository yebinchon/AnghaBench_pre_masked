
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct flash_partition_entry {unsigned long base; unsigned long size; int * name; } ;


 int * FUNC_0 (int,scalar_t__) ;
 int FUNC_1 (int,int ,char*) ;
 int FUNC_2 (char*,char const*,scalar_t__) ;
 scalar_t__ FUNC_3 (char const*) ;

__attribute__((used)) static int FUNC_4(
  struct flash_partition_entry *VAR_0,
  size_t VAR_1,
  const char *VAR_2,
  unsigned long VAR_3,
  unsigned long VAR_4)
{
 int VAR_5;

 for (VAR_5 = 0; VAR_5 < VAR_1; VAR_5++, VAR_0++) {
  if (VAR_0->name == ((void*)0) &&
    VAR_0->base == 0 &&
    VAR_0->size == 0)
   break;
 }

 if (VAR_5 == VAR_1) {
  FUNC_1(1, 0, "No free flash part entry available.");
 }

 VAR_0->name = FUNC_0(1, FUNC_3(VAR_2) + 1);
 if (!VAR_0->name) {
  FUNC_1(1, 0, "Unable to allocate memory");
 }

 FUNC_2((char *)VAR_0->name, VAR_2, FUNC_3(VAR_2));
 VAR_0->base = VAR_3;
 VAR_0->size = VAR_4;

 return 0;
}
