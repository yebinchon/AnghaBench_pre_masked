
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct mthca_icm_table {int obj_size; } ;
struct mthca_dev {int dummy; } ;


 int VAR_0 ;
 int FUNC_0 (struct mthca_dev*,struct mthca_icm_table*,int) ;
 int FUNC_1 (struct mthca_dev*,struct mthca_icm_table*,int) ;

int FUNC_2(struct mthca_dev *VAR_1, struct mthca_icm_table *VAR_2,
     int VAR_3, int VAR_4)
{
 int VAR_5 = VAR_0 / VAR_2->obj_size;
 int VAR_6, VAR_7;

 for (VAR_6 = VAR_3; VAR_6 <= VAR_4; VAR_6 += VAR_5) {
  VAR_7 = FUNC_0(VAR_1, VAR_2, VAR_6);
  if (VAR_7)
   goto fail;
 }

 return 0;

fail:
 while (VAR_6 > VAR_3) {
  VAR_6 -= VAR_5;
  FUNC_1(VAR_1, VAR_2, VAR_6);
 }

 return VAR_7;
}
