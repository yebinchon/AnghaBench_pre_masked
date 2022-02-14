
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int uint32_t ;
struct atom_data_revision {int major; int minor; } ;
struct atom_common_table_header {scalar_t__ content_revision; scalar_t__ format_revision; } ;



__attribute__((used)) static void FUNC_0(
 struct atom_common_table_header *VAR_0,
 struct atom_data_revision *VAR_1)
{
 if (!VAR_1)
  return;


 VAR_1->major = 0;
 VAR_1->minor = 0;

 if (!VAR_0)
  return;

 VAR_1->major =
   (uint32_t) VAR_0->format_revision & 0x3f;
 VAR_1->minor =
   (uint32_t) VAR_0->content_revision & 0x3f;
}
