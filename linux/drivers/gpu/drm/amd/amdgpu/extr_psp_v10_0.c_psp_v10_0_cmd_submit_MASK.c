
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
 int VAR_1 ;
 unsigned int FUNC_1 (int ,int ,int ) ;
 int FUNC_2 (int ,int ,int ,unsigned int) ;
 void* FUNC_3 (int ) ;
 int FUNC_4 (struct psp_gfx_rb_frame*,int ,int) ;
 int VAR_2 ;
 void* FUNC_5 (int ) ;

__attribute__((used)) static int FUNC_6(struct psp_context *VAR_3,
    uint64_t VAR_4, uint64_t VAR_5,
    int VAR_6)
{
 unsigned int VAR_7 = 0;
 struct psp_gfx_rb_frame * VAR_8 = VAR_3->km_ring.ring_mem;
 struct psp_ring *VAR_9 = &VAR_3->km_ring;
 struct psp_gfx_rb_frame *VAR_10 = VAR_9->ring_mem;
 struct psp_gfx_rb_frame *VAR_11 = VAR_10 +
  VAR_9->ring_size / sizeof(struct psp_gfx_rb_frame) - 1;
 struct amdgpu_device *VAR_12 = VAR_3->adev;
 uint32_t VAR_13 = VAR_9->ring_size / 4;
 uint32_t VAR_14 = sizeof(struct psp_gfx_rb_frame) / 4;


 VAR_7 = FUNC_1(VAR_1, 0, VAR_2);


 if ((VAR_7 % VAR_13) == 0)
  VAR_8 = VAR_10;
 else
  VAR_8 = VAR_10 + (VAR_7 / VAR_14);

 if ((VAR_8 < VAR_10) || (VAR_11 < VAR_8)) {
  FUNC_0("ring_buffer_start = %p; ring_buffer_end = %p; write_frame = %p\n",
     VAR_10, VAR_11, VAR_8);
  FUNC_0("write_frame is pointing to address out of bounds\n");
  return -VAR_0;
 }


 FUNC_4(VAR_8, 0, sizeof(struct psp_gfx_rb_frame));


 VAR_8->cmd_buf_addr_hi = FUNC_5(VAR_4);
 VAR_8->cmd_buf_addr_lo = FUNC_3(VAR_4);
 VAR_8->fence_addr_hi = FUNC_5(VAR_5);
 VAR_8->fence_addr_lo = FUNC_3(VAR_5);
 VAR_8->fence_value = VAR_6;


 VAR_7 = (VAR_7 + VAR_14) % VAR_13;
 FUNC_2(VAR_1, 0, VAR_2, VAR_7);

 return 0;
}
