
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


struct pstore {int valid; int version; struct disk_header* header_area; TYPE_1__* store; } ;
struct disk_header {void* chunk_size; void* version; void* valid; void* magic; } ;
struct TYPE_2__ {int chunk_size; } ;


 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int FUNC_0 (struct pstore*,struct disk_header*,int ,int ,int ,int) ;
 void* FUNC_1 (int) ;
 int FUNC_2 (struct disk_header*,int ,int) ;

__attribute__((used)) static int FUNC_3(struct pstore *VAR_3)
{
 struct disk_header *VAR_4;

 FUNC_2(VAR_3->header_area, 0, VAR_3->store->chunk_size << VAR_1);

 VAR_4 = VAR_3->header_area;
 VAR_4->magic = FUNC_1(VAR_2);
 VAR_4->valid = FUNC_1(VAR_3->valid);
 VAR_4->version = FUNC_1(VAR_3->version);
 VAR_4->chunk_size = FUNC_1(VAR_3->store->chunk_size);

 return FUNC_0(VAR_3, VAR_3->header_area, 0, VAR_0, 0, 1);
}
