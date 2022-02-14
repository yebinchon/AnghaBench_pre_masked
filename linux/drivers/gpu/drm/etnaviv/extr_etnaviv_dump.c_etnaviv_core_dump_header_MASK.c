
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef void* u32 ;
struct etnaviv_dump_object_header {int file_size; void* file_offset; void* type; void* magic; } ;
struct core_dump_iterator {void* data; void* start; struct etnaviv_dump_object_header* hdr; } ;


 void* VAR_0 ;
 void* FUNC_0 (void*) ;

__attribute__((used)) static void FUNC_1(struct core_dump_iterator *VAR_1,
 u32 VAR_2, void *VAR_3)
{
 struct etnaviv_dump_object_header *VAR_4 = VAR_1->hdr;

 VAR_4->magic = FUNC_0(VAR_0);
 VAR_4->type = FUNC_0(VAR_2);
 VAR_4->file_offset = FUNC_0(VAR_1->data - VAR_1->start);
 VAR_4->file_size = FUNC_0(VAR_3 - VAR_1->data);

 VAR_1->hdr++;
 VAR_1->data += VAR_4->file_size;
}
