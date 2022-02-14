
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


struct TYPE_2__ {int preferred_must_be_framebuffer_pool; int min_must_be_framebuffer_pool; } ;
struct fbc_requested_compressed_size {unsigned int preferred_size; unsigned int min_size; int preferred_size_alignment; int min_size_alignment; TYPE_1__ bits; } ;
struct fbc_input_info {scalar_t__ dynamic_fbc_buffer_alloc; } ;


 unsigned int VAR_0 ;
 unsigned int VAR_1 ;
 unsigned int FUNC_0 (unsigned int) ;
 int FUNC_1 (unsigned int*,unsigned int*) ;

bool FUNC_2(struct fbc_input_info VAR_2,
      struct fbc_requested_compressed_size VAR_3)
{
 bool VAR_4 = 0;

 unsigned int VAR_5 = VAR_0, VAR_6 = VAR_1;

 FUNC_1(&VAR_5, &VAR_6);

 if (VAR_2.dynamic_fbc_buffer_alloc == 0) {




  VAR_3.preferred_size = VAR_3.min_size = FUNC_0(VAR_5) * VAR_6 * 4;
  VAR_3.preferred_size_alignment = VAR_3.min_size_alignment = 0x100;
  VAR_3.bits.preferred_must_be_framebuffer_pool = 1;
  VAR_3.bits.min_must_be_framebuffer_pool = 1;

  VAR_4 = 1;
 }





 return VAR_4;
}
