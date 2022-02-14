
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int u8 ;
struct us5182d_data {scalar_t__ power_mode; int als_enabled; int px_enabled; int client; } ;


 int VAR_0 ;
 scalar_t__ VAR_1 ;
 int VAR_2 ;
 int FUNC_0 (int ,int ) ;
 int FUNC_1 (int ,int ,int) ;

__attribute__((used)) static int FUNC_2(struct us5182d_data *VAR_3, u8 VAR_4)
{
 int VAR_5;

 if (VAR_3->power_mode == VAR_1)
  return 0;

 VAR_5 = FUNC_0(VAR_3->client, VAR_2);
 if (VAR_5 < 0)
  return VAR_5;

 VAR_5 = VAR_5 & ~VAR_0;
 VAR_5 = VAR_5 | VAR_4;

 VAR_5 = FUNC_1(VAR_3->client, VAR_2, VAR_5);
 if (VAR_5 < 0)
  return VAR_5;

 if (VAR_4 & VAR_0) {
  VAR_3->als_enabled = 0;
  VAR_3->px_enabled = 0;
 }

 return VAR_5;
}
