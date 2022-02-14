
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


struct nvkm_subdev {struct nvkm_device* device; } ;
struct nvkm_secboot {struct nvkm_subdev subdev; } ;
struct nvkm_falcon {int dummy; } ;
typedef void nvkm_engine ;
struct nvkm_device {TYPE_1__** nvdec; } ;
struct hsf_load_header {int non_sec_code_off; int non_sec_code_size; int* apps; int data_dma_base; int data_size; } ;
struct hsf_fw_header {int hdr_offset; } ;
struct fw_bin_header {int header_offset; int data_offset; } ;
struct TYPE_2__ {struct nvkm_falcon* falcon; int engine; } ;


 int FUNC_0 (int,int) ;
 int VAR_0 ;
 int VAR_1 ;
 scalar_t__ FUNC_1 (void*) ;
 int FUNC_2 (void*) ;
 scalar_t__ FUNC_3 (struct nvkm_secboot*) ;
 void* FUNC_4 (struct nvkm_subdev*,struct nvkm_falcon*,char*) ;
 int FUNC_5 (void*) ;
 int FUNC_6 (struct nvkm_subdev*,char*) ;
 void* FUNC_7 (int *) ;
 int FUNC_8 (void**) ;
 int FUNC_9 (struct nvkm_subdev*,char*) ;
 int FUNC_10 (struct nvkm_falcon*,int *) ;
 int FUNC_11 (struct nvkm_falcon*,struct nvkm_subdev*) ;
 int FUNC_12 (struct nvkm_falcon*,void*,int ,int ,int ) ;
 int FUNC_13 (struct nvkm_falcon*,void*,int,int,int,int ,int) ;
 int FUNC_14 (struct nvkm_falcon*,struct nvkm_subdev*) ;
 int FUNC_15 (struct nvkm_falcon*) ;
 int FUNC_16 (struct nvkm_falcon*,int) ;
 int FUNC_17 (struct nvkm_falcon*) ;
 int FUNC_18 (struct nvkm_falcon*,int) ;

__attribute__((used)) static int
FUNC_19(struct nvkm_secboot *VAR_2)
{
 struct nvkm_subdev *VAR_3 = &VAR_2->subdev;
 struct nvkm_device *VAR_4 = VAR_3->device;
 struct nvkm_engine *VAR_5;
 struct nvkm_falcon *VAR_6;
 void *VAR_7;
 struct fw_bin_header *VAR_8;
 struct hsf_fw_header *VAR_9;
 struct hsf_load_header *VAR_10;
 void *VAR_11;
 int VAR_12;

 FUNC_6(VAR_3, "running VPR scrubber binary on NVDEC...\n");

 VAR_5 = FUNC_7(&VAR_4->nvdec[0]->engine);
 if (FUNC_1(VAR_5))
  return FUNC_2(VAR_5);
 VAR_6 = VAR_4->nvdec[0]->falcon;

 FUNC_11(VAR_6, &VAR_2->subdev);

 VAR_7 = FUNC_4(VAR_3, VAR_6, "nvdec/scrubber");
 if (FUNC_1(VAR_7))
  return FUNC_2(VAR_7);

 FUNC_15(VAR_6);
 FUNC_10(VAR_6, ((void*)0));

 VAR_8 = VAR_7;
 VAR_9 = VAR_7 + VAR_8->header_offset;
 VAR_10 = VAR_7 + VAR_9->hdr_offset;
 VAR_11 = VAR_7 + VAR_8->data_offset;

 FUNC_13(VAR_6, VAR_11, VAR_10->non_sec_code_off,
         VAR_10->non_sec_code_size,
         VAR_10->non_sec_code_off >> 8, 0, 0);
 FUNC_13(VAR_6, VAR_11 + VAR_10->apps[0],
         FUNC_0(VAR_10->apps[0], 0x100),
         VAR_10->apps[1],
         VAR_10->apps[0] >> 8, 0, 1);
 FUNC_12(VAR_6, VAR_11 + VAR_10->data_dma_base, 0,
         VAR_10->data_size, 0);

 FUNC_5(VAR_7);

 FUNC_16(VAR_6, 0x0);
 FUNC_17(VAR_6);

 VAR_12 = FUNC_18(VAR_6, 500);
 if (VAR_12 < 0) {
  FUNC_9(VAR_3, "failed to run VPR scrubber binary!\n");
  VAR_12 = -VAR_1;
  goto end;
 }


 FUNC_15(VAR_6);

 if (FUNC_3(VAR_2)) {
  FUNC_9(VAR_3, "VPR scrubber binary failed!\n");
  VAR_12 = -VAR_0;
  goto end;
 }

 FUNC_6(VAR_3, "VPR scrub successfully completed\n");

end:
 FUNC_14(VAR_6, &VAR_2->subdev);
 FUNC_8(&VAR_5);
 return VAR_12;
}
