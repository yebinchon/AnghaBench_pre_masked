
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef size_t u32 ;
struct radeon_ib {size_t length_dw; int ring; int * ptr; int is_const_ib; } ;
struct radeon_device {int dev; } ;
struct radeon_cs_packet {size_t idx; int type; int count; int opcode; scalar_t__ one_reg_wr; } ;




 int VAR_0 ;
 int FUNC_0 (int ) ;
 int FUNC_1 (int ) ;
 int FUNC_2 (int ) ;




 int FUNC_3 (int ,char*,...) ;
 int FUNC_4 (char*,int ) ;
 int FUNC_5 (struct radeon_device*,int *,struct radeon_cs_packet*) ;
 int FUNC_6 (struct radeon_device*,int *,struct radeon_cs_packet*) ;
 int FUNC_7 (struct radeon_device*,int *,struct radeon_cs_packet*) ;

int FUNC_8(struct radeon_device *VAR_1, struct radeon_ib *VAR_2)
{
 int VAR_3 = 0;
 u32 VAR_4 = 0, VAR_5;
 struct radeon_cs_packet VAR_6;

 do {
  VAR_6.idx = VAR_4;
  VAR_6.type = FUNC_2(VAR_2->ptr[VAR_4]);
  VAR_6.count = FUNC_1(VAR_2->ptr[VAR_4]);
  VAR_6.one_reg_wr = 0;
  switch (VAR_6.type) {
  case 131:
   FUNC_3(VAR_1->dev, "Packet0 not allowed!\n");
   VAR_3 = -VAR_0;
   break;
  case 130:
   VAR_4 += 1;
   break;
  case 129:
   VAR_6.opcode = FUNC_0(VAR_2->ptr[VAR_4]);
   if (VAR_2->is_const_ib)
    VAR_3 = FUNC_5(VAR_1, VAR_2->ptr, &VAR_6);
   else {
    switch (VAR_2->ring) {
    case 128:
     VAR_3 = FUNC_7(VAR_1, VAR_2->ptr, &VAR_6);
     break;
    case 133:
    case 132:
     VAR_3 = FUNC_6(VAR_1, VAR_2->ptr, &VAR_6);
     break;
    default:
     FUNC_3(VAR_1->dev, "Non-PM4 ring %d !\n", VAR_2->ring);
     VAR_3 = -VAR_0;
     break;
    }
   }
   VAR_4 += VAR_6.count + 2;
   break;
  default:
   FUNC_3(VAR_1->dev, "Unknown packet type %d !\n", VAR_6.type);
   VAR_3 = -VAR_0;
   break;
  }
  if (VAR_3) {
   for (VAR_5 = 0; VAR_5 < VAR_2->length_dw; VAR_5++) {
    if (VAR_5 == VAR_4)
     FUNC_4("\t0x%08x <---\n", VAR_2->ptr[VAR_5]);
    else
     FUNC_4("\t0x%08x\n", VAR_2->ptr[VAR_5]);
   }
   break;
  }
 } while (VAR_4 < VAR_2->length_dw);

 return VAR_3;
}
