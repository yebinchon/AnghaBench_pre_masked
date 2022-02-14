
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct max6650_data {int speed; int client; int config; } ;


 int FUNC_0 (int ) ;
 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int VAR_3 ;
 unsigned long FUNC_1 (unsigned long,int ,int ) ;
 int VAR_4 ;
 int FUNC_2 (int ,int ,int) ;
 int FUNC_3 (struct max6650_data*,int ) ;

__attribute__((used)) static int FUNC_4(struct max6650_data *VAR_5, unsigned long VAR_6)
{
 int VAR_7, VAR_8;

 if (VAR_6 == 0)
  return FUNC_3(VAR_5, VAR_2);

 VAR_6 = FUNC_1(VAR_6, VAR_1, VAR_0);
 VAR_7 = FUNC_0(VAR_5->config);
 VAR_8 = ((VAR_4 * VAR_7) / (256 * VAR_6 / 60)) - 1;
 if (VAR_8 < 0)
  VAR_8 = 0;
 if (VAR_8 > 255)
  VAR_8 = 255;
 VAR_5->speed = VAR_8;

 return FUNC_2(VAR_5->client, VAR_3,
      VAR_5->speed);
}
