
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct nct7802_data {int access_lock; int regmap; } ;


 unsigned long FUNC_0 (unsigned long,int) ;
 int ** VAR_0 ;
 int * VAR_1 ;
 int** VAR_2 ;
 unsigned long FUNC_1 (unsigned long,int ,int) ;
 int FUNC_2 (int *) ;
 int FUNC_3 (int *) ;
 int* VAR_3 ;
 int FUNC_4 (int ,int ,int,unsigned long) ;
 int FUNC_5 (int ,int ,unsigned long) ;

__attribute__((used)) static int FUNC_6(struct nct7802_data *VAR_4, int VAR_5, int VAR_6,
     unsigned long VAR_7)
{
 int VAR_8 = 8 - VAR_2[VAR_6 - 1][VAR_5];
 int VAR_9;

 VAR_7 = FUNC_1(VAR_7, 0, 0x3ff * VAR_3[VAR_5]);
 VAR_7 = FUNC_0(VAR_7, VAR_3[VAR_5]);

 FUNC_2(&VAR_4->access_lock);
 VAR_9 = FUNC_5(VAR_4->regmap,
      VAR_0[VAR_6 - 1][VAR_5],
      VAR_7 & 0xff);
 if (VAR_9 < 0)
  goto abort;

 VAR_9 = FUNC_4(VAR_4->regmap, VAR_1[VAR_5],
     0x0300 >> VAR_8, (VAR_7 & 0x0300) >> VAR_8);
abort:
 FUNC_3(&VAR_4->access_lock);
 return VAR_9;
}
