
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef size_t uint64_t ;
struct tree {int dummy; } ;
struct revindex_entry {int dummy; } ;
struct packed_git {size_t pack_size; size_t index_size; } ;
struct object_entry {int dummy; } ;
struct object {int dummy; } ;
struct blob {int dummy; } ;


 unsigned long FUNC_0 () ;
 scalar_t__ VAR_0 ;
 scalar_t__ VAR_1 ;

__attribute__((used)) static uint64_t FUNC_1(struct packed_git *VAR_2)
{
 unsigned long VAR_3 = FUNC_0();
 size_t VAR_4, VAR_5;

 if (!VAR_2 || !VAR_3)
  return 0;







 VAR_4 = VAR_2->pack_size + VAR_2->index_size;

 VAR_5 = sizeof(struct object_entry) * VAR_3;




 VAR_5 += sizeof(struct blob) * VAR_3 / 2;




 VAR_5 += sizeof(struct tree) * VAR_3 / 2;

 VAR_5 += sizeof(struct object *) * VAR_3;

 VAR_5 += sizeof(struct revindex_entry) * VAR_3;




 VAR_5 += VAR_0;

 VAR_5 += VAR_1;

 return VAR_4 + VAR_5;
}
