
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int uint32_t ;
struct radeon_device {int family; } ;
struct radeon_cs_parser {struct radeon_device* rdev; struct radeon_cs_chunk* chunk_ib; } ;
struct radeon_cs_packet {unsigned int idx; int count; int type; int opcode; int reg; scalar_t__ one_reg_wr; } ;
struct radeon_cs_chunk {unsigned int length_dw; } ;


 int VAR_0 ;
 int FUNC_0 (char*,int,unsigned int,...) ;
 int VAR_1 ;
 int FUNC_1 (int ) ;
 int FUNC_2 (int ) ;
 scalar_t__ FUNC_3 (int ) ;
 int FUNC_4 (int ) ;
 int FUNC_5 (int ) ;
 int FUNC_6 (int ) ;



 int FUNC_7 (char*,int ) ;
 int FUNC_8 (struct radeon_cs_parser*,int) ;

int FUNC_9(struct radeon_cs_parser *VAR_2,
      struct radeon_cs_packet *VAR_3,
      unsigned VAR_4)
{
 struct radeon_cs_chunk *VAR_5 = VAR_2->chunk_ib;
 struct radeon_device *VAR_6 = VAR_2->rdev;
 uint32_t VAR_7;
 int VAR_8 = 0, VAR_9;

 if (VAR_4 >= VAR_5->length_dw) {
  FUNC_0("Can not parse packet at %d after CS end %d !\n",
     VAR_4, VAR_5->length_dw);
  return -VAR_1;
 }
 VAR_7 = FUNC_8(VAR_2, VAR_4);
 VAR_3->idx = VAR_4;
 VAR_3->type = FUNC_6(VAR_7);
 VAR_3->count = FUNC_5(VAR_7);
 VAR_3->one_reg_wr = 0;
 switch (VAR_3->type) {
 case 130:
  if (VAR_6->family < VAR_0) {
   VAR_3->reg = FUNC_1(VAR_7);
   VAR_3->one_reg_wr =
    FUNC_3(VAR_7);
  } else
   VAR_3->reg = FUNC_2(VAR_7);
  break;
 case 128:
  VAR_3->opcode = FUNC_4(VAR_7);
  break;
 case 129:
  VAR_3->count = -1;
  break;
 default:
  FUNC_0("Unknown packet type %d at %d !\n", VAR_3->type, VAR_4);
  VAR_8 = -VAR_1;
  goto dump_ib;
 }
 if ((VAR_3->count + 1 + VAR_3->idx) >= VAR_5->length_dw) {
  FUNC_0("Packet (%d:%d:%d) end after CS buffer (%d) !\n",
     VAR_3->idx, VAR_3->type, VAR_3->count, VAR_5->length_dw);
  VAR_8 = -VAR_1;
  goto dump_ib;
 }
 return 0;

dump_ib:
 for (VAR_9 = 0; VAR_9 < VAR_5->length_dw; VAR_9++) {
  if (VAR_9 == VAR_4)
   FUNC_7("\t0x%08x <---\n", FUNC_8(VAR_2, VAR_9));
  else
   FUNC_7("\t0x%08x\n", FUNC_8(VAR_2, VAR_9));
 }
 return VAR_8;
}
