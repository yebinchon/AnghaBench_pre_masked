
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


struct nvkm_subdev {struct nvkm_device* device; } ;
struct nvkm_device {int dev; TYPE_1__* chip; } ;
struct firmware {int dummy; } ;
typedef int f ;
typedef int cname ;
struct TYPE_2__ {int name; } ;


 int VAR_0 ;
 int FUNC_0 (struct firmware const**,char*,int ) ;
 int FUNC_1 (struct nvkm_subdev const*,char*,char*) ;
 int FUNC_2 (struct nvkm_subdev const*,char*,char const*) ;
 int FUNC_3 (char*,int,char*,char*,char const*,...) ;
 int FUNC_4 (char*) ;
 int FUNC_5 (char*,int ,int) ;
 char FUNC_6 (char) ;

int
FUNC_7(const struct nvkm_subdev *VAR_1, const char *VAR_2,
     int VAR_3, int VAR_4,
     const struct firmware **VAR_5)
{
 struct nvkm_device *VAR_6 = VAR_1->device;
 char VAR_7[64];
 char VAR_8[16];
 int VAR_9;


 FUNC_5(VAR_8, VAR_6->chip->name, sizeof(VAR_8));
 VAR_8[sizeof(VAR_8) - 1] = '\0';
 VAR_9 = FUNC_4(VAR_8);
 while (VAR_9) {
  --VAR_9;
  VAR_8[VAR_9] = FUNC_6(VAR_8[VAR_9]);
 }

 for (VAR_9 = VAR_4; VAR_9 >= VAR_3; VAR_9--) {
  if (VAR_9 != 0)
   FUNC_3(VAR_7, sizeof(VAR_7), "nvidia/%s/%s-%d.bin", VAR_8, VAR_2, VAR_9);
  else
   FUNC_3(VAR_7, sizeof(VAR_7), "nvidia/%s/%s.bin", VAR_8, VAR_2);

  if (!FUNC_0(VAR_5, VAR_7, VAR_6->dev)) {
   FUNC_1(VAR_1, "firmware \"%s\" loaded\n", VAR_7);
   return VAR_9;
  }

  FUNC_1(VAR_1, "firmware \"%s\" unavailable\n", VAR_7);
 }

 FUNC_2(VAR_1, "failed to load firmware \"%s\"", VAR_2);
 return -VAR_0;
}
