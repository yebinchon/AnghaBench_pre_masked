
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_4__ TYPE_2__ ;
typedef struct TYPE_3__ TYPE_1__ ;


struct amdgpu_uvd_cs_ctx {TYPE_1__* parser; int buf_sizes; } ;
struct TYPE_4__ {int max_handles; int * handles; int * filp; } ;
struct amdgpu_device {TYPE_2__ uvd; } ;
struct amdgpu_bo {int dummy; } ;
typedef scalar_t__ int32_t ;
struct TYPE_3__ {int filp; struct amdgpu_device* adev; } ;


 int FUNC_0 () ;
 int FUNC_1 (char*,...) ;
 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 long FUNC_2 (struct amdgpu_bo*,void**) ;
 int FUNC_3 (struct amdgpu_bo*) ;
 long FUNC_4 (struct amdgpu_device*,scalar_t__*,int ) ;
 int FUNC_5 (int *,scalar_t__,scalar_t__) ;
 scalar_t__ FUNC_6 (int *) ;

__attribute__((used)) static int FUNC_7(struct amdgpu_uvd_cs_ctx *VAR_3,
        struct amdgpu_bo *VAR_4, unsigned VAR_5)
{
 struct amdgpu_device *VAR_6 = VAR_3->parser->adev;
 int32_t *VAR_7, VAR_8, VAR_9;
 void *VAR_10;
 long VAR_11;
 int VAR_12;

 if (VAR_5 & 0x3F) {
  FUNC_1("UVD messages must be 64 byte aligned!\n");
  return -VAR_0;
 }

 VAR_11 = FUNC_2(VAR_4, &VAR_10);
 if (VAR_11) {
  FUNC_1("Failed mapping the UVD) message (%ld)!\n", VAR_11);
  return VAR_11;
 }

 VAR_7 = VAR_10 + VAR_5;

 VAR_8 = VAR_7[1];
 VAR_9 = VAR_7[2];

 if (VAR_9 == 0) {
  FUNC_1("Invalid UVD handle!\n");
  return -VAR_0;
 }

 switch (VAR_8) {
 case 0:

  FUNC_3(VAR_4);


  for (VAR_12 = 0; VAR_12 < VAR_6->uvd.max_handles; ++VAR_12) {
   if (FUNC_6(&VAR_6->uvd.handles[VAR_12]) == VAR_9) {
    FUNC_1(")Handle 0x%x already in use!\n",
       VAR_9);
    return -VAR_0;
   }

   if (!FUNC_5(&VAR_6->uvd.handles[VAR_12], 0, VAR_9)) {
    VAR_6->uvd.filp[VAR_12] = VAR_3->parser->filp;
    return 0;
   }
  }

  FUNC_1("No more free UVD handles!\n");
  return -VAR_2;

 case 1:

  VAR_11 = FUNC_4(VAR_6, VAR_7, VAR_3->buf_sizes);
  FUNC_3(VAR_4);
  if (VAR_11)
   return VAR_11;


  for (VAR_12 = 0; VAR_12 < VAR_6->uvd.max_handles; ++VAR_12) {
   if (FUNC_6(&VAR_6->uvd.handles[VAR_12]) == VAR_9) {
    if (VAR_6->uvd.filp[VAR_12] != VAR_3->parser->filp) {
     FUNC_1("UVD handle collision detected!\n");
     return -VAR_0;
    }
    return 0;
   }
  }

  FUNC_1("Invalid UVD handle 0x%x!\n", VAR_9);
  return -VAR_1;

 case 2:

  for (VAR_12 = 0; VAR_12 < VAR_6->uvd.max_handles; ++VAR_12)
   FUNC_5(&VAR_6->uvd.handles[VAR_12], VAR_9, 0);
  FUNC_3(VAR_4);
  return 0;

 default:
  FUNC_1("Illegal UVD message type (%d)!\n", VAR_8);
  return -VAR_0;
 }
 FUNC_0();
 return -VAR_0;
}
