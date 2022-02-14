
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_3__ TYPE_1__ ;


struct ccp_sg_workarea {unsigned int bytes_left; scalar_t__ sg_used; TYPE_1__* sg; } ;
struct TYPE_3__ {scalar_t__ length; } ;


 unsigned int FUNC_0 (int ,unsigned int,unsigned int) ;
 TYPE_1__* FUNC_1 (TYPE_1__*) ;
 int VAR_0 ;

__attribute__((used)) static void FUNC_2(struct ccp_sg_workarea *VAR_1, unsigned int VAR_2)
{
 unsigned int VAR_3 = FUNC_0(VAR_0, VAR_2, VAR_1->bytes_left);

 if (!VAR_1->sg)
  return;

 VAR_1->sg_used += VAR_3;
 VAR_1->bytes_left -= VAR_3;
 if (VAR_1->sg_used == VAR_1->sg->length) {
  VAR_1->sg = FUNC_1(VAR_1->sg);
  VAR_1->sg_used = 0;
 }
}
