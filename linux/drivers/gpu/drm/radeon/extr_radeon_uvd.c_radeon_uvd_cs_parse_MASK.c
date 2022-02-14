
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


struct radeon_cs_parser {int idx; TYPE_1__* chunk_ib; int * chunk_relocs; } ;
struct radeon_cs_packet {int type; int count; } ;
struct TYPE_2__ {int length_dw; } ;


 int FUNC_0 (char*,...) ;
 int VAR_0 ;


 int FUNC_1 (struct radeon_cs_parser*,struct radeon_cs_packet*,int) ;
 int FUNC_2 (struct radeon_cs_parser*,struct radeon_cs_packet*,int*,int*,unsigned int*,int*) ;

int FUNC_3(struct radeon_cs_parser *VAR_1)
{
 struct radeon_cs_packet VAR_2;
 int VAR_3, VAR_4 = 0, VAR_5 = 0;


 bool VAR_6 = 0;


 unsigned VAR_7[] = {
  [0x00000000] = 2048,
  [0x00000001] = 32 * 1024 * 1024,
  [0x00000002] = 2048 * 1152 * 3,
  [0x00000003] = 2048,
 };

 if (VAR_1->chunk_ib->length_dw % 16) {
  FUNC_0("UVD IB length (%d) not 16 dwords aligned!\n",
     VAR_1->chunk_ib->length_dw);
  return -VAR_0;
 }

 if (VAR_1->chunk_relocs == ((void*)0)) {
  FUNC_0("No relocation chunk !\n");
  return -VAR_0;
 }


 do {
  VAR_3 = FUNC_1(VAR_1, &VAR_2, VAR_1->idx);
  if (VAR_3)
   return VAR_3;
  switch (VAR_2.type) {
  case 129:
   VAR_3 = FUNC_2(VAR_1, &VAR_2, &VAR_4, &VAR_5,
           VAR_7, &VAR_6);
   if (VAR_3)
    return VAR_3;
   break;
  case 128:
   VAR_1->idx += VAR_2.count + 2;
   break;
  default:
   FUNC_0("Unknown packet type %d !\n", VAR_2.type);
   return -VAR_0;
  }
 } while (VAR_1->idx < VAR_1->chunk_ib->length_dw);

 if (!VAR_6) {
  FUNC_0("UVD-IBs need a msg command!\n");
  return -VAR_0;
 }

 return 0;
}
