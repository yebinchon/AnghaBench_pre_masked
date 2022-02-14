
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


struct hashfile {unsigned int offset; int buffer; int ctx; } ;
struct TYPE_2__ {int (* update_fn ) (int *,int ,unsigned int) ;} ;


 int FUNC_0 (struct hashfile*,int ,unsigned int) ;
 int FUNC_1 (int *,int ,unsigned int) ;
 TYPE_1__* VAR_0 ;

void FUNC_2(struct hashfile *VAR_1)
{
 unsigned VAR_2 = VAR_1->offset;

 if (VAR_2) {
  VAR_0->update_fn(&VAR_1->ctx, VAR_1->buffer, VAR_2);
  FUNC_0(VAR_1, VAR_1->buffer, VAR_2);
  VAR_1->offset = 0;
 }
}
