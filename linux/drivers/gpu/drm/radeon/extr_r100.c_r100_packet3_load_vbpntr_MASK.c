
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_4__ TYPE_2__ ;
typedef struct TYPE_3__ TYPE_1__ ;


typedef int uint32_t ;
typedef int u32 ;
struct TYPE_3__ {int* ptr; } ;
struct radeon_cs_parser {scalar_t__ track; TYPE_1__ ib; } ;
struct radeon_cs_packet {int opcode; } ;
struct radeon_bo_list {int robj; scalar_t__ gpu_offset; } ;
struct r100_cs_track {unsigned int num_arrays; TYPE_2__* arrays; } ;
struct TYPE_4__ {int esize; int robj; } ;


 int FUNC_0 (char*,int ) ;
 int VAR_0 ;
 int FUNC_1 (struct radeon_cs_parser*,struct radeon_cs_packet*) ;
 int FUNC_2 (struct radeon_cs_parser*,struct radeon_bo_list**,int ) ;
 int FUNC_3 (struct radeon_cs_parser*,int) ;

int FUNC_4(struct radeon_cs_parser *VAR_1,
        struct radeon_cs_packet *VAR_2,
        int VAR_3)
{
 unsigned VAR_4, VAR_5;
 struct radeon_bo_list *VAR_6;
 struct r100_cs_track *VAR_7;
 int VAR_8 = 0;
 volatile uint32_t *VAR_9;
 u32 VAR_10;

 VAR_9 = VAR_1->ib.ptr;
 VAR_7 = (struct r100_cs_track *)VAR_1->track;
 VAR_4 = FUNC_3(VAR_1, VAR_3++) & 0x1F;
 if (VAR_4 > 16) {
     FUNC_0("Only 16 vertex buffers are allowed %d\n",
        VAR_2->opcode);
     FUNC_1(VAR_1, VAR_2);
     return -VAR_0;
 }
 VAR_7->num_arrays = VAR_4;
 for (VAR_5 = 0; VAR_5 < (VAR_4 - 1); VAR_5+=2, VAR_3+=3) {
  VAR_8 = FUNC_2(VAR_1, &VAR_6, 0);
  if (VAR_8) {
   FUNC_0("No reloc for packet3 %d\n",
      VAR_2->opcode);
   FUNC_1(VAR_1, VAR_2);
   return VAR_8;
  }
  VAR_10 = FUNC_3(VAR_1, VAR_3);
  VAR_9[VAR_3+1] = FUNC_3(VAR_1, VAR_3 + 1) + ((u32)VAR_6->gpu_offset);

  VAR_7->arrays[VAR_5 + 0].esize = VAR_10 >> 8;
  VAR_7->arrays[VAR_5 + 0].robj = VAR_6->robj;
  VAR_7->arrays[VAR_5 + 0].esize &= 0x7F;
  VAR_8 = FUNC_2(VAR_1, &VAR_6, 0);
  if (VAR_8) {
   FUNC_0("No reloc for packet3 %d\n",
      VAR_2->opcode);
   FUNC_1(VAR_1, VAR_2);
   return VAR_8;
  }
  VAR_9[VAR_3+2] = FUNC_3(VAR_1, VAR_3 + 2) + ((u32)VAR_6->gpu_offset);
  VAR_7->arrays[VAR_5 + 1].robj = VAR_6->robj;
  VAR_7->arrays[VAR_5 + 1].esize = VAR_10 >> 24;
  VAR_7->arrays[VAR_5 + 1].esize &= 0x7F;
 }
 if (VAR_4 & 1) {
  VAR_8 = FUNC_2(VAR_1, &VAR_6, 0);
  if (VAR_8) {
   FUNC_0("No reloc for packet3 %d\n",
       VAR_2->opcode);
   FUNC_1(VAR_1, VAR_2);
   return VAR_8;
  }
  VAR_10 = FUNC_3(VAR_1, VAR_3);
  VAR_9[VAR_3+1] = FUNC_3(VAR_1, VAR_3 + 1) + ((u32)VAR_6->gpu_offset);
  VAR_7->arrays[VAR_5 + 0].robj = VAR_6->robj;
  VAR_7->arrays[VAR_5 + 0].esize = VAR_10 >> 8;
  VAR_7->arrays[VAR_5 + 0].esize &= 0x7F;
 }
 return VAR_8;
}
