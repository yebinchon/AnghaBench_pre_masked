
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_4__ TYPE_2__ ;
typedef struct TYPE_3__ TYPE_1__ ;


struct amdgpu_ring {scalar_t__ wptr; int name; } ;
struct TYPE_4__ {int gds_size; } ;
struct TYPE_3__ {struct amdgpu_ring* compute_ring; } ;
struct amdgpu_device {int usec_timeout; TYPE_2__ gds; TYPE_1__ gfx; } ;


 int FUNC_0 (char*,int ,int) ;
 int VAR_0 ;
 int VAR_1 ;
 int FUNC_1 (int ,int) ;
 int VAR_2 ;
 int VAR_3 ;
 int VAR_4 ;
 int FUNC_2 (int) ;
 int FUNC_3 (int ) ;
 int FUNC_4 (int) ;
 int FUNC_5 (int ,int ,int ,int) ;
 int FUNC_6 (struct amdgpu_ring*,int) ;
 int FUNC_7 (struct amdgpu_ring*) ;
 int FUNC_8 (struct amdgpu_ring*,int) ;
 scalar_t__ FUNC_9 (struct amdgpu_ring*) ;
 int VAR_5 ;
 int VAR_6 ;
 int FUNC_10 (int) ;

__attribute__((used)) static int FUNC_11(struct amdgpu_device *VAR_7)
{
 struct amdgpu_ring *VAR_8 = &VAR_7->gfx.compute_ring[0];
 int VAR_9, VAR_10;

 VAR_10 = FUNC_6(VAR_8, 7);
 if (VAR_10) {
  FUNC_0("amdgpu: GDS workarounds failed to lock ring %s (%d).\n",
   VAR_8->name, VAR_10);
  return VAR_10;
 }

 FUNC_5(VAR_1, 0, VAR_5, 0x00000000);
 FUNC_5(VAR_1, 0, VAR_6, VAR_7->gds.gds_size);

 FUNC_8(VAR_8, FUNC_1(VAR_2, 5));
 FUNC_8(VAR_8, (VAR_4 |
    FUNC_2(1) |
    FUNC_4(2) |
    FUNC_3(0)));
 FUNC_8(VAR_8, 0);
 FUNC_8(VAR_8, 0);
 FUNC_8(VAR_8, 0);
 FUNC_8(VAR_8, 0);
 FUNC_8(VAR_8, VAR_3 |
    VAR_7->gds.gds_size);

 FUNC_7(VAR_8);

 for (VAR_9 = 0; VAR_9 < VAR_7->usec_timeout; VAR_9++) {
  if (VAR_8->wptr == FUNC_9(VAR_8))
   break;
  FUNC_10(1);
 }

 if (VAR_9 >= VAR_7->usec_timeout)
  VAR_10 = -VAR_0;

 FUNC_5(VAR_1, 0, VAR_6, 0x00000000);

 return VAR_10;
}
