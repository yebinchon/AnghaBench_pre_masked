
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_6__ TYPE_3__ ;
typedef struct TYPE_5__ TYPE_2__ ;
typedef struct TYPE_4__ TYPE_1__ ;


struct TYPE_5__ {unsigned int vmalloc_seq; } ;
struct mm_struct {TYPE_2__ context; } ;
typedef int pgd_t ;
struct TYPE_4__ {unsigned int vmalloc_seq; } ;
struct TYPE_6__ {TYPE_1__ context; } ;


 int VAR_0 ;
 int VAR_1 ;
 TYPE_3__ VAR_2 ;
 int FUNC_0 (int ,int ,int) ;
 int FUNC_1 (int ) ;
 int FUNC_2 (struct mm_struct*,int ) ;
 int FUNC_3 (int ) ;

void FUNC_4(struct mm_struct *VAR_3)
{
 unsigned int VAR_4;

 do {
  VAR_4 = VAR_2.context.vmalloc_seq;
  FUNC_0(FUNC_2(VAR_3, VAR_1),
         FUNC_3(VAR_1),
         sizeof(pgd_t) * (FUNC_1(VAR_0) -
     FUNC_1(VAR_1)));
  VAR_3->context.vmalloc_seq = VAR_4;
 } while (VAR_4 != VAR_2.context.vmalloc_seq);
}
