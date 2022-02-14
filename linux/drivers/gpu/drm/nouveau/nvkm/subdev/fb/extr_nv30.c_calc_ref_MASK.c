
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct nvkm_fb {int dummy; } ;


 int FUNC_0 (struct nvkm_fb*,int,int,int) ;
 int FUNC_1 (int,int ,int) ;

__attribute__((used)) static int
FUNC_2(struct nvkm_fb *VAR_0, int VAR_1, int VAR_2, int VAR_3)
{
 int VAR_4, VAR_5 = 0;

 for (VAR_4 = 0; VAR_4 < 4; VAR_4++) {
  int VAR_6 = (VAR_1 >> (8 * VAR_3) & 0xff) + FUNC_0(VAR_0, VAR_2, VAR_3, VAR_4);

  VAR_5 |= (0x80 | FUNC_1(VAR_6, 0, 0x1f)) << (8 * VAR_4);
 }

 return VAR_5;
}
