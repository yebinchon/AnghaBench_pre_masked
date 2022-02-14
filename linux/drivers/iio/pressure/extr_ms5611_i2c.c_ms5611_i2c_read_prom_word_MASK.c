
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int u16 ;
struct ms5611_state {int client; } ;
struct device {int dummy; } ;


 scalar_t__ VAR_0 ;
 int FUNC_0 (struct device*) ;
 int FUNC_1 (int ,scalar_t__) ;
 struct ms5611_state* FUNC_2 (int ) ;

__attribute__((used)) static int FUNC_3(struct device *VAR_1, int VAR_2, u16 *VAR_3)
{
 int VAR_4;
 struct ms5611_state *VAR_5 = FUNC_2(FUNC_0(VAR_1));

 VAR_4 = FUNC_1(VAR_5->client,
   VAR_0 + (VAR_2 << 1));
 if (VAR_4 < 0)
  return VAR_4;

 *VAR_3 = VAR_4;

 return 0;
}
