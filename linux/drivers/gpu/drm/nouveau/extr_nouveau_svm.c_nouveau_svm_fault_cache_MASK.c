
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int u8 ;
typedef int u64 ;
typedef int u32 ;
struct nvif_object {int dummy; } ;
struct nouveau_svm_fault_buffer {size_t fault_nr; struct nouveau_svm_fault** fault; struct nvif_object object; } ;
struct nouveau_svm_fault {int inst; int addr; int time; int engine; int gpc; int hub; int access; int client; int fault; } ;
struct nouveau_svm {int dummy; } ;


 int VAR_0 ;
 int FUNC_0 (struct nouveau_svm*,char*,int,int,int) ;
 scalar_t__ FUNC_1 (int) ;
 struct nouveau_svm_fault* FUNC_2 (int,int ) ;
 int FUNC_3 (struct nouveau_svm*,int const,int const,int const,int const) ;
 int FUNC_4 (struct nvif_object*,int,int,int) ;
 int FUNC_5 (struct nvif_object*,int) ;

__attribute__((used)) static void
FUNC_6(struct nouveau_svm *VAR_1,
   struct nouveau_svm_fault_buffer *VAR_2, u32 VAR_3)
{
 struct nvif_object *VAR_4 = &VAR_2->object;
 const u32 VAR_5 = FUNC_5(VAR_4, VAR_3 + 0x00);
 const u32 VAR_6 = FUNC_5(VAR_4, VAR_3 + 0x04);
 const u32 VAR_7 = FUNC_5(VAR_4, VAR_3 + 0x08);
 const u32 VAR_8 = FUNC_5(VAR_4, VAR_3 + 0x0c);
 const u32 VAR_9 = FUNC_5(VAR_4, VAR_3 + 0x10);
 const u32 VAR_10 = FUNC_5(VAR_4, VAR_3 + 0x14);
 const u32 VAR_11 = FUNC_5(VAR_4, VAR_3 + 0x18);
 const u32 VAR_12 = FUNC_5(VAR_4, VAR_3 + 0x1c);
 const u64 VAR_13 = (u64)VAR_6 << 32 | VAR_5;
 const u8 VAR_14 = (VAR_12 & 0x1f000000) >> 24;
 const u8 VAR_15 = (VAR_12 & 0x00100000) >> 20;
 const u8 VAR_16 = (VAR_12 & 0x00007f00) >> 8;
 struct nouveau_svm_fault *VAR_17;


 if (FUNC_1(!(VAR_12 & 0x80000000)))
  return;

 FUNC_4(VAR_4, VAR_3 + 0x1c, 0x80000000, 0x00000000);

 if (!VAR_2->fault[VAR_2->fault_nr]) {
  VAR_17 = FUNC_2(sizeof(*VAR_17), VAR_0);
  if (FUNC_1(!VAR_17)) {
   FUNC_3(VAR_1, VAR_13, VAR_15, VAR_14, VAR_16);
   return;
  }
  VAR_2->fault[VAR_2->fault_nr] = VAR_17;
 }

 VAR_17 = VAR_2->fault[VAR_2->fault_nr++];
 VAR_17->inst = VAR_13;
 VAR_17->addr = (u64)VAR_8 << 32 | VAR_7;
 VAR_17->time = (u64)VAR_10 << 32 | VAR_9;
 VAR_17->engine = VAR_11;
 VAR_17->gpc = VAR_14;
 VAR_17->hub = VAR_15;
 VAR_17->access = (VAR_12 & 0x000f0000) >> 16;
 VAR_17->client = VAR_16;
 VAR_17->fault = (VAR_12 & 0x0000001f);

 FUNC_0(VAR_1, "fault %016llx %016llx %02x",
  VAR_17->inst, VAR_17->addr, VAR_17->access);
}
