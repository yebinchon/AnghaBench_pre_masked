
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int u8 ;
struct nct6683_data {int valid; int in_num; int temp_num; int have_fan; int update_lock; scalar_t__ last_updated; void** fan_min; void** rpm; void*** temp; void** temp_in; int * temp_index; void*** in; } ;
struct device {int dummy; } ;


 int FUNC_0 (void**) ;
 scalar_t__ VAR_0 ;
 int FUNC_1 (int) ;
 int FUNC_2 (int) ;
 int FUNC_3 (int ) ;
 struct nct6683_data* FUNC_4 (struct device*) ;
 int FUNC_5 (struct nct6683_data*,int,int) ;
 int FUNC_6 (struct nct6683_data*,int,int) ;
 scalar_t__ VAR_1 ;
 int FUNC_7 (int *) ;
 int FUNC_8 (int *) ;
 void* FUNC_9 (struct nct6683_data*,int) ;
 void* FUNC_10 (struct nct6683_data*,int ) ;
 int FUNC_11 (struct device*) ;
 scalar_t__ FUNC_12 (scalar_t__,scalar_t__) ;

__attribute__((used)) static struct nct6683_data *FUNC_13(struct device *VAR_2)
{
 struct nct6683_data *VAR_3 = FUNC_4(VAR_2);
 int VAR_4, VAR_5;

 FUNC_7(&VAR_3->update_lock);

 if (FUNC_12(VAR_1, VAR_3->last_updated + VAR_0) || !VAR_3->valid) {

  for (VAR_4 = 0; VAR_4 < VAR_3->in_num; VAR_4++) {
   for (VAR_5 = 0; VAR_5 < 3; VAR_5++) {
    int VAR_6 = FUNC_5(VAR_3, VAR_5, VAR_4);

    if (VAR_6 >= 0)
     VAR_3->in[VAR_5][VAR_4] =
      FUNC_9(VAR_3, VAR_6);
   }
  }


  for (VAR_4 = 0; VAR_4 < VAR_3->temp_num; VAR_4++) {
   u8 VAR_7 = VAR_3->temp_index[VAR_4];

   VAR_3->temp_in[VAR_4] = FUNC_10(VAR_3,
         FUNC_3(VAR_7));
   for (VAR_5 = 0; VAR_5 < 4; VAR_5++) {
    int VAR_8 = FUNC_6(VAR_3, VAR_5, VAR_4);

    if (VAR_8 >= 0)
     VAR_3->temp[VAR_5][VAR_4] =
      FUNC_9(VAR_3, VAR_8);
   }
  }


  for (VAR_4 = 0; VAR_4 < FUNC_0(VAR_3->rpm); VAR_4++) {
   if (!(VAR_3->have_fan & (1 << VAR_4)))
    continue;

   VAR_3->rpm[VAR_4] = FUNC_10(VAR_3,
      FUNC_2(VAR_4));
   VAR_3->fan_min[VAR_4] = FUNC_10(VAR_3,
      FUNC_1(VAR_4));
  }

  FUNC_11(VAR_2);

  VAR_3->last_updated = VAR_1;
  VAR_3->valid = 1;
 }

 FUNC_8(&VAR_3->update_lock);
 return VAR_3;
}
