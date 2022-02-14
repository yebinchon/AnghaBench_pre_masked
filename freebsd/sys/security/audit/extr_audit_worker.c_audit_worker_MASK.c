
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


struct kaudit_record {int dummy; } ;
struct kaudit_queue {int dummy; } ;
struct TYPE_2__ {scalar_t__ aq_lowater; } ;


 int VAR_0 ;
 scalar_t__ FUNC_0 (struct kaudit_queue*) ;
 struct kaudit_record* FUNC_1 (struct kaudit_queue*) ;
 int FUNC_2 (struct kaudit_queue*) ;
 int FUNC_3 (struct kaudit_queue*,struct kaudit_record*,int ) ;
 int FUNC_4 (struct kaudit_queue*,struct kaudit_record*,int ) ;
 int FUNC_5 (struct kaudit_record*) ;
 int VAR_1 ;
 struct kaudit_queue VAR_2 ;
 scalar_t__ VAR_3 ;
 TYPE_1__ VAR_4 ;
 int VAR_5 ;
 int VAR_6 ;
 int FUNC_6 (struct kaudit_record*) ;
 int FUNC_7 (int *) ;
 int FUNC_8 (int *,int *) ;
 int VAR_7 ;
 int FUNC_9 (int *,int ) ;
 int FUNC_10 (int *) ;
 int FUNC_11 (int *) ;

__attribute__((used)) static void
FUNC_12(void *VAR_8)
{
 struct kaudit_queue VAR_9;
 struct kaudit_record *VAR_10;
 int VAR_11;

 FUNC_2(&VAR_9);
 FUNC_10(&VAR_1);
 while (1) {
  FUNC_9(&VAR_1, VAR_0);




  while (FUNC_0(&VAR_2))
   FUNC_8(&VAR_6, &VAR_1);
  VAR_11 = 0;
  while ((VAR_10 = FUNC_1(&VAR_2))) {
   FUNC_4(&VAR_2, VAR_10, VAR_7);
   VAR_3--;
   if (VAR_3 == VAR_4.aq_lowater)
    VAR_11++;
   FUNC_3(&VAR_9, VAR_10, VAR_7);
  }
  if (VAR_11)
   FUNC_7(&VAR_5);

  FUNC_11(&VAR_1);
  while ((VAR_10 = FUNC_1(&VAR_9))) {
   FUNC_4(&VAR_9, VAR_10, VAR_7);
   FUNC_6(VAR_10);
   FUNC_5(VAR_10);
  }
  FUNC_10(&VAR_1);
 }
}
