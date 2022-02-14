
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


typedef int uint64_t ;
struct TYPE_2__ {scalar_t__ buffer_funcs; } ;
struct amdgpu_device {TYPE_1__ mman; } ;
struct amdgpu_bo_param {unsigned int size; unsigned int domain; int * resv; int type; scalar_t__ flags; int byte_align; } ;
struct amdgpu_bo {int tbo; } ;
typedef int bp ;


 int VAR_0 ;
 int FUNC_0 (char*) ;
 int VAR_1 ;
 int FUNC_1 (struct amdgpu_device*,unsigned int,int ,int ,int) ;
 int FUNC_2 (int,unsigned int,int,unsigned int,unsigned int,char*) ;
 int FUNC_3 (struct amdgpu_device*,struct amdgpu_bo_param*,struct amdgpu_bo**) ;
 int FUNC_4 (struct amdgpu_bo*) ;
 int FUNC_5 (struct amdgpu_bo*,unsigned int) ;
 int FUNC_6 (struct amdgpu_bo*,int) ;
 int FUNC_7 (struct amdgpu_bo*) ;
 int FUNC_8 (struct amdgpu_bo**) ;
 int FUNC_9 (struct amdgpu_bo*) ;
 int FUNC_10 (int *) ;
 scalar_t__ FUNC_11 (int) ;
 int FUNC_12 (struct amdgpu_bo_param*,int ,int) ;
 int VAR_2 ;
 scalar_t__ FUNC_13 (int) ;

__attribute__((used)) static void FUNC_14(struct amdgpu_device *VAR_3, unsigned VAR_4,
      unsigned VAR_5, unsigned VAR_6)
{
 struct amdgpu_bo *VAR_7 = ((void*)0);
 struct amdgpu_bo *VAR_8 = ((void*)0);
 struct amdgpu_bo_param VAR_9;
 uint64_t VAR_10, VAR_11;
 int VAR_12, VAR_13;
 int VAR_14;

 FUNC_12(&VAR_9, 0, sizeof(VAR_9));
 VAR_9.size = VAR_4;
 VAR_9.byte_align = VAR_1;
 VAR_9.domain = VAR_5;
 VAR_9.flags = 0;
 VAR_9.type = VAR_2;
 VAR_9.resv = ((void*)0);
 VAR_13 = VAR_0;
 VAR_12 = FUNC_3(VAR_3, &VAR_9, &VAR_8);
 if (VAR_12) {
  goto out_cleanup;
 }
 VAR_12 = FUNC_6(VAR_8, 0);
 if (FUNC_13(VAR_12 != 0))
  goto out_cleanup;
 VAR_12 = FUNC_5(VAR_8, VAR_5);
 if (VAR_12) {
  FUNC_9(VAR_8);
  goto out_cleanup;
 }
 VAR_12 = FUNC_10(&VAR_8->tbo);
 FUNC_9(VAR_8);
 if (VAR_12) {
  goto out_cleanup;
 }
 VAR_10 = FUNC_4(VAR_8);
 VAR_9.domain = VAR_6;
 VAR_12 = FUNC_3(VAR_3, &VAR_9, &VAR_7);
 if (VAR_12) {
  goto out_cleanup;
 }
 VAR_12 = FUNC_6(VAR_7, 0);
 if (FUNC_13(VAR_12 != 0))
  goto out_cleanup;
 VAR_12 = FUNC_5(VAR_7, VAR_6);
 if (VAR_12) {
  FUNC_9(VAR_8);
  goto out_cleanup;
 }
 VAR_12 = FUNC_10(&VAR_7->tbo);
 FUNC_9(VAR_7);
 if (VAR_12) {
  goto out_cleanup;
 }
 VAR_11 = FUNC_4(VAR_7);

 if (VAR_3->mman.buffer_funcs) {
  VAR_14 = FUNC_1(VAR_3, VAR_4, VAR_10, VAR_11, VAR_13);
  if (VAR_14 < 0)
   goto out_cleanup;
  if (VAR_14 > 0)
   FUNC_2(VAR_13, VAR_4, VAR_14,
           VAR_5, VAR_6, "dma");
 }

out_cleanup:

 if (VAR_12) {
  FUNC_0("Error while benchmarking BO move.\n");
 }

 if (VAR_8) {
  VAR_12 = FUNC_6(VAR_8, 1);
  if (FUNC_11(VAR_12 == 0)) {
   FUNC_7(VAR_8);
   FUNC_9(VAR_8);
  }
  FUNC_8(&VAR_8);
 }
 if (VAR_7) {
  VAR_12 = FUNC_6(VAR_7, 1);
  if (FUNC_11(VAR_12 == 0)) {
   FUNC_7(VAR_7);
   FUNC_9(VAR_7);
  }
  FUNC_8(&VAR_7);
 }
}
