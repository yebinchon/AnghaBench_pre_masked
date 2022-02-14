
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct vb2_v4l2_buffer {int dummy; } ;
struct vb2_queue {int timestamp_flags; int buf_struct_size; int copy_timestamp; int quirk_poll_must_check_waiting_for_buffers; int type; int is_output; int is_multiplanar; int * buf_ops; } ;


 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int VAR_3 ;
 int VAR_4 ;
 scalar_t__ VAR_5 ;
 scalar_t__ VAR_6 ;
 scalar_t__ VAR_7 ;
 int FUNC_0 (int ) ;
 int FUNC_1 (int ) ;
 int VAR_8 ;
 int VAR_9 ;
 int VAR_10 ;
 scalar_t__ FUNC_2 (int) ;
 int VAR_11 ;
 int FUNC_3 (struct vb2_queue*) ;

int FUNC_4(struct vb2_queue *VAR_12)
{



 if (FUNC_2(!VAR_12) ||
     FUNC_2(VAR_12->timestamp_flags &
      ~(VAR_2 |
        VAR_4)))
  return -VAR_0;


 FUNC_2((VAR_12->timestamp_flags & VAR_2) ==
  VAR_3);


 if (FUNC_2(VAR_9 != (int)VAR_6)
  || FUNC_2(VAR_10 != (int)VAR_7)
  || FUNC_2(VAR_8 != (int)VAR_5))
  return -VAR_0;

 if (VAR_12->buf_struct_size == 0)
  VAR_12->buf_struct_size = sizeof(struct vb2_v4l2_buffer);

 VAR_12->buf_ops = &VAR_11;
 VAR_12->is_multiplanar = FUNC_0(VAR_12->type);
 VAR_12->is_output = FUNC_1(VAR_12->type);
 VAR_12->copy_timestamp = (VAR_12->timestamp_flags & VAR_2)
   == VAR_1;





 VAR_12->quirk_poll_must_check_waiting_for_buffers = 1;

 return FUNC_3(VAR_12);
}
