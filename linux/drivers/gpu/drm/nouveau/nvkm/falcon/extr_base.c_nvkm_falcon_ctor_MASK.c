
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_4__ TYPE_2__ ;
typedef struct TYPE_3__ TYPE_1__ ;


typedef int u32 ;
struct nvkm_subdev {int index; } ;
struct nvkm_falcon_func {int dummy; } ;
struct TYPE_4__ {int ports; int limit; } ;
struct TYPE_3__ {int ports; int limit; } ;
struct nvkm_falcon {char const* name; int addr; int version; int secret; int has_emem; int debug; TYPE_2__ data; TYPE_1__ code; int dmem_mutex; int mutex; struct nvkm_subdev* owner; struct nvkm_falcon_func const* func; } ;







 int FUNC_0 (int *) ;
 int FUNC_1 (struct nvkm_falcon*,int) ;
 int * VAR_0 ;
 int FUNC_2 (struct nvkm_subdev*,char*,int ) ;

void
FUNC_3(const struct nvkm_falcon_func *VAR_1,
   struct nvkm_subdev *VAR_2, const char *VAR_3, u32 VAR_4,
   struct nvkm_falcon *VAR_5)
{
 u32 VAR_6;
 u32 VAR_7;

 VAR_5->func = VAR_1;
 VAR_5->owner = VAR_2;
 VAR_5->name = VAR_3;
 VAR_5->addr = VAR_4;
 FUNC_0(&VAR_5->mutex);
 FUNC_0(&VAR_5->dmem_mutex);

 VAR_7 = FUNC_1(VAR_5, 0x12c);
 VAR_5->version = VAR_7 & 0xf;
 VAR_5->secret = (VAR_7 >> 4) & 0x3;
 VAR_5->code.ports = (VAR_7 >> 8) & 0xf;
 VAR_5->data.ports = (VAR_7 >> 12) & 0xf;

 VAR_7 = FUNC_1(VAR_5, 0x108);
 VAR_5->code.limit = (VAR_7 & 0x1ff) << 8;
 VAR_5->data.limit = (VAR_7 & 0x3fe00) >> 1;

 switch (VAR_2->index) {
 case 132:
  VAR_6 = 0x0;
  break;
 case 128:
  VAR_6 = 0xc08;
  break;
 case 131:
  VAR_6 = 0xd00;
  break;
 case 130:
  VAR_6 = 0x408;
  VAR_5->has_emem = 1;
  break;
 case 129:
  VAR_6 = 0x0;
  break;
 default:
  FUNC_2(VAR_2, "unsupported falcon %s!\n",
     VAR_0[VAR_2->index]);
  VAR_6 = 0;
  break;
 }

 if (VAR_6) {
  u32 VAR_8 = FUNC_1(VAR_5, VAR_6);
  VAR_5->debug = (VAR_8 >> 20) & 0x1;
 }
}
