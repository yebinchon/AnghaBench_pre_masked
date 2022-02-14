
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int u32 ;
struct nvkm_object {int engine; } ;
struct gf100_gr {int dummy; } ;
struct fermi_a_zbc_depth_v0 {int format; int l2; int ds; } ;


 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;

 struct gf100_gr* FUNC_0 (int ) ;
 int FUNC_1 (struct gf100_gr*,int,int ,int ) ;
 int FUNC_2 (int,void**,int *,struct fermi_a_zbc_depth_v0,int ,int ,int) ;
 int FUNC_3 (int ) ;

__attribute__((used)) static int
FUNC_4(struct nvkm_object *VAR_3, void *VAR_4, u32 VAR_5)
{
 struct gf100_gr *VAR_6 = FUNC_0(FUNC_3(VAR_3->engine));
 union {
  struct fermi_a_zbc_depth_v0 v0;
 } *VAR_7 = VAR_4;
 int VAR_8 = -VAR_2;

 if (!(VAR_8 = FUNC_2(VAR_8, &VAR_4, &VAR_5, VAR_7->v0, 0, 0, 0))) {
  switch (VAR_7->v0.format) {
  case 128:
   VAR_8 = FUNC_1(VAR_6, VAR_7->v0.format,
          VAR_7->v0.ds,
          VAR_7->v0.l2);
   return (VAR_8 >= 0) ? 0 : -VAR_1;
  default:
   return -VAR_0;
  }
 }

 return VAR_8;
}
