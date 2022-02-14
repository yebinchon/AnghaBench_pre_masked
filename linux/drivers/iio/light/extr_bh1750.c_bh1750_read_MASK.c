
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct bh1750_data {unsigned long mtreg; int client; struct bh1750_chip_info* chip_info; } ;
struct bh1750_chip_info {unsigned long mtreg_to_usec; } ;
typedef int __be16 ;


 int VAR_0 ;
 int FUNC_0 (int ) ;
 int FUNC_1 (int ,char*,int) ;
 int FUNC_2 (int ,int ) ;
 int FUNC_3 (unsigned long,unsigned long) ;

__attribute__((used)) static int FUNC_4(struct bh1750_data *VAR_1, int *VAR_2)
{
 int VAR_3;
 __be16 VAR_4;
 const struct bh1750_chip_info *VAR_5 = VAR_1->chip_info;
 unsigned long VAR_6 = VAR_5->mtreg_to_usec * VAR_1->mtreg;





 VAR_3 = FUNC_2(VAR_1->client, VAR_0);
 if (VAR_3 < 0)
  return VAR_3;

 FUNC_3(VAR_6 + 15000, VAR_6 + 40000);

 VAR_3 = FUNC_1(VAR_1->client, (char *)&VAR_4, 2);
 if (VAR_3 < 0)
  return VAR_3;

 *VAR_2 = FUNC_0(VAR_4);

 return 0;
}
