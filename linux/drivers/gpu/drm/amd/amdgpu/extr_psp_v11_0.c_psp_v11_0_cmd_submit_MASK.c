
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int uint64_t ;
typedef unsigned int uint32_t ;
struct psp_ring {int ring_size; struct psp_gfx_rb_frame* ring_mem; } ;
struct psp_gfx_rb_frame {int fence_value; void* fence_addr_lo; void* fence_addr_hi; void* cmd_buf_addr_lo; void* cmd_buf_addr_hi; } ;
struct psp_context {struct amdgpu_device* adev; struct psp_ring km_ring; } ;
struct amdgpu_device {int dummy; } ;


 int FUNC_0 (char*,...) ;
 int VAR_0 ;
 unsigned int VAR_1 ;
 int VAR_2 ;
 unsigned int FUNC_1 (int ,int ,int ) ;
 int FUNC_2 (int ,int ,int ,unsigned int) ;
 void* FUNC_3 (int ) ;
 int FUNC_4 (struct psp_gfx_rb_frame*,int ,int) ;
 int VAR_3 ;
 int VAR_4 ;
 int VAR_5 ;
 scalar_t__ FUNC_5 (struct psp_context*) ;
 void* FUNC_6 (int ) ;

__attribute__((used)) static int FUNC_7(struct psp_context *VAR_6,
          uint64_t VAR_7, uint64_t VAR_8,
          int VAR_9)
{
 unsigned int VAR_10 = 0;
 struct psp_gfx_rb_frame *VAR_11 = VAR_6->km_ring.ring_mem;
 struct psp_ring *VAR_12 = &VAR_6->km_ring;
 struct psp_gfx_rb_frame *VAR_13 = VAR_12->ring_mem;
 struct psp_gfx_rb_frame *VAR_14 = VAR_13 +
  VAR_12->ring_size / sizeof(struct psp_gfx_rb_frame) - 1;
 struct amdgpu_device *VAR_15 = VAR_6->adev;
 uint32_t VAR_16 = VAR_12->ring_size / 4;
 uint32_t VAR_17 = sizeof(struct psp_gfx_rb_frame) / 4;


 if (FUNC_5(VAR_6))
  VAR_10 = FUNC_1(VAR_2, 0, VAR_4);
 else
  VAR_10 = FUNC_1(VAR_2, 0, VAR_5);




 if ((VAR_10 % VAR_16) == 0)
  VAR_11 = VAR_13;
 else
  VAR_11 = VAR_13 + (VAR_10 / VAR_17);

 if ((VAR_11 < VAR_13) || (VAR_14 < VAR_11)) {
  FUNC_0("ring_buffer_start = %p; ring_buffer_end = %p; write_frame = %p\n",
     VAR_13, VAR_14, VAR_11);
  FUNC_0("write_frame is pointing to address out of bounds\n");
  return -VAR_0;
 }


 FUNC_4(VAR_11, 0, sizeof(struct psp_gfx_rb_frame));


 VAR_11->cmd_buf_addr_hi = FUNC_6(VAR_7);
 VAR_11->cmd_buf_addr_lo = FUNC_3(VAR_7);
 VAR_11->fence_addr_hi = FUNC_6(VAR_8);
 VAR_11->fence_addr_lo = FUNC_3(VAR_8);
 VAR_11->fence_value = VAR_9;


 VAR_10 = (VAR_10 + VAR_17) % VAR_16;
 if (FUNC_5(VAR_6)) {
  FUNC_2(VAR_2, 0, VAR_4, VAR_10);
  FUNC_2(VAR_2, 0, VAR_3, VAR_1);
 } else
  FUNC_2(VAR_2, 0, VAR_5, VAR_10);

 return 0;
}
