
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct nvkm_subdev {int dummy; } ;
struct firmware {size_t size; int data; } ;


 int VAR_0 ;
 int VAR_1 ;
 void* FUNC_0 (int) ;
 int VAR_2 ;
 void* FUNC_1 (int ,size_t,int ) ;
 int FUNC_2 (struct nvkm_subdev const*,char*,char const*,size_t) ;
 int FUNC_3 (struct nvkm_subdev const*,char const*,struct firmware const**) ;
 int FUNC_4 (struct firmware const*) ;

void *
FUNC_5(const struct nvkm_subdev *VAR_3, const char *VAR_4,
         size_t VAR_5)
{
 const struct firmware *VAR_6;
 void *VAR_7;
 int VAR_8;

 VAR_8 = FUNC_3(VAR_3, VAR_4, &VAR_6);
 if (VAR_8)
  return FUNC_0(VAR_8);
 if (VAR_6->size < VAR_5) {
  FUNC_2(VAR_3, "%s is smaller than expected size %zu\n",
      VAR_4, VAR_5);
  FUNC_4(VAR_6);
  return FUNC_0(-VAR_0);
 }
 VAR_7 = FUNC_1(VAR_6->data, VAR_6->size, VAR_2);
 FUNC_4(VAR_6);
 if (!VAR_7)
  return FUNC_0(-VAR_1);

 return VAR_7;
}
