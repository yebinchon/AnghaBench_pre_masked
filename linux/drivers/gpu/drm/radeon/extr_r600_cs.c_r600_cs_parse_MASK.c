
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_12__ TYPE_6__ ;
typedef struct TYPE_11__ TYPE_5__ ;
typedef struct TYPE_10__ TYPE_4__ ;
typedef struct TYPE_9__ TYPE_3__ ;
typedef struct TYPE_8__ TYPE_2__ ;
typedef struct TYPE_7__ TYPE_1__ ;


struct TYPE_12__ {int length_dw; int * ptr; } ;
struct radeon_cs_parser {struct r600_cs_track* track; TYPE_6__ ib; int idx; TYPE_5__* chunk_ib; TYPE_4__* rdev; } ;
struct radeon_cs_packet {int type; scalar_t__ count; } ;
struct r600_cs_track {int group_size; int nbanks; int npipes; } ;
struct TYPE_11__ {int length_dw; } ;
struct TYPE_8__ {int tiling_group_size; int tiling_nbanks; int tiling_npipes; } ;
struct TYPE_7__ {int tiling_group_size; int tiling_nbanks; int tiling_npipes; } ;
struct TYPE_9__ {TYPE_2__ rv770; TYPE_1__ r600; } ;
struct TYPE_10__ {scalar_t__ family; TYPE_3__ config; } ;


 scalar_t__ VAR_0 ;
 scalar_t__ VAR_1 ;
 int FUNC_0 (char*,int) ;
 int VAR_2 ;
 int VAR_3 ;
 int VAR_4 ;



 int FUNC_1 (struct r600_cs_track*) ;
 struct r600_cs_track* FUNC_2 (int,int ) ;
 int FUNC_3 (int) ;
 int FUNC_4 (char*,int,int ) ;
 int FUNC_5 (struct radeon_cs_parser*,struct radeon_cs_packet*) ;
 int FUNC_6 (struct r600_cs_track*) ;
 int FUNC_7 (struct radeon_cs_parser*,struct radeon_cs_packet*) ;
 int FUNC_8 (struct radeon_cs_parser*,struct radeon_cs_packet*,int ) ;

int FUNC_9(struct radeon_cs_parser *VAR_5)
{
 struct radeon_cs_packet VAR_6;
 struct r600_cs_track *VAR_7;
 int VAR_8;

 if (VAR_5->track == ((void*)0)) {

  VAR_7 = FUNC_2(sizeof(*VAR_7), VAR_4);
  if (VAR_7 == ((void*)0))
   return -VAR_3;
  FUNC_6(VAR_7);
  if (VAR_5->rdev->family < VAR_1) {
   VAR_7->npipes = VAR_5->rdev->config.r600.tiling_npipes;
   VAR_7->nbanks = VAR_5->rdev->config.r600.tiling_nbanks;
   VAR_7->group_size = VAR_5->rdev->config.r600.tiling_group_size;
  } else if (VAR_5->rdev->family <= VAR_0) {
   VAR_7->npipes = VAR_5->rdev->config.rv770.tiling_npipes;
   VAR_7->nbanks = VAR_5->rdev->config.rv770.tiling_nbanks;
   VAR_7->group_size = VAR_5->rdev->config.rv770.tiling_group_size;
  }
  VAR_5->track = VAR_7;
 }
 do {
  VAR_8 = FUNC_8(VAR_5, &VAR_6, VAR_5->idx);
  if (VAR_8) {
   FUNC_1(VAR_5->track);
   VAR_5->track = ((void*)0);
   return VAR_8;
  }
  VAR_5->idx += VAR_6.count + 2;
  switch (VAR_6.type) {
  case 130:
   VAR_8 = FUNC_5(VAR_5, &VAR_6);
   break;
  case 129:
   break;
  case 128:
   VAR_8 = FUNC_7(VAR_5, &VAR_6);
   break;
  default:
   FUNC_0("Unknown packet type %d !\n", VAR_6.type);
   FUNC_1(VAR_5->track);
   VAR_5->track = ((void*)0);
   return -VAR_2;
  }
  if (VAR_8) {
   FUNC_1(VAR_5->track);
   VAR_5->track = ((void*)0);
   return VAR_8;
  }
 } while (VAR_5->idx < VAR_5->chunk_ib->length_dw);






 FUNC_1(VAR_5->track);
 VAR_5->track = ((void*)0);
 return 0;
}
