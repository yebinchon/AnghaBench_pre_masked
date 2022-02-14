
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct mapped_device {int holders; int suspend_lock; int queue; int flags; } ;
struct dm_table {int dummy; } ;


 int VAR_0 ;
 int FUNC_0 (char*,int ,scalar_t__) ;
 int FUNC_1 (int ) ;
 int VAR_1 ;
 int FUNC_2 (struct mapped_device*) ;
 int VAR_2 ;
 int VAR_3 ;
 scalar_t__ FUNC_3 (int *) ;
 int FUNC_4 (int ) ;
 int FUNC_5 (int ) ;
 int FUNC_6 (struct mapped_device*) ;
 int FUNC_7 (struct mapped_device*) ;
 struct dm_table* FUNC_8 (struct mapped_device*,int*) ;
 int FUNC_9 (struct mapped_device*,int) ;
 int FUNC_10 (struct mapped_device*) ;
 int FUNC_11 (struct mapped_device*) ;
 int FUNC_12 (int ) ;
 int FUNC_13 (struct dm_table*) ;
 int FUNC_14 (struct dm_table*) ;
 int FUNC_15 (struct mapped_device*) ;
 int FUNC_16 (int *,int ,int ) ;
 int FUNC_17 () ;
 int FUNC_18 (int) ;
 int FUNC_19 (int *) ;
 int FUNC_20 (int *) ;
 int FUNC_21 (int ,int *) ;
 int FUNC_22 (int *) ;
 int FUNC_23 (int *) ;

__attribute__((used)) static void FUNC_24(struct mapped_device *VAR_4, bool VAR_5)
{
 struct dm_table *VAR_6;
 int VAR_7;

 FUNC_17();

 FUNC_22(&VAR_3);
 FUNC_16(&VAR_2, VAR_1, FUNC_1(FUNC_5(FUNC_7(VAR_4))));
 FUNC_21(VAR_0, &VAR_4->flags);
 FUNC_23(&VAR_3);

 FUNC_4(VAR_4->queue);





 FUNC_19(&VAR_4->suspend_lock);
 VAR_6 = FUNC_8(VAR_4, &VAR_7);
 if (!FUNC_10(VAR_4)) {
  FUNC_14(VAR_6);
  FUNC_13(VAR_6);
 }

 FUNC_9(VAR_4, VAR_7);
 FUNC_20(&VAR_4->suspend_lock);







 if (VAR_5)
  while (FUNC_3(&VAR_4->holders))
   FUNC_18(1);
 else if (FUNC_3(&VAR_4->holders))
  FUNC_0("%s: Forcibly removing mapped_device still in use! (%d users)",
         FUNC_6(VAR_4), FUNC_3(&VAR_4->holders));

 FUNC_11(VAR_4);
 FUNC_12(FUNC_2(VAR_4));
 FUNC_15(VAR_4);
}
