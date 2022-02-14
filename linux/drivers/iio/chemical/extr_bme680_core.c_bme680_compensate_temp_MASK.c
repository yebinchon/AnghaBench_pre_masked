
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct bme680_calib {int par_t2; int par_t1; int par_t3; } ;
struct bme680_data {int t_fine; struct bme680_calib bme680; } ;
typedef int s64 ;
typedef int s32 ;
typedef int s16 ;


 int FUNC_0 (struct bme680_data*,struct bme680_calib*) ;

__attribute__((used)) static s16 FUNC_1(struct bme680_data *VAR_0,
      s32 VAR_1)
{
 struct bme680_calib *VAR_2 = &VAR_0->bme680;
 s64 VAR_3, VAR_4, VAR_5;
 s16 VAR_6;


 if (!VAR_2->par_t2)
  FUNC_0(VAR_0, VAR_2);

 VAR_3 = (VAR_1 >> 3) - (VAR_2->par_t1 << 1);
 VAR_4 = (VAR_3 * VAR_2->par_t2) >> 11;
 VAR_5 = ((VAR_3 >> 1) * (VAR_3 >> 1)) >> 12;
 VAR_5 = (VAR_5 * (VAR_2->par_t3 << 4)) >> 14;
 VAR_0->t_fine = VAR_4 + VAR_5;
 VAR_6 = (VAR_0->t_fine * 5 + 128) >> 8;

 return VAR_6;
}
