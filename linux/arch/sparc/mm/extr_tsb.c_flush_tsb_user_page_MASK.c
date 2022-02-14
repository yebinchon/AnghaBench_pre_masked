
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_4__ TYPE_2__ ;
typedef struct TYPE_3__ TYPE_1__ ;


struct TYPE_4__ {int lock; TYPE_1__* tsb_block; } ;
struct mm_struct {TYPE_2__ context; } ;
struct TYPE_3__ {unsigned long tsb_nentries; scalar_t__ tsb; } ;


 size_t VAR_0 ;
 size_t VAR_1 ;
 unsigned int VAR_2 ;
 unsigned int VAR_3 ;
 int FUNC_0 (unsigned long,unsigned long,unsigned int,unsigned long,unsigned int) ;
 int FUNC_1 (unsigned long,unsigned long,unsigned int,unsigned long) ;
 unsigned long FUNC_2 (unsigned long) ;
 scalar_t__ VAR_4 ;
 scalar_t__ VAR_5 ;
 int FUNC_3 (int *,unsigned long) ;
 int FUNC_4 (int *,unsigned long) ;
 scalar_t__ VAR_6 ;

void FUNC_5(struct mm_struct *VAR_7, unsigned long VAR_8,
    unsigned int VAR_9)
{
 unsigned long VAR_10, VAR_11, VAR_12;

 FUNC_3(&VAR_7->context.lock, VAR_12);

 if (VAR_9 < VAR_3) {
  VAR_11 = (unsigned long) VAR_7->context.tsb_block[VAR_0].tsb;
  VAR_10 = VAR_7->context.tsb_block[VAR_0].tsb_nentries;
  if (VAR_6 == VAR_4 || VAR_6 == VAR_5)
   VAR_11 = FUNC_2(VAR_11);
  if (VAR_9 == VAR_2)
   FUNC_1(VAR_11, VAR_8, VAR_2,
           VAR_10);





 }
 FUNC_4(&VAR_7->context.lock, VAR_12);
}
