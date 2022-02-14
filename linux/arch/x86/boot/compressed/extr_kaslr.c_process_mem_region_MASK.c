
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_3__ TYPE_1__ ;


struct mem_vector {unsigned long long start; unsigned long long size; } ;
struct TYPE_3__ {unsigned long long start; unsigned long long size; } ;


 scalar_t__ VAR_0 ;
 int FUNC_0 (struct mem_vector*,unsigned long long,unsigned long long) ;
 void* FUNC_1 (unsigned long long,unsigned long long,unsigned long long) ;
 int FUNC_2 (char*) ;
 TYPE_1__* VAR_1 ;
 int FUNC_3 (struct mem_vector*,TYPE_1__*) ;
 int VAR_2 ;
 scalar_t__ VAR_3 ;

__attribute__((used)) static bool FUNC_4(struct mem_vector *VAR_4,
          unsigned long long VAR_5,
          unsigned long long VAR_6)
{
 int VAR_7;




 if (!VAR_2) {
  FUNC_0(VAR_4, VAR_5, VAR_6);

  if (VAR_3 == VAR_0) {
   FUNC_2("Aborted e820/efi memmap scan (slot_areas full)!\n");
   return 1;
  }
  return 0;
 }
 return 0;
}
