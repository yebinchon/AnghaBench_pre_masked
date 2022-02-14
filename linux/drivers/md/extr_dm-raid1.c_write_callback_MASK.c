
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_4__ TYPE_2__ ;
typedef struct TYPE_3__ TYPE_1__ ;


struct TYPE_3__ {int head; } ;
struct mirror_set {unsigned int nr_mirrors; int lock; TYPE_1__ failures; scalar_t__ mirror; } ;
struct bio {int bi_status; } ;
struct TYPE_4__ {struct mirror_set* ms; } ;


 int VAR_0 ;
 int VAR_1 ;
 scalar_t__ VAR_2 ;
 int FUNC_0 (struct bio*) ;
 TYPE_2__* FUNC_1 (struct bio*) ;
 int FUNC_2 (TYPE_1__*,struct bio*) ;
 scalar_t__ FUNC_3 (struct bio*) ;
 int FUNC_4 (struct bio*,int *) ;
 int FUNC_5 (scalar_t__,int ) ;
 scalar_t__ FUNC_6 (int) ;
 int FUNC_7 (int *,unsigned long) ;
 int FUNC_8 (int *,unsigned long) ;
 scalar_t__ FUNC_9 (unsigned int,unsigned long*) ;
 int FUNC_10 (struct mirror_set*) ;

__attribute__((used)) static void FUNC_11(unsigned long VAR_3, void *VAR_4)
{
 unsigned VAR_5;
 struct bio *VAR_6 = (struct bio *) VAR_4;
 struct mirror_set *VAR_7;
 int VAR_8 = 0;
 unsigned long VAR_9;

 VAR_7 = FUNC_1(VAR_6)->ms;
 FUNC_4(VAR_6, ((void*)0));







 if (FUNC_6(!VAR_3)) {
  FUNC_0(VAR_6);
  return;
 }





 if (FUNC_3(VAR_6) == VAR_2) {
  VAR_6->bi_status = VAR_0;
  FUNC_0(VAR_6);
  return;
 }

 for (VAR_5 = 0; VAR_5 < VAR_7->nr_mirrors; VAR_5++)
  if (FUNC_9(VAR_5, &VAR_3))
   FUNC_5(VAR_7->mirror + VAR_5, VAR_1);






 FUNC_7(&VAR_7->lock, VAR_9);
 if (!VAR_7->failures.head)
  VAR_8 = 1;
 FUNC_2(&VAR_7->failures, VAR_6);
 FUNC_8(&VAR_7->lock, VAR_9);
 if (VAR_8)
  FUNC_10(VAR_7);
}
