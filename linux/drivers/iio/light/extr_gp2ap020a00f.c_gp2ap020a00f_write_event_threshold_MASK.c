
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int u8 ;
struct gp2ap020a00f_data {int* thresh_val; int regmap; int flags; } ;
typedef enum gp2ap020a00f_thresh_val_id { ____Placeholder_gp2ap020a00f_thresh_val_id } gp2ap020a00f_thresh_val_id ;
typedef scalar_t__ __le16 ;


 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int FUNC_0 (int) ;
 scalar_t__ FUNC_1 (unsigned int) ;
 int FUNC_2 (int ,int ,int *,int) ;
 scalar_t__ FUNC_3 (int ,int *) ;

__attribute__((used)) static int FUNC_4(struct gp2ap020a00f_data *VAR_3,
    enum gp2ap020a00f_thresh_val_id VAR_4,
    bool VAR_5)
{
 __le16 VAR_6 = 0;
 unsigned int VAR_7;

 if (!VAR_5)
  VAR_7 = 0;
 else if (FUNC_3(VAR_0, &VAR_3->flags) &&
   VAR_4 != VAR_2 &&
   VAR_4 != VAR_1)




  VAR_7 = VAR_3->thresh_val[VAR_4] / 16;
 else
  VAR_7 = VAR_3->thresh_val[VAR_4] > 16000 ?
     16000 :
     VAR_3->thresh_val[VAR_4];

 VAR_6 = FUNC_1(VAR_7);

 return FUNC_2(VAR_3->regmap,
     FUNC_0(VAR_4),
     (u8 *)&VAR_6, 2);
}
