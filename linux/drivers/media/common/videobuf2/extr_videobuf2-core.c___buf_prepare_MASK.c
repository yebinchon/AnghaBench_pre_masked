
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


struct vb2_queue {int memory; scalar_t__ is_output; scalar_t__ error; } ;
struct vb2_buffer {int state; int prepared; int synced; unsigned int num_planes; TYPE_1__* planes; struct vb2_queue* vb2_queue; } ;
typedef enum vb2_buffer_state { ____Placeholder_vb2_buffer_state } vb2_buffer_state ;
struct TYPE_2__ {int mem_priv; } ;


 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;



 int FUNC_0 (int,char*) ;
 int FUNC_1 (int) ;
 int FUNC_2 (struct vb2_buffer*) ;
 int FUNC_3 (struct vb2_buffer*) ;
 int FUNC_4 (struct vb2_buffer*) ;
 int VAR_3 ;
 int FUNC_5 (struct vb2_buffer*,int ,struct vb2_buffer*) ;
 int FUNC_6 (struct vb2_buffer*,int ,int ) ;
 int FUNC_7 (int,char*,...) ;
 int VAR_4 ;

__attribute__((used)) static int FUNC_8(struct vb2_buffer *VAR_5)
{
 struct vb2_queue *VAR_6 = VAR_5->vb2_queue;
 enum vb2_buffer_state VAR_7 = VAR_5->state;
 unsigned int VAR_8;
 int VAR_9;

 if (VAR_6->error) {
  FUNC_7(1, "fatal error occurred on queue\n");
  return -VAR_1;
 }

 if (VAR_5->prepared)
  return 0;
 FUNC_1(VAR_5->synced);

 if (VAR_6->is_output) {
  VAR_9 = FUNC_5(VAR_5, VAR_3, VAR_5);
  if (VAR_9) {
   FUNC_7(1, "buffer validation failed\n");
   return VAR_9;
  }
 }

 VAR_5->state = VAR_2;

 switch (VAR_6->memory) {
 case 129:
  VAR_9 = FUNC_3(VAR_5);
  break;
 case 128:
  VAR_9 = FUNC_4(VAR_5);
  break;
 case 130:
  VAR_9 = FUNC_2(VAR_5);
  break;
 default:
  FUNC_0(1, "Invalid queue type\n");
  VAR_9 = -VAR_0;
  break;
 }

 if (VAR_9) {
  FUNC_7(1, "buffer preparation failed: %d\n", VAR_9);
  VAR_5->state = VAR_7;
  return VAR_9;
 }


 for (VAR_8 = 0; VAR_8 < VAR_5->num_planes; ++VAR_8)
  FUNC_6(VAR_5, VAR_4, VAR_5->planes[VAR_8].mem_priv);

 VAR_5->synced = 1;
 VAR_5->prepared = 1;
 VAR_5->state = VAR_7;

 return 0;
}
