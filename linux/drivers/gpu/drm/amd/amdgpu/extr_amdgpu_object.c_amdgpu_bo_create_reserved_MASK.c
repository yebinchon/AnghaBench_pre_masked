
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int u64 ;
typedef int u32 ;
struct amdgpu_device {int dev; } ;
struct amdgpu_bo_param {unsigned long size; int byte_align; int * resv; int type; int flags; int domain; } ;
struct amdgpu_bo {int tbo; } ;
typedef int bp ;


 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int FUNC_0 (struct amdgpu_device*,struct amdgpu_bo_param*,struct amdgpu_bo**) ;
 int FUNC_1 (struct amdgpu_bo*) ;
 int FUNC_2 (struct amdgpu_bo*,void**) ;
 int FUNC_3 (struct amdgpu_bo*,int ) ;
 int FUNC_4 (struct amdgpu_bo*,int) ;
 int FUNC_5 (struct amdgpu_bo*) ;
 int FUNC_6 (struct amdgpu_bo**) ;
 int FUNC_7 (struct amdgpu_bo*) ;
 int FUNC_8 (int *) ;
 int FUNC_9 (int ,char*,...) ;
 int FUNC_10 (struct amdgpu_bo_param*,int ,int) ;
 int VAR_3 ;

int FUNC_11(struct amdgpu_device *VAR_4,
         unsigned long VAR_5, int VAR_6,
         u32 VAR_7, struct amdgpu_bo **VAR_8,
         u64 *VAR_9, void **VAR_10)
{
 struct amdgpu_bo_param VAR_11;
 bool VAR_12 = 0;
 int VAR_13;

 if (!VAR_5) {
  FUNC_6(VAR_8);
  return 0;
 }

 FUNC_10(&VAR_11, 0, sizeof(VAR_11));
 VAR_11.size = VAR_5;
 VAR_11.byte_align = VAR_6;
 VAR_11.domain = VAR_7;
 VAR_11.flags = VAR_10 ? VAR_0
  : VAR_1;
 VAR_11.flags |= VAR_2;
 VAR_11.type = VAR_3;
 VAR_11.resv = ((void*)0);

 if (!*VAR_8) {
  VAR_13 = FUNC_0(VAR_4, &VAR_11, VAR_8);
  if (VAR_13) {
   FUNC_9(VAR_4->dev, "(%d) failed to allocate kernel bo\n",
    VAR_13);
   return VAR_13;
  }
  VAR_12 = 1;
 }

 VAR_13 = FUNC_4(*VAR_8, 0);
 if (VAR_13) {
  FUNC_9(VAR_4->dev, "(%d) failed to reserve kernel bo\n", VAR_13);
  goto error_free;
 }

 VAR_13 = FUNC_3(*VAR_8, VAR_7);
 if (VAR_13) {
  FUNC_9(VAR_4->dev, "(%d) kernel bo pin failed\n", VAR_13);
  goto error_unreserve;
 }

 VAR_13 = FUNC_8(&(*VAR_8)->tbo);
 if (VAR_13) {
  FUNC_9(VAR_4->dev, "%p bind failed\n", *VAR_8);
  goto error_unpin;
 }

 if (VAR_9)
  *VAR_9 = FUNC_1(*VAR_8);

 if (VAR_10) {
  VAR_13 = FUNC_2(*VAR_8, VAR_10);
  if (VAR_13) {
   FUNC_9(VAR_4->dev, "(%d) kernel bo map failed\n", VAR_13);
   goto error_unpin;
  }
 }

 return 0;

error_unpin:
 FUNC_5(*VAR_8);
error_unreserve:
 FUNC_7(*VAR_8);

error_free:
 if (VAR_12)
  FUNC_6(VAR_8);

 return VAR_13;
}
