
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


struct nvkm_subdev {int dummy; } ;
struct TYPE_2__ {scalar_t__ app_size; scalar_t__ app_start_offset; } ;
struct ls_ucode_img {void* sig; int sig_size; TYPE_1__ ucode_desc; int ucode_size; void* ucode_data; } ;
struct firmware {int size; int data; } ;
typedef int f ;


 int FUNC_0 (scalar_t__,int) ;
 int VAR_0 ;
 int VAR_1 ;
 void* FUNC_1 (int ,int ,int ) ;
 int FUNC_2 (TYPE_1__*,int ,int) ;
 int FUNC_3 (struct nvkm_subdev const*,char*,int,int,struct firmware const**) ;
 int FUNC_4 (struct firmware const*) ;
 int FUNC_5 (char*,int,char*,char const*) ;

__attribute__((used)) static int
FUNC_6(const struct nvkm_subdev *VAR_2, const char *VAR_3,
      int VAR_4, struct ls_ucode_img *VAR_5)
{
 const struct firmware *VAR_6, *VAR_7, *VAR_8;
 char VAR_9[64];
 int VAR_10, VAR_11;

 FUNC_5(VAR_9, sizeof(VAR_9), "%s/image", VAR_3);
 VAR_10 = FUNC_3(VAR_2, VAR_9, 0, VAR_4, &VAR_6);
 if (VAR_10 < 0)
  return VAR_10;
 VAR_5->ucode_data = FUNC_1(VAR_6->data, VAR_6->size, VAR_1);
 FUNC_4(VAR_6);
 if (!VAR_5->ucode_data)
  return -VAR_0;

 FUNC_5(VAR_9, sizeof(VAR_9), "%s/desc", VAR_3);
 VAR_11 = FUNC_3(VAR_2, VAR_9, VAR_10, VAR_10, &VAR_7);
 if (VAR_11 < 0)
  return VAR_11;
 FUNC_2(&VAR_5->ucode_desc, VAR_7->data, sizeof(VAR_5->ucode_desc));
 VAR_5->ucode_size = FUNC_0(VAR_5->ucode_desc.app_start_offset + VAR_5->ucode_desc.app_size, 256);
 FUNC_4(VAR_7);

 FUNC_5(VAR_9, sizeof(VAR_9), "%s/sig", VAR_3);
 VAR_11 = FUNC_3(VAR_2, VAR_9, VAR_10, VAR_10, &VAR_8);
 if (VAR_11 < 0)
  return VAR_11;
 VAR_5->sig_size = VAR_8->size;
 VAR_5->sig = FUNC_1(VAR_8->data, VAR_8->size, VAR_1);
 FUNC_4(VAR_8);
 if (!VAR_5->sig)
  return -VAR_0;

 return VAR_10;
}
