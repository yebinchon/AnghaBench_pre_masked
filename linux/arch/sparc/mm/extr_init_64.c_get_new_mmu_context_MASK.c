
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


struct TYPE_2__ {unsigned long sparc64_ctx_val; } ;
struct mm_struct {TYPE_1__ context; } ;


 int VAR_0 ;
 int VAR_1 ;
 unsigned long VAR_2 ;
 int FUNC_0 (TYPE_1__) ;
 int VAR_3 ;
 int FUNC_1 (int ) ;
 int VAR_4 ;
 unsigned long FUNC_2 (unsigned long*,unsigned long,int) ;
 int FUNC_3 (struct mm_struct*) ;
 unsigned long* VAR_5 ;
 int FUNC_4 () ;
 int FUNC_5 (int *) ;
 int FUNC_6 (int *) ;
 int VAR_6 ;
 scalar_t__ FUNC_7 (int ) ;

void FUNC_8(struct mm_struct *VAR_7)
{
 unsigned long VAR_8, VAR_9;
 unsigned long VAR_10;

 FUNC_5(&VAR_4);
retry:

 if (FUNC_7(FUNC_0(VAR_7->context)))
  goto out;
 VAR_10 = (VAR_7->context.sparc64_ctx_val & VAR_2);
 VAR_8 = (VAR_6 + 1) & VAR_1;
 VAR_9 = FUNC_2(VAR_5, 1 << VAR_0, VAR_8);
 if (VAR_9 >= (1 << VAR_0)) {
  VAR_9 = FUNC_2(VAR_5, VAR_8, 1);
  if (VAR_9 >= VAR_8) {
   FUNC_4();
   goto retry;
  }
 }
 if (VAR_7->context.sparc64_ctx_val)
  FUNC_1(FUNC_3(VAR_7));
 VAR_5[VAR_9>>6] |= (1UL << (VAR_9 & 63));
 VAR_9 |= (VAR_6 & VAR_3);
 VAR_6 = VAR_9;
 VAR_7->context.sparc64_ctx_val = VAR_9 | VAR_10;
out:
 FUNC_6(&VAR_4);
}
