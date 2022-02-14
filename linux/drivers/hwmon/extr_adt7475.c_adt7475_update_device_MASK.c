
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct device {int dummy; } ;
struct adt7475_data {int valid; int lock; scalar_t__ measure_updated; } ;


 struct adt7475_data* FUNC_0 (int) ;
 int VAR_0 ;
 int FUNC_1 (struct device*) ;
 struct adt7475_data* FUNC_2 (struct device*) ;
 scalar_t__ VAR_1 ;
 int FUNC_3 (int *) ;
 int FUNC_4 (int *) ;
 scalar_t__ FUNC_5 (scalar_t__,scalar_t__) ;

__attribute__((used)) static struct adt7475_data *FUNC_6(struct device *VAR_2)
{
 struct adt7475_data *VAR_3 = FUNC_2(VAR_2);
 int VAR_4;

 FUNC_3(&VAR_3->lock);


 if (FUNC_5(VAR_1, VAR_3->measure_updated + VAR_0 * 2) ||
     !VAR_3->valid) {
  VAR_4 = FUNC_1(VAR_2);
  if (VAR_4) {
   VAR_3->valid = 0;
   FUNC_4(&VAR_3->lock);
   return FUNC_0(VAR_4);
  }
  VAR_3->measure_updated = VAR_1;
  VAR_3->valid = 1;
 }

 FUNC_4(&VAR_3->lock);

 return VAR_3;
}
