
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


typedef int u32 ;
struct TYPE_12__ {int length_dw; int * ptr; } ;
struct radeon_cs_parser {struct evergreen_cs_track* track; TYPE_6__ ib; int idx; TYPE_5__* chunk_ib; TYPE_4__* rdev; } ;
struct radeon_cs_packet {int type; scalar_t__ count; } ;
struct evergreen_cs_track {int npipes; int nbanks; int group_size; int row_size; void* reg_safe_bm; } ;
struct TYPE_11__ {int length_dw; } ;
struct TYPE_8__ {int tile_config; } ;
struct TYPE_7__ {int tile_config; } ;
struct TYPE_9__ {TYPE_2__ evergreen; TYPE_1__ cayman; } ;
struct TYPE_10__ {scalar_t__ family; TYPE_3__ config; } ;


 scalar_t__ FUNC_0 (void*) ;
 int FUNC_1 (int) ;
 scalar_t__ VAR_0 ;
 int FUNC_2 (char*,int) ;
 int VAR_1 ;
 int VAR_2 ;
 int VAR_3 ;



 scalar_t__ VAR_4 ;
 void* VAR_5 ;
 int FUNC_3 (struct radeon_cs_parser*,struct radeon_cs_packet*) ;
 int FUNC_4 (struct evergreen_cs_track*) ;
 int FUNC_5 (struct radeon_cs_parser*,struct radeon_cs_packet*) ;
 void* VAR_6 ;
 int FUNC_6 (struct evergreen_cs_track*) ;
 struct evergreen_cs_track* FUNC_7 (int,int ) ;
 int FUNC_8 (int) ;
 int FUNC_9 (char*,int,int ) ;
 int FUNC_10 (struct radeon_cs_parser*,struct radeon_cs_packet*,int ) ;

int FUNC_11(struct radeon_cs_parser *VAR_7)
{
 struct radeon_cs_packet VAR_8;
 struct evergreen_cs_track *VAR_9;
 u32 VAR_10;
 int VAR_11;

 if (VAR_7->track == ((void*)0)) {

  VAR_9 = FUNC_7(sizeof(*VAR_9), VAR_3);
  if (VAR_9 == ((void*)0))
   return -VAR_2;
  FUNC_4(VAR_9);
  if (VAR_7->rdev->family >= VAR_0) {
   VAR_10 = VAR_7->rdev->config.cayman.tile_config;
   VAR_9->reg_safe_bm = VAR_5;
  } else {
   VAR_10 = VAR_7->rdev->config.evergreen.tile_config;
   VAR_9->reg_safe_bm = VAR_6;
  }
  FUNC_1(FUNC_0(VAR_5) != VAR_4);
  FUNC_1(FUNC_0(VAR_6) != VAR_4);
  switch (VAR_10 & 0xf) {
  case 0:
   VAR_9->npipes = 1;
   break;
  case 1:
  default:
   VAR_9->npipes = 2;
   break;
  case 2:
   VAR_9->npipes = 4;
   break;
  case 3:
   VAR_9->npipes = 8;
   break;
  }

  switch ((VAR_10 & 0xf0) >> 4) {
  case 0:
   VAR_9->nbanks = 4;
   break;
  case 1:
  default:
   VAR_9->nbanks = 8;
   break;
  case 2:
   VAR_9->nbanks = 16;
   break;
  }

  switch ((VAR_10 & 0xf00) >> 8) {
  case 0:
   VAR_9->group_size = 256;
   break;
  case 1:
  default:
   VAR_9->group_size = 512;
   break;
  }

  switch ((VAR_10 & 0xf000) >> 12) {
  case 0:
   VAR_9->row_size = 1;
   break;
  case 1:
  default:
   VAR_9->row_size = 2;
   break;
  case 2:
   VAR_9->row_size = 4;
   break;
  }

  VAR_7->track = VAR_9;
 }
 do {
  VAR_11 = FUNC_10(VAR_7, &VAR_8, VAR_7->idx);
  if (VAR_11) {
   FUNC_6(VAR_7->track);
   VAR_7->track = ((void*)0);
   return VAR_11;
  }
  VAR_7->idx += VAR_8.count + 2;
  switch (VAR_8.type) {
  case 130:
   VAR_11 = FUNC_3(VAR_7, &VAR_8);
   break;
  case 129:
   break;
  case 128:
   VAR_11 = FUNC_5(VAR_7, &VAR_8);
   break;
  default:
   FUNC_2("Unknown packet type %d !\n", VAR_8.type);
   FUNC_6(VAR_7->track);
   VAR_7->track = ((void*)0);
   return -VAR_1;
  }
  if (VAR_11) {
   FUNC_6(VAR_7->track);
   VAR_7->track = ((void*)0);
   return VAR_11;
  }
 } while (VAR_7->idx < VAR_7->chunk_ib->length_dw);






 FUNC_6(VAR_7->track);
 VAR_7->track = ((void*)0);
 return 0;
}
