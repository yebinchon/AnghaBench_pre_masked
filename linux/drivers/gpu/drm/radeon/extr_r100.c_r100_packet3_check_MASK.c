
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_6__ TYPE_3__ ;
typedef struct TYPE_5__ TYPE_2__ ;
typedef struct TYPE_4__ TYPE_1__ ;


typedef int uint32_t ;
typedef int u32 ;
struct TYPE_4__ {int* ptr; } ;
struct radeon_cs_parser {int filp; TYPE_3__* rdev; scalar_t__ track; TYPE_1__ ib; } ;
struct radeon_cs_packet {int idx; int opcode; int count; } ;
struct radeon_bo_list {int robj; int gpu_offset; } ;
struct r100_cs_track {int num_arrays; int max_indx; int vap_vf_cntl; int immd_dwords; void* vtx_size; TYPE_2__* arrays; } ;
struct TYPE_6__ {int hyperz_filp; } ;
struct TYPE_5__ {void* esize; int robj; } ;


 int FUNC_0 (char*,...) ;
 int VAR_0 ;
 int FUNC_1 (TYPE_3__*,struct r100_cs_track*) ;
 int FUNC_2 (struct radeon_cs_parser*,struct radeon_cs_packet*,int ) ;
 void* FUNC_3 (int) ;
 int FUNC_4 (struct radeon_cs_parser*,struct radeon_cs_packet*,unsigned int) ;
 int FUNC_5 (struct radeon_cs_parser*,struct radeon_cs_packet*) ;
 int FUNC_6 (struct radeon_cs_parser*,struct radeon_bo_list**,int ) ;
 int FUNC_7 (struct radeon_cs_parser*,unsigned int) ;

__attribute__((used)) static int FUNC_8(struct radeon_cs_parser *VAR_1,
         struct radeon_cs_packet *VAR_2)
{
 struct radeon_bo_list *VAR_3;
 struct r100_cs_track *VAR_4;
 unsigned VAR_5;
 volatile uint32_t *VAR_6;
 int VAR_7;

 VAR_6 = VAR_1->ib.ptr;
 VAR_5 = VAR_2->idx + 1;
 VAR_4 = (struct r100_cs_track *)VAR_1->track;
 switch (VAR_2->opcode) {
 case 130:
  VAR_7 = FUNC_4(VAR_1, VAR_2, VAR_5);
  if (VAR_7)
   return VAR_7;
  break;
 case 129:
  VAR_7 = FUNC_6(VAR_1, &VAR_3, 0);
  if (VAR_7) {
   FUNC_0("No reloc for packet3 %d\n", VAR_2->opcode);
   FUNC_5(VAR_1, VAR_2);
   return VAR_7;
  }
  VAR_6[VAR_5+1] = FUNC_7(VAR_1, VAR_5+1) + ((u32)VAR_3->gpu_offset);
  VAR_7 = FUNC_2(VAR_1, VAR_2, VAR_3->robj);
  if (VAR_7) {
   return VAR_7;
  }
  break;
 case 0x23:

  VAR_7 = FUNC_6(VAR_1, &VAR_3, 0);
  if (VAR_7) {
   FUNC_0("No reloc for packet3 %d\n", VAR_2->opcode);
   FUNC_5(VAR_1, VAR_2);
   return VAR_7;
  }
  VAR_6[VAR_5] = FUNC_7(VAR_1, VAR_5) + ((u32)VAR_3->gpu_offset);
  VAR_4->num_arrays = 1;
  VAR_4->vtx_size = FUNC_3(FUNC_7(VAR_1, VAR_5 + 2));

  VAR_4->arrays[0].robj = VAR_3->robj;
  VAR_4->arrays[0].esize = VAR_4->vtx_size;

  VAR_4->max_indx = FUNC_7(VAR_1, VAR_5+1);

  VAR_4->vap_vf_cntl = FUNC_7(VAR_1, VAR_5+3);
  VAR_4->immd_dwords = VAR_2->count - 1;
  VAR_7 = FUNC_1(VAR_1->rdev, VAR_4);
  if (VAR_7)
   return VAR_7;
  break;
 case 136:
  if (((FUNC_7(VAR_1, VAR_5 + 1) >> 4) & 0x3) != 3) {
   FUNC_0("PRIM_WALK must be 3 for IMMD draw\n");
   return -VAR_0;
  }
  VAR_4->vtx_size = FUNC_3(FUNC_7(VAR_1, VAR_5 + 0));
  VAR_4->vap_vf_cntl = FUNC_7(VAR_1, VAR_5 + 1);
  VAR_4->immd_dwords = VAR_2->count - 1;
  VAR_7 = FUNC_1(VAR_1->rdev, VAR_4);
  if (VAR_7)
   return VAR_7;
  break;

 case 135:
  if (((FUNC_7(VAR_1, VAR_5) >> 4) & 0x3) != 3) {
   FUNC_0("PRIM_WALK must be 3 for IMMD draw\n");
   return -VAR_0;
  }
  VAR_4->vap_vf_cntl = FUNC_7(VAR_1, VAR_5);
  VAR_4->immd_dwords = VAR_2->count;
  VAR_7 = FUNC_1(VAR_1->rdev, VAR_4);
  if (VAR_7)
   return VAR_7;
  break;

 case 131:
  VAR_4->vap_vf_cntl = FUNC_7(VAR_1, VAR_5);
  VAR_7 = FUNC_1(VAR_1->rdev, VAR_4);
  if (VAR_7)
   return VAR_7;
  break;

 case 133:
  VAR_4->vap_vf_cntl = FUNC_7(VAR_1, VAR_5);
  VAR_7 = FUNC_1(VAR_1->rdev, VAR_4);
  if (VAR_7)
   return VAR_7;
  break;

 case 132:
  VAR_4->vap_vf_cntl = FUNC_7(VAR_1, VAR_5 + 1);
  VAR_7 = FUNC_1(VAR_1->rdev, VAR_4);
  if (VAR_7)
   return VAR_7;
  break;

 case 134:
  VAR_4->vap_vf_cntl = FUNC_7(VAR_1, VAR_5 + 1);
  VAR_7 = FUNC_1(VAR_1->rdev, VAR_4);
  if (VAR_7)
   return VAR_7;
  break;

 case 138:
 case 137:
  if (VAR_1->rdev->hyperz_filp != VAR_1->filp)
   return -VAR_0;
  break;
 case 128:
  break;
 default:
  FUNC_0("Packet3 opcode %x not supported\n", VAR_2->opcode);
  return -VAR_0;
 }
 return 0;
}
