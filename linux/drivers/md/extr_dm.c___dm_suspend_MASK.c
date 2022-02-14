
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct mapped_device {int queue; int io_barrier; int flags; int wq; int suspend_lock; } ;
struct dm_table {int dummy; } ;


 int VAR_0 ;
 int VAR_1 ;
 unsigned int VAR_2 ;
 unsigned int VAR_3 ;
 int FUNC_0 (int,int *) ;
 int FUNC_1 (struct mapped_device*) ;
 int FUNC_2 (struct mapped_device*) ;
 scalar_t__ FUNC_3 (struct mapped_device*) ;
 int FUNC_4 (int ) ;
 int FUNC_5 (int ) ;
 int FUNC_6 (struct dm_table*) ;
 int FUNC_7 (struct dm_table*) ;
 int FUNC_8 (struct mapped_device*,long) ;
 int FUNC_9 (int ) ;
 int FUNC_10 (struct mapped_device*) ;
 int FUNC_11 (int *) ;
 int FUNC_12 (char*,int ) ;
 int FUNC_13 (int,int *) ;
 int FUNC_14 (int *) ;
 int FUNC_15 (struct mapped_device*) ;

__attribute__((used)) static int FUNC_16(struct mapped_device *VAR_4, struct dm_table *VAR_5,
   unsigned VAR_6, long VAR_7,
   int VAR_8)
{
 bool VAR_9 = VAR_6 & VAR_2;
 bool VAR_10 = VAR_6 & VAR_3;
 int VAR_11;

 FUNC_11(&VAR_4->suspend_lock);





 if (VAR_10)
  FUNC_13(VAR_1, &VAR_4->flags);
 else
  FUNC_12("%s: suspending with flush\n", FUNC_1(VAR_4));





 FUNC_6(VAR_5);







 if (!VAR_10 && VAR_9) {
  VAR_11 = FUNC_10(VAR_4);
  if (VAR_11) {
   FUNC_7(VAR_5);
   return VAR_11;
  }
 }
 FUNC_13(VAR_0, &VAR_4->flags);
 if (VAR_5)
  FUNC_14(&VAR_4->io_barrier);





 if (FUNC_3(VAR_4))
  FUNC_5(VAR_4->queue);

 FUNC_9(VAR_4->wq);






 VAR_11 = FUNC_8(VAR_4, VAR_7);
 if (!VAR_11)
  FUNC_13(VAR_8, &VAR_4->flags);

 if (VAR_10)
  FUNC_0(VAR_1, &VAR_4->flags);
 if (VAR_5)
  FUNC_14(&VAR_4->io_barrier);


 if (VAR_11 < 0) {
  FUNC_2(VAR_4);

  if (FUNC_3(VAR_4))
   FUNC_4(VAR_4->queue);

  FUNC_15(VAR_4);
  FUNC_7(VAR_5);

 }

 return VAR_11;
}
