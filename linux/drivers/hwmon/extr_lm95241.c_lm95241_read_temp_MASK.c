
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int u32 ;
struct lm95241_data {int config; int model; int status; int * temp; } ;
struct device {int dummy; } ;


 int FUNC_0 (int) ;
 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int VAR_3 ;
 int VAR_4 ;
 int VAR_5 ;
 int VAR_6 ;





 struct lm95241_data* FUNC_1 (struct device*) ;
 long FUNC_2 (int ,int ) ;
 long FUNC_3 (int ,int ) ;

__attribute__((used)) static int FUNC_4(struct device *VAR_7, u32 VAR_8, int VAR_9,
        long *VAR_10)
{
 struct lm95241_data *VAR_11 = FUNC_1(VAR_7);

 switch (VAR_8) {
 case 131:
  if (!VAR_9 || (VAR_11->config & FUNC_0(VAR_9 - 1)))
   *VAR_10 = FUNC_2(VAR_11->temp[VAR_9 * 2],
      VAR_11->temp[VAR_9 * 2 + 1]);
  else
   *VAR_10 = FUNC_3(VAR_11->temp[VAR_9 * 2],
      VAR_11->temp[VAR_9 * 2 + 1]);
  return 0;
 case 129:
  if (VAR_9 == 1)
   *VAR_10 = (VAR_11->config & VAR_1) ? -128000 : 0;
  else
   *VAR_10 = (VAR_11->config & VAR_4) ? -128000 : 0;
  return 0;
 case 130:
  if (VAR_9 == 1)
   *VAR_10 = (VAR_11->config & VAR_1) ? 127875 : 255875;
  else
   *VAR_10 = (VAR_11->config & VAR_4) ? 127875 : 255875;
  return 0;
 case 128:
  if (VAR_9 == 1)
   *VAR_10 = (VAR_11->model & VAR_3) ? 1 : 2;
  else
   *VAR_10 = (VAR_11->model & VAR_6) ? 1 : 2;
  return 0;
 case 132:
  if (VAR_9 == 1)
   *VAR_10 = !!(VAR_11->status & VAR_2);
  else
   *VAR_10 = !!(VAR_11->status & VAR_5);
  return 0;
 default:
  return -VAR_0;
 }
}
