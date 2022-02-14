
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct nct7802_data {int access_lock; int regmap; } ;


 int * VAR_0 ;
 int ** VAR_1 ;
 int * VAR_2 ;
 int** VAR_3 ;
 int VAR_4 ;
 int FUNC_0 (int *) ;
 int FUNC_1 (int *) ;
 unsigned int* VAR_5 ;
 int FUNC_2 (int ,int ,unsigned int*) ;

__attribute__((used)) static int FUNC_3(struct nct7802_data *VAR_6, int VAR_7, int VAR_8)
{
 unsigned int VAR_9, VAR_10;
 int VAR_11;

 FUNC_0(&VAR_6->access_lock);
 if (VAR_8 == 0) {
  VAR_11 = FUNC_2(VAR_6->regmap, VAR_0[VAR_7], &VAR_9);
  if (VAR_11 < 0)
   goto abort;
  VAR_11 = FUNC_2(VAR_6->regmap, VAR_4, &VAR_10);
  if (VAR_11 < 0)
   goto abort;
  VAR_11 = ((VAR_9 << 2) | (VAR_10 >> 6)) * VAR_5[VAR_7];
 } else {
  int VAR_12 = 8 - VAR_3[VAR_8 - 1][VAR_7];

  VAR_11 = FUNC_2(VAR_6->regmap,
      VAR_1[VAR_8 - 1][VAR_7], &VAR_9);
  if (VAR_11 < 0)
   goto abort;
  VAR_11 = FUNC_2(VAR_6->regmap, VAR_2[VAR_7],
      &VAR_10);
  if (VAR_11 < 0)
   goto abort;
  VAR_11 = (VAR_9 | ((VAR_10 << VAR_12) & 0x300)) * VAR_5[VAR_7];
 }
abort:
 FUNC_1(&VAR_6->access_lock);
 return VAR_11;
}
