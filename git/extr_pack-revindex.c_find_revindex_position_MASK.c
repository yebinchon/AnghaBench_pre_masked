
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct revindex_entry {scalar_t__ offset; } ;
struct packed_git {int num_objects; struct revindex_entry* revindex; } ;
typedef scalar_t__ off_t ;


 int FUNC_0 (char*) ;

int FUNC_1(struct packed_git *VAR_0, off_t VAR_1)
{
 int VAR_2 = 0;
 int VAR_3 = VAR_0->num_objects + 1;
 const struct revindex_entry *VAR_4 = VAR_0->revindex;

 do {
  const unsigned VAR_5 = VAR_2 + (VAR_3 - VAR_2) / 2;
  if (VAR_4[VAR_5].offset == VAR_1) {
   return VAR_5;
  } else if (VAR_1 < VAR_4[VAR_5].offset)
   VAR_3 = VAR_5;
  else
   VAR_2 = VAR_5 + 1;
 } while (VAR_2 < VAR_3);

 FUNC_0("bad offset for revindex");
 return -1;
}
