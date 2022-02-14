
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct lmp91000_data {int chan_select; int* buffer; int completion; int trig; int regmap; } ;


 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int VAR_3 ;
 int VAR_4 ;
 int VAR_5 ;
 int FUNC_0 (int ) ;
 int FUNC_1 (int ,int ,int*) ;
 int FUNC_2 (int ,int ,int) ;
 int FUNC_3 (int *) ;
 int FUNC_4 (int,int) ;
 int FUNC_5 (int *,int ) ;

__attribute__((used)) static int FUNC_6(struct lmp91000_data *VAR_6, int VAR_7, int *VAR_8)
{
 int VAR_9, VAR_10;

 VAR_10 = FUNC_1(VAR_6->regmap, VAR_3, &VAR_9);
 if (VAR_10)
  return -VAR_0;

 VAR_10 = FUNC_2(VAR_6->regmap, VAR_3, VAR_7);
 if (VAR_10)
  return -VAR_0;


 if (VAR_9 != VAR_7 && VAR_7 == VAR_5)
  FUNC_4(3000, 4000);

 VAR_6->chan_select = VAR_7 != VAR_4;

 FUNC_0(VAR_6->trig);

 VAR_10 = FUNC_5(&VAR_6->completion, VAR_2);
 FUNC_3(&VAR_6->completion);

 if (!VAR_10)
  return -VAR_1;

 *VAR_8 = VAR_6->buffer[VAR_6->chan_select];

 return 0;
}
