
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct ms5611_state {int client; struct ms5611_osr* pressure_osr; struct ms5611_osr* temp_osr; } ;
struct ms5611_osr {unsigned long conv_usec; int cmd; } ;
struct device {int dummy; } ;
typedef int s32 ;


 int FUNC_0 (struct device*) ;
 int FUNC_1 (int ,int ) ;
 struct ms5611_state* FUNC_2 (int ) ;
 int FUNC_3 (struct ms5611_state*,int *) ;
 int FUNC_4 (unsigned long,unsigned long) ;

__attribute__((used)) static int FUNC_5(struct device *VAR_0,
       s32 *VAR_1, s32 *VAR_2)
{
 int VAR_3;
 struct ms5611_state *VAR_4 = FUNC_2(FUNC_0(VAR_0));
 const struct ms5611_osr *VAR_5 = VAR_4->temp_osr;

 VAR_3 = FUNC_1(VAR_4->client, VAR_5->cmd);
 if (VAR_3 < 0)
  return VAR_3;

 FUNC_4(VAR_5->conv_usec, VAR_5->conv_usec + (VAR_5->conv_usec / 10UL));
 VAR_3 = FUNC_3(VAR_4, VAR_1);
 if (VAR_3 < 0)
  return VAR_3;

 VAR_5 = VAR_4->pressure_osr;
 VAR_3 = FUNC_1(VAR_4->client, VAR_5->cmd);
 if (VAR_3 < 0)
  return VAR_3;

 FUNC_4(VAR_5->conv_usec, VAR_5->conv_usec + (VAR_5->conv_usec / 10UL));
 return FUNC_3(VAR_4, VAR_2);
}
