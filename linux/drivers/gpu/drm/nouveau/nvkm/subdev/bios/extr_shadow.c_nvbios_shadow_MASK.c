
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


struct shadow {int member_0; scalar_t__ score; scalar_t__ skip; char* data; int size; TYPE_1__* func; int * member_1; } ;
struct nvkm_subdev {struct nvkm_device* device; } ;
struct nvkm_device {int cfgopt; } ;
struct nvkm_bios {char* data; int size; struct nvkm_subdev subdev; } ;
struct TYPE_2__ {char* name; } ;


 int VAR_0 ;
 int VAR_1 ;
 int FUNC_0 (char*) ;
 char* FUNC_1 (char const*,int,int ) ;
 int VAR_2 ;
 int VAR_3 ;
 int VAR_4 ;
 int VAR_5 ;
 int VAR_6 ;
 int VAR_7 ;
 int VAR_8 ;
 int FUNC_2 (struct nvkm_subdev*,char*,char*) ;
 int FUNC_3 (struct nvkm_subdev*,char*,...) ;
 char* FUNC_4 (int ,char*,int*) ;
 TYPE_1__ VAR_9 ;
 scalar_t__ FUNC_5 (struct nvkm_bios*,struct shadow*,char*) ;
 int FUNC_6 (char*,char*) ;

int
FUNC_7(struct nvkm_bios *VAR_10)
{
 struct nvkm_subdev *VAR_11 = &VAR_10->subdev;
 struct nvkm_device *VAR_12 = VAR_11->device;
 struct shadow VAR_13[] = {
  { 0, &VAR_4 },
  { 0, &VAR_7 },
  { 0, &VAR_8 },
  { 0, &VAR_2 },
  { 4, &VAR_3 },
  { 1, &VAR_5 },
  { 1, &VAR_6 },
  {}
 }, *VAR_14, *VAR_15 = ((void*)0);
 const char *VAR_16;
 char *VAR_17;
 int VAR_18;


 VAR_16 = FUNC_4(VAR_12->cfgopt, "NvBios", &VAR_18);
 VAR_17 = VAR_16 ? FUNC_1(VAR_16, VAR_18, VAR_1) : ((void*)0);
 if (VAR_17) {

  for (VAR_14 = VAR_13; VAR_14->func; VAR_14++) {
   if (VAR_14->func->name &&
       !FUNC_6(VAR_17, VAR_14->func->name)) {
    VAR_15 = VAR_14;
    if (FUNC_5(VAR_10, VAR_14, ((void*)0)))
     break;
   }
  }


  if (!VAR_15 && (VAR_15 = VAR_14)) {
   VAR_14->func = &VAR_9;
   FUNC_5(VAR_10, VAR_14, VAR_17);
   VAR_14->func = ((void*)0);
  }

  if (!VAR_15->score) {
   FUNC_3(VAR_11, "%s invalid\n", VAR_17);
   FUNC_0(VAR_17);
   VAR_17 = ((void*)0);
  }
 }


 if (!VAR_15 || !VAR_15->score) {
  for (VAR_14 = VAR_13, VAR_15 = VAR_14; VAR_14->func; VAR_14++) {
   if (!VAR_14->skip || VAR_15->score < VAR_14->skip) {
    if (FUNC_5(VAR_10, VAR_14, ((void*)0))) {
     if (VAR_14->score > VAR_15->score)
      VAR_15 = VAR_14;
    }
   }
  }
 }


 for (VAR_14 = VAR_13; VAR_14->func; VAR_14++) {
  if (VAR_14 != VAR_15)
   FUNC_0(VAR_14->data);
 }

 if (!VAR_15->score) {
  FUNC_3(VAR_11, "unable to locate usable image\n");
  return -VAR_0;
 }

 FUNC_2(VAR_11, "using image from %s\n", VAR_15->func ?
     VAR_15->func->name : VAR_17);
 VAR_10->data = VAR_15->data;
 VAR_10->size = VAR_15->size;
 FUNC_0(VAR_17);
 return 0;
}
