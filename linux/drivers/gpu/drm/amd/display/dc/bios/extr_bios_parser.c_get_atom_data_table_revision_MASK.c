
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef void* uint32_t ;
struct atom_data_revision {void* minor; void* major; } ;
typedef int ATOM_COMMON_TABLE_HEADER ;


 scalar_t__ FUNC_0 (int *) ;
 scalar_t__ FUNC_1 (int *) ;

__attribute__((used)) static void FUNC_2(
 ATOM_COMMON_TABLE_HEADER *VAR_0,
 struct atom_data_revision *VAR_1)
{
 if (!VAR_1)
  return;


 VAR_1->major = 0;
 VAR_1->minor = 0;

 if (!VAR_0)
  return;

 VAR_1->major =
   (uint32_t) FUNC_0(VAR_0);
 VAR_1->minor =
   (uint32_t) FUNC_1(VAR_0);
}
