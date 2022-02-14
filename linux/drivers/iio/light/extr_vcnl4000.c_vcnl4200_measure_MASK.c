
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct vcnl4200_channel {int reg; int lock; int last_measurement; int sampling_rate; } ;
struct vcnl4000_data {int client; } ;
typedef scalar_t__ s64 ;
typedef int ktime_t ;


 int FUNC_0 (int ,int ) ;
 int FUNC_1 (int ,int ) ;
 int FUNC_2 () ;
 scalar_t__ FUNC_3 (int ,int ) ;
 int FUNC_4 (int *) ;
 int FUNC_5 (int *) ;
 int FUNC_6 (scalar_t__,scalar_t__) ;

__attribute__((used)) static int FUNC_7(struct vcnl4000_data *VAR_0,
  struct vcnl4200_channel *VAR_1, int *VAR_2)
{
 int VAR_3;
 s64 VAR_4;
 ktime_t VAR_5;

 FUNC_4(&VAR_1->lock);

 VAR_5 = FUNC_1(VAR_1->last_measurement,
   VAR_1->sampling_rate);
 VAR_4 = FUNC_3(VAR_5, FUNC_2());
 if (VAR_4 > 0)
  FUNC_6(VAR_4, VAR_4 + 500);
 VAR_1->last_measurement = FUNC_2();

 FUNC_5(&VAR_1->lock);

 VAR_3 = FUNC_0(VAR_0->client, VAR_1->reg);
 if (VAR_3 < 0)
  return VAR_3;

 *VAR_2 = VAR_3;

 return 0;
}
