
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


typedef int uint64_t ;
struct TYPE_2__ {int* ptr; } ;
struct radeon_cs_parser {TYPE_1__ ib; struct radeon_bo_list* relocs; struct radeon_cs_chunk* chunk_relocs; } ;
struct radeon_cs_chunk {unsigned int length_dw; } ;
struct radeon_bo_list {int gpu_offset; int robj; } ;


 int FUNC_0 (char*,unsigned int,...) ;
 int VAR_0 ;
 int FUNC_1 (int ) ;
 void* FUNC_2 (struct radeon_cs_parser*,int) ;

int FUNC_3(struct radeon_cs_parser *VAR_1, int VAR_2, int VAR_3,
   unsigned VAR_4)
{
 struct radeon_cs_chunk *VAR_5;
 struct radeon_bo_list *VAR_6;
 uint64_t VAR_7, VAR_8, VAR_9;
 unsigned VAR_10;

 VAR_5 = VAR_1->chunk_relocs;
 VAR_9 = FUNC_2(VAR_1, VAR_2);
 VAR_10 = FUNC_2(VAR_1, VAR_3);

 if (VAR_10 >= VAR_5->length_dw) {
  FUNC_0("Relocs at %d after relocations chunk end %d !\n",
     VAR_10, VAR_5->length_dw);
  return -VAR_0;
 }

 VAR_6 = &VAR_1->relocs[(VAR_10 / 4)];
 VAR_7 = VAR_6->gpu_offset;
 VAR_8 = VAR_7 + FUNC_1(VAR_6->robj);
 VAR_7 += VAR_9;

 VAR_1->ib.ptr[VAR_2] = VAR_7 & 0xFFFFFFFF;
 VAR_1->ib.ptr[VAR_3] = VAR_7 >> 32;

 if (VAR_8 <= VAR_7) {
  FUNC_0("invalid reloc offset %llX!\n", VAR_9);
  return -VAR_0;
 }
 if ((VAR_8 - VAR_7) < VAR_4) {
  FUNC_0("buffer to small (%d / %d)!\n",
   (unsigned)(VAR_8 - VAR_7), VAR_4);
  return -VAR_0;
 }

 return 0;
}
