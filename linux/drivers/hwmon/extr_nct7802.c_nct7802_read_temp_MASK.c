
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef scalar_t__ u8 ;
struct nct7802_data {int access_lock; int regmap; } ;
typedef int s16 ;


 int FUNC_0 (int *) ;
 int FUNC_1 (int *) ;
 int FUNC_2 (int ,scalar_t__,unsigned int*) ;

__attribute__((used)) static int FUNC_3(struct nct7802_data *VAR_0,
        u8 VAR_1, u8 VAR_2, int *VAR_3)
{
 unsigned int VAR_4, VAR_5 = 0;
 int VAR_6;

 *VAR_3 = 0;

 FUNC_0(&VAR_0->access_lock);
 VAR_6 = FUNC_2(VAR_0->regmap, VAR_1, &VAR_4);
 if (VAR_6 < 0)
  goto abort;
 VAR_4 <<= 8;
 if (VAR_2) {
  VAR_6 = FUNC_2(VAR_0->regmap, VAR_2, &VAR_5);
  if (VAR_6 < 0)
   goto abort;
 }
 VAR_4 |= VAR_5 & 0xe0;
 *VAR_3 = (s16)VAR_4 / 32 * 125;
abort:
 FUNC_1(&VAR_0->access_lock);
 return VAR_6;
}
