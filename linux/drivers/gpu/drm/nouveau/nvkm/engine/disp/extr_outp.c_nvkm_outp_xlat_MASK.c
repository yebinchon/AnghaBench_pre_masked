
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


struct TYPE_2__ {int location; int type; } ;
struct nvkm_outp {TYPE_1__ info; } ;
typedef enum nvkm_ior_type { ____Placeholder_nvkm_ior_type } nvkm_ior_type ;
typedef enum nvkm_ior_proto { ____Placeholder_nvkm_ior_proto } nvkm_ior_proto ;


 int VAR_0 ;
 int VAR_1 ;





 int VAR_2 ;
 int VAR_3 ;
 int VAR_4 ;
 int VAR_5 ;
 int VAR_6 ;
 int VAR_7 ;
 int VAR_8 ;
 int FUNC_0 (int) ;

__attribute__((used)) static enum nvkm_ior_proto
FUNC_1(struct nvkm_outp *VAR_9, enum nvkm_ior_type *VAR_10)
{
 switch (VAR_9->info.location) {
 case 0:
  switch (VAR_9->info.type) {
  case 132: *VAR_10 = VAR_1; return VAR_0;
  case 128 : *VAR_10 = VAR_1; return VAR_7;
  case 129 : *VAR_10 = VAR_5; return VAR_6;
  case 130 : *VAR_10 = VAR_5; return VAR_3;
  case 131 : *VAR_10 = VAR_5; return VAR_2;
  default:
   break;
  }
  break;
 case 1:
  switch (VAR_9->info.type) {
  case 129: *VAR_10 = VAR_4; return VAR_6;
  case 131 : *VAR_10 = VAR_4; return VAR_6;
  default:
   break;
  }
  break;
 default:
  break;
 }
 FUNC_0(1);
 return VAR_8;
}
