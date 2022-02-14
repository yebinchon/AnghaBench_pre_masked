
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef size_t uint32_t ;
struct packed_git {size_t* index_data; int index_version; } ;


 size_t FUNC_0 (size_t const) ;
 scalar_t__ FUNC_1 (struct packed_git*) ;

uint32_t FUNC_2(struct packed_git *VAR_0, uint32_t VAR_1)
{
 const uint32_t *VAR_2 = VAR_0->index_data;

 if (!VAR_2) {
  if (FUNC_1(VAR_0))
   return 0;
  VAR_2 = VAR_0->index_data;
 }

 if (VAR_0->index_version > 1) {
  VAR_2 += 2;
 }

 return FUNC_0(VAR_2[VAR_1]);
}
