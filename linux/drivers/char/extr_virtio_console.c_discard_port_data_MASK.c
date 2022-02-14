
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


struct port_buffer {scalar_t__ offset; scalar_t__ len; } ;
struct TYPE_2__ {int bytes_discarded; } ;
struct port {int dev; int * inbuf; int in_vq; TYPE_1__ stats; int portdev; } ;


 scalar_t__ FUNC_0 (int ,struct port_buffer*) ;
 int FUNC_1 (int ,char*,unsigned int) ;
 int FUNC_2 (struct port_buffer*,int) ;
 struct port_buffer* FUNC_3 (struct port*) ;

__attribute__((used)) static void FUNC_4(struct port *VAR_0)
{
 struct port_buffer *VAR_1;
 unsigned int VAR_2;

 if (!VAR_0->portdev) {

  return;
 }
 VAR_1 = FUNC_3(VAR_0);

 VAR_2 = 0;
 while (VAR_1) {
  VAR_0->stats.bytes_discarded += VAR_1->len - VAR_1->offset;
  if (FUNC_0(VAR_0->in_vq, VAR_1) < 0) {
   VAR_2++;
   FUNC_2(VAR_1, 0);
  }
  VAR_0->inbuf = ((void*)0);
  VAR_1 = FUNC_3(VAR_0);
 }
 if (VAR_2)
  FUNC_1(VAR_0->dev, "Errors adding %d buffers back to vq\n",
    VAR_2);
}
