
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


struct port_buffer {unsigned int len; scalar_t__ offset; } ;
struct TYPE_2__ {unsigned int bytes_received; } ;
struct port {TYPE_1__ stats; int in_vq; struct port_buffer* inbuf; } ;


 struct port_buffer* FUNC_0 (int ,unsigned int*) ;

__attribute__((used)) static struct port_buffer *FUNC_1(struct port *VAR_0)
{
 struct port_buffer *VAR_1;
 unsigned int VAR_2;

 if (VAR_0->inbuf)
  return VAR_0->inbuf;

 VAR_1 = FUNC_0(VAR_0->in_vq, &VAR_2);
 if (VAR_1) {
  VAR_1->len = VAR_2;
  VAR_1->offset = 0;
  VAR_0->stats.bytes_received += VAR_2;
 }
 return VAR_1;
}
