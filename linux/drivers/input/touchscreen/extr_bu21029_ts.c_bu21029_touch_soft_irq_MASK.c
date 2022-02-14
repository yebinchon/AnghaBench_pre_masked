
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int u8 ;
struct bu21029_ts_data {int timer; int client; } ;
typedef int irqreturn_t ;
typedef int buf ;


 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int VAR_3 ;
 int FUNC_0 (struct bu21029_ts_data*,int *) ;
 int FUNC_1 (int ,int ,int,int *) ;
 scalar_t__ VAR_4 ;
 int FUNC_2 (int *,scalar_t__) ;
 scalar_t__ FUNC_3 (int ) ;

__attribute__((used)) static irqreturn_t FUNC_4(int VAR_5, void *VAR_6)
{
 struct bu21029_ts_data *VAR_7 = VAR_6;
 u8 VAR_8[VAR_1];
 int VAR_9;





 VAR_9 = FUNC_1(VAR_7->client, VAR_0,
           sizeof(VAR_8), VAR_8);
 if (VAR_9 < 0)
  goto out;

 FUNC_0(VAR_7, VAR_8);


 FUNC_2(&VAR_7->timer,
    VAR_4 + FUNC_3(VAR_3));

out:
 return VAR_2;
}
