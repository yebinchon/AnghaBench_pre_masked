
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct vb2_threadio_data {scalar_t__ stop; int priv; scalar_t__ (* fnc ) (struct vb2_buffer*,int ) ;} ;
struct vb2_queue {unsigned int num_buffers; int copy_timestamp; struct vb2_buffer** bufs; scalar_t__ is_output; struct vb2_threadio_data* threadio; } ;
struct vb2_buffer {scalar_t__ state; int index; int timestamp; } ;


 int VAR_0 ;
 scalar_t__ VAR_1 ;
 int FUNC_0 (struct vb2_queue*,int ,struct vb2_queue*) ;
 int FUNC_1 (int,char*,int) ;
 int FUNC_2 () ;
 int FUNC_3 () ;
 int FUNC_4 () ;
 int FUNC_5 (int ) ;
 int FUNC_6 () ;
 scalar_t__ FUNC_7 (struct vb2_buffer*,int ) ;
 int FUNC_8 () ;
 int FUNC_9 (struct vb2_queue*,unsigned int*,int *,int ) ;
 int FUNC_10 (struct vb2_queue*,int ,int *,int *) ;
 int VAR_2 ;
 int VAR_3 ;

__attribute__((used)) static int FUNC_11(void *VAR_4)
{
 struct vb2_queue *VAR_5 = VAR_4;
 struct vb2_threadio_data *VAR_6 = VAR_5->threadio;
 bool VAR_7 = 0;
 unsigned VAR_8 = 0;
 unsigned VAR_9 = 0;
 int VAR_10 = 0;

 if (VAR_5->is_output) {
  VAR_8 = VAR_5->num_buffers;
  VAR_7 = VAR_5->copy_timestamp;
 }

 FUNC_6();

 for (;;) {
  struct vb2_buffer *VAR_11;




  if (VAR_8) {
   VAR_11 = VAR_5->bufs[VAR_9++];
   VAR_8--;
  } else {
   FUNC_0(VAR_5, VAR_2, VAR_5);
   if (!VAR_6->stop)
    VAR_10 = FUNC_9(VAR_5, &VAR_9, ((void*)0), 0);
   FUNC_0(VAR_5, VAR_3, VAR_5);
   FUNC_1(5, "file io: vb2_dqbuf result: %d\n", VAR_10);
   if (!VAR_10)
    VAR_11 = VAR_5->bufs[VAR_9];
  }
  if (VAR_10 || VAR_6->stop)
   break;
  FUNC_8();

  if (VAR_11->state != VAR_1)
   if (VAR_6->fnc(VAR_11, VAR_6->priv))
    break;
  FUNC_0(VAR_5, VAR_2, VAR_5);
  if (VAR_7)
   VAR_11->timestamp = FUNC_3();
  if (!VAR_6->stop)
   VAR_10 = FUNC_10(VAR_5, VAR_11->index, ((void*)0), ((void*)0));
  FUNC_0(VAR_5, VAR_3, VAR_5);
  if (VAR_10 || VAR_6->stop)
   break;
 }


 while (!FUNC_2()) {
  FUNC_5(VAR_0);
  FUNC_4();
 }
 return 0;
}
