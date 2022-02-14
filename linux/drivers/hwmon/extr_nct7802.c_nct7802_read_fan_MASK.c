
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int u8 ;
struct nct7802_data {int access_lock; int regmap; } ;


 int FUNC_0 (unsigned int,int) ;
 int VAR_0 ;
 int FUNC_1 (int *) ;
 int FUNC_2 (int *) ;
 int FUNC_3 (int ,int ,unsigned int*) ;

__attribute__((used)) static int FUNC_4(struct nct7802_data *VAR_1, u8 VAR_2)
{
 unsigned int VAR_3, VAR_4;
 int VAR_5;

 FUNC_1(&VAR_1->access_lock);
 VAR_5 = FUNC_3(VAR_1->regmap, VAR_2, &VAR_3);
 if (VAR_5 < 0)
  goto abort;
 VAR_5 = FUNC_3(VAR_1->regmap, VAR_0, &VAR_4);
 if (VAR_5 < 0)
  goto abort;
 VAR_5 = (VAR_3 << 5) | (VAR_4 >> 3);

 if (VAR_5 == 0x1fff)
  VAR_5 = 0;
 else if (VAR_5)
  VAR_5 = FUNC_0(1350000U, VAR_5);
abort:
 FUNC_2(&VAR_1->access_lock);
 return VAR_5;
}
