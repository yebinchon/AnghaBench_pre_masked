
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int u8 ;
struct nct7802_data {int access_lock; int regmap; } ;


 unsigned long FUNC_0 (unsigned int,unsigned long) ;
 unsigned long FUNC_1 (unsigned long,int ,int) ;
 int FUNC_2 (int *) ;
 int FUNC_3 (int *) ;
 int FUNC_4 (int ,int ,unsigned long) ;

__attribute__((used)) static int FUNC_5(struct nct7802_data *VAR_0, u8 VAR_1,
     u8 VAR_2, unsigned long VAR_3)
{
 int VAR_4;

 if (VAR_3)
  VAR_3 = FUNC_0(1350000U, VAR_3);
 else
  VAR_3 = 0x1fff;
 VAR_3 = FUNC_1(VAR_3, 0, 0x1fff);

 FUNC_2(&VAR_0->access_lock);
 VAR_4 = FUNC_4(VAR_0->regmap, VAR_1, VAR_3 & 0xff);
 if (VAR_4 < 0)
  goto abort;

 VAR_4 = FUNC_4(VAR_0->regmap, VAR_2, (VAR_3 & 0x1f00) >> 5);
abort:
 FUNC_3(&VAR_0->access_lock);
 return VAR_4;
}
