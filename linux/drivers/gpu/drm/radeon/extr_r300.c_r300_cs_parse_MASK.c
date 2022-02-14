
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_8__ TYPE_4__ ;
typedef struct TYPE_7__ TYPE_3__ ;
typedef struct TYPE_6__ TYPE_2__ ;
typedef struct TYPE_5__ TYPE_1__ ;


struct radeon_cs_parser {TYPE_4__* rdev; int idx; TYPE_1__* chunk_ib; struct r100_cs_track* track; } ;
struct radeon_cs_packet {int type; scalar_t__ count; } ;
struct r100_cs_track {int dummy; } ;
struct TYPE_6__ {int reg_safe_bm_size; int reg_safe_bm; } ;
struct TYPE_7__ {TYPE_2__ r300; } ;
struct TYPE_8__ {TYPE_3__ config; } ;
struct TYPE_5__ {int length_dw; } ;


 int FUNC_0 (char*,int) ;
 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;



 struct r100_cs_track* FUNC_1 (int,int ) ;
 int FUNC_2 (struct radeon_cs_parser*,struct radeon_cs_packet*,int ,int ,int *) ;
 int FUNC_3 (TYPE_4__*,struct r100_cs_track*) ;
 int VAR_3 ;
 int FUNC_4 (struct radeon_cs_parser*,struct radeon_cs_packet*) ;
 int FUNC_5 (struct radeon_cs_parser*,struct radeon_cs_packet*,int ) ;

int FUNC_6(struct radeon_cs_parser *VAR_4)
{
 struct radeon_cs_packet VAR_5;
 struct r100_cs_track *VAR_6;
 int VAR_7;

 VAR_6 = FUNC_1(sizeof(*VAR_6), VAR_2);
 if (VAR_6 == ((void*)0))
  return -VAR_1;
 FUNC_3(VAR_4->rdev, VAR_6);
 VAR_4->track = VAR_6;
 do {
  VAR_7 = FUNC_5(VAR_4, &VAR_5, VAR_4->idx);
  if (VAR_7) {
   return VAR_7;
  }
  VAR_4->idx += VAR_5.count + 2;
  switch (VAR_5.type) {
  case 130:
   VAR_7 = FUNC_2(VAR_4, &VAR_5,
        VAR_4->rdev->config.r300.reg_safe_bm,
        VAR_4->rdev->config.r300.reg_safe_bm_size,
        &VAR_3);
   break;
  case 129:
   break;
  case 128:
   VAR_7 = FUNC_4(VAR_4, &VAR_5);
   break;
  default:
   FUNC_0("Unknown packet type %d !\n", VAR_5.type);
   return -VAR_0;
  }
  if (VAR_7) {
   return VAR_7;
  }
 } while (VAR_4->idx < VAR_4->chunk_ib->length_dw);
 return 0;
}
