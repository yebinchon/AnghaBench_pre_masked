
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


struct vb2_buffer {TYPE_1__* vb2_queue; } ;
struct TYPE_2__ {scalar_t__ allow_zero_bytesused; } ;


 int FUNC_0 (char*) ;

__attribute__((used)) static void FUNC_1(struct vb2_buffer *VAR_0)
{
 static bool VAR_1;

 if (VAR_1)
  return;

 VAR_1 = 1;

 FUNC_0("use of bytesused == 0 is deprecated and will be removed in the future,\n");
 if (VAR_0->vb2_queue->allow_zero_bytesused)
  FUNC_0("use VIDIOC_DECODER_CMD(V4L2_DEC_CMD_STOP) instead.\n");
 else
  FUNC_0("use the actual size instead.\n");
}
