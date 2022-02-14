
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


struct TYPE_2__ {unsigned char* xmit_buf; } ;
struct ipoctal_channel {unsigned int pointer_read; int nb_bytes; int lock; TYPE_1__ tty_port; } ;


 unsigned int VAR_0 ;
 int FUNC_0 (int *,unsigned long) ;
 int FUNC_1 (int *,unsigned long) ;

__attribute__((used)) static inline int FUNC_2(struct ipoctal_channel *VAR_1,
         const unsigned char *VAR_2,
         int VAR_3)
{
 unsigned long VAR_4;
 int VAR_5;
 unsigned int *VAR_6 = &VAR_1->pointer_read;


 for (VAR_5 = 0; VAR_5 < VAR_3; VAR_5++) {
  if (VAR_5 <= (VAR_0 - VAR_1->nb_bytes)) {
   FUNC_0(&VAR_1->lock, VAR_4);
   VAR_1->tty_port.xmit_buf[*VAR_6] = VAR_2[VAR_5];
   *VAR_6 = (*VAR_6 + 1) % VAR_0;
   VAR_1->nb_bytes++;
   FUNC_1(&VAR_1->lock, VAR_4);
  } else {
   break;
  }
 }
 return VAR_5;
}
