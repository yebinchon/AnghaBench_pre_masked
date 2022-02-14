
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


struct TYPE_2__ {scalar_t__ next; } ;
struct smscore_device_t {int bufferslock; TYPE_1__ buffers; } ;
struct smscore_buffer_t {int entry; } ;


 int FUNC_0 (int *) ;
 int FUNC_1 (TYPE_1__*) ;
 int FUNC_2 (int *,unsigned long) ;
 int FUNC_3 (int *,unsigned long) ;

__attribute__((used)) static struct smscore_buffer_t *FUNC_4(struct smscore_device_t *VAR_0)
{
 struct smscore_buffer_t *VAR_1 = ((void*)0);
 unsigned long VAR_2;

 FUNC_2(&VAR_0->bufferslock, VAR_2);
 if (!FUNC_1(&VAR_0->buffers)) {
  VAR_1 = (struct smscore_buffer_t *) VAR_0->buffers.next;
  FUNC_0(&VAR_1->entry);
 }
 FUNC_3(&VAR_0->bufferslock, VAR_2);
 return VAR_1;
}
