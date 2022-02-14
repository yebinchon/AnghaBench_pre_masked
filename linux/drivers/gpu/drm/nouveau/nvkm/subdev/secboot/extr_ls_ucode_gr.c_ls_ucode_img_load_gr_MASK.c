
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


struct nvkm_subdev {int dummy; } ;
struct TYPE_2__ {int image_size; } ;
struct ls_ucode_img {TYPE_1__ ucode_desc; int ucode_size; int ucode_data; int sig; int sig_size; } ;
struct firmware {int size; int data; } ;
typedef int f ;


 int VAR_0 ;
 int VAR_1 ;
 scalar_t__ FUNC_0 (int ) ;
 int FUNC_1 (int ) ;
 int FUNC_2 (int ) ;
 int FUNC_3 (int ,int ,int ) ;
 int FUNC_4 (struct firmware const*,struct firmware const*,struct firmware const*,TYPE_1__*) ;
 int FUNC_5 (struct nvkm_subdev const*,char*,struct firmware const**) ;
 int FUNC_6 (struct firmware const*) ;
 int FUNC_7 (char*,int,char*,char const*) ;

__attribute__((used)) static int
FUNC_8(const struct nvkm_subdev *VAR_2, int VAR_3,
       struct ls_ucode_img *VAR_4, const char *VAR_5)
{
 const struct firmware *VAR_6, *VAR_7, *VAR_8, *VAR_9;
 char VAR_10[64];
 int VAR_11;

 FUNC_7(VAR_10, sizeof(VAR_10), "gr/%s_bl", VAR_5);
 VAR_11 = FUNC_5(VAR_2, VAR_10, &VAR_6);
 if (VAR_11)
  goto error;

 FUNC_7(VAR_10, sizeof(VAR_10), "gr/%s_inst", VAR_5);
 VAR_11 = FUNC_5(VAR_2, VAR_10, &VAR_7);
 if (VAR_11)
  goto free_bl;

 FUNC_7(VAR_10, sizeof(VAR_10), "gr/%s_data", VAR_5);
 VAR_11 = FUNC_5(VAR_2, VAR_10, &VAR_8);
 if (VAR_11)
  goto free_inst;

 FUNC_7(VAR_10, sizeof(VAR_10), "gr/%s_sig", VAR_5);
 VAR_11 = FUNC_5(VAR_2, VAR_10, &VAR_9);
 if (VAR_11)
  goto free_data;

 VAR_4->sig = FUNC_3(VAR_9->data, VAR_9->size, VAR_1);
 if (!VAR_4->sig) {
  VAR_11 = -VAR_0;
  goto free_sig;
 }
 VAR_4->sig_size = VAR_9->size;

 VAR_4->ucode_data = FUNC_4(VAR_6, VAR_7, VAR_8,
          &VAR_4->ucode_desc);
 if (FUNC_0(VAR_4->ucode_data)) {
  FUNC_2(VAR_4->sig);
  VAR_11 = FUNC_1(VAR_4->ucode_data);
  goto free_sig;
 }
 VAR_4->ucode_size = VAR_4->ucode_desc.image_size;

free_sig:
 FUNC_6(VAR_9);
free_data:
 FUNC_6(VAR_8);
free_inst:
 FUNC_6(VAR_7);
free_bl:
 FUNC_6(VAR_6);
error:
 return VAR_11;
}
