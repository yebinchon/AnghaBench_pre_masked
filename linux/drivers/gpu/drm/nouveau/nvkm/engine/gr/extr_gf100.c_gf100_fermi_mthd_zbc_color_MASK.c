
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int u32 ;
struct nvkm_object {int engine; } ;
struct gf100_gr {int dummy; } ;
struct fermi_a_zbc_color_v0 {int format; int index; int l2; int ds; } ;


 int VAR_0 ;
 int VAR_1 ;
 struct gf100_gr* FUNC_0 (int ) ;
 int FUNC_1 (struct gf100_gr*,int,int ,int ) ;
 int FUNC_2 (int,void**,int *,struct fermi_a_zbc_color_v0,int ,int ,int) ;
 int FUNC_3 (int ) ;

__attribute__((used)) static int
FUNC_4(struct nvkm_object *VAR_2, void *VAR_3, u32 VAR_4)
{
 struct gf100_gr *VAR_5 = FUNC_0(FUNC_3(VAR_2->engine));
 union {
  struct fermi_a_zbc_color_v0 v0;
 } *VAR_6 = VAR_3;
 int VAR_7 = -VAR_1;

 if (!(VAR_7 = FUNC_2(VAR_7, &VAR_3, &VAR_4, VAR_6->v0, 0, 0, 0))) {
  switch (VAR_6->v0.format) {
  case 128:
  case 129:
  case 133:
  case 135:
  case 132:
  case 131:
  case 130:
  case 134:
  case 142:
  case 141:
  case 146:
  case 138:
  case 144:
  case 143:
  case 140:
  case 139:
  case 137:
  case 145:
  case 136:
   VAR_7 = FUNC_1(VAR_5, VAR_6->v0.format,
          VAR_6->v0.ds,
          VAR_6->v0.l2);
   if (VAR_7 >= 0) {
    VAR_6->v0.index = VAR_7;
    return 0;
   }
   break;
  default:
   return -VAR_0;
  }
 }

 return VAR_7;
}
