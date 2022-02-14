
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_4__ TYPE_2__ ;
typedef struct TYPE_3__ TYPE_1__ ;


typedef size_t uint32_t ;
struct index_entry_offset_table {int nr; TYPE_1__* entries; } ;
struct index_entry_offset {int dummy; } ;
struct TYPE_4__ {size_t rawsz; } ;
struct TYPE_3__ {void* nr; void* offset; } ;


 scalar_t__ FUNC_0 (char const*) ;
 scalar_t__ VAR_0 ;
 size_t VAR_1 ;
 int FUNC_1 (char*,int) ;
 void* FUNC_2 (char const*) ;
 TYPE_2__* VAR_2 ;
 struct index_entry_offset_table* FUNC_3 (int) ;

__attribute__((used)) static struct index_entry_offset_table *FUNC_4(const char *VAR_3, size_t VAR_4, size_t VAR_5)
{
 const char *VAR_6 = ((void*)0);
 uint32_t VAR_7, VAR_8;
 struct index_entry_offset_table *VAR_9;
 int VAR_10, VAR_11;


 if (!VAR_5)
  return ((void*)0);
 while (VAR_5 <= VAR_4 - VAR_2->rawsz - 8) {
  VAR_7 = FUNC_2(VAR_3 + VAR_5 + 4);
  if (FUNC_0((VAR_3 + VAR_5)) == VAR_0) {
   VAR_6 = VAR_3 + VAR_5 + 4 + 4;
   break;
  }
  VAR_5 += 8;
  VAR_5 += VAR_7;
 }
 if (!VAR_6)
  return ((void*)0);


 VAR_8 = FUNC_2(VAR_6);
 if (VAR_8 != VAR_1) {
  FUNC_1("invalid IEOT version %d", VAR_8);
  return ((void*)0);
 }
 VAR_6 += sizeof(uint32_t);


 VAR_11 = (VAR_7 - sizeof(uint32_t)) / (sizeof(uint32_t) + sizeof(uint32_t));
 if (!VAR_11) {
  FUNC_1("invalid number of IEOT entries %d", VAR_11);
  return ((void*)0);
 }
 VAR_9 = FUNC_3(sizeof(struct index_entry_offset_table)
         + (VAR_11 * sizeof(struct index_entry_offset)));
 VAR_9->nr = VAR_11;
 for (VAR_10 = 0; VAR_10 < VAR_11; VAR_10++) {
  VAR_9->entries[VAR_10].offset = FUNC_2(VAR_6);
  VAR_6 += sizeof(uint32_t);
  VAR_9->entries[VAR_10].nr = FUNC_2(VAR_6);
  VAR_6 += sizeof(uint32_t);
 }

 return VAR_9;
}
