
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


struct line {struct chan* chan_out; struct chan* chan_in; } ;
struct chan {int data; int fd; TYPE_1__* ops; scalar_t__ primary; } ;
struct TYPE_2__ {int (* window_size ) (int ,int ,unsigned short*,unsigned short*) ;} ;


 int FUNC_0 (int ,int ,unsigned short*,unsigned short*) ;
 int FUNC_1 (int ,int ,unsigned short*,unsigned short*) ;

int FUNC_2(struct line *VAR_0, unsigned short *VAR_1,
        unsigned short *VAR_2)
{
 struct chan *VAR_3;

 VAR_3 = VAR_0->chan_in;
 if (VAR_3 && VAR_3->primary) {
  if (VAR_3->ops->window_size == ((void*)0))
   return 0;
  return VAR_3->ops->window_size(VAR_3->fd, VAR_3->data,
           VAR_1, VAR_2);
 }
 VAR_3 = VAR_0->chan_out;
 if (VAR_3 && VAR_3->primary) {
  if (VAR_3->ops->window_size == ((void*)0))
   return 0;
  return VAR_3->ops->window_size(VAR_3->fd, VAR_3->data,
           VAR_1, VAR_2);
 }
 return 0;
}
