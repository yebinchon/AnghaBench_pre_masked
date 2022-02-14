
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct vb2_queue {scalar_t__ memory; struct vb2_buffer** bufs; } ;
struct vb2_buffer {int dummy; } ;


 unsigned long VAR_0 ;
 unsigned long VAR_1 ;
 scalar_t__ VAR_2 ;
 int FUNC_0 (struct vb2_queue*,unsigned long,unsigned int*,unsigned int*) ;
 int FUNC_1 (int,char*) ;
 void* FUNC_2 (struct vb2_buffer*,unsigned int) ;

unsigned long FUNC_3(struct vb2_queue *VAR_3,
        unsigned long VAR_4,
        unsigned long VAR_5,
        unsigned long VAR_6,
        unsigned long VAR_7)
{
 unsigned long VAR_8 = VAR_6 << VAR_1;
 struct vb2_buffer *VAR_9;
 unsigned int VAR_10, VAR_11;
 void *VAR_12;
 int VAR_13;

 if (VAR_3->memory != VAR_2) {
  FUNC_1(1, "queue is not currently set up for mmap\n");
  return -VAR_0;
 }




 VAR_13 = FUNC_0(VAR_3, VAR_8, &VAR_10, &VAR_11);
 if (VAR_13)
  return VAR_13;

 VAR_9 = VAR_3->bufs[VAR_10];

 VAR_12 = FUNC_2(VAR_9, VAR_11);
 return VAR_12 ? (unsigned long)VAR_12 : -VAR_0;
}
