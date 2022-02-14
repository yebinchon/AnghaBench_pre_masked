
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct ms5611_state {int client; } ;
struct device {int dummy; } ;


 int VAR_0 ;
 int FUNC_0 (struct device*) ;
 int FUNC_1 (int ,int ) ;
 struct ms5611_state* FUNC_2 (int ) ;

__attribute__((used)) static int FUNC_3(struct device *VAR_1)
{
 struct ms5611_state *VAR_2 = FUNC_2(FUNC_0(VAR_1));

 return FUNC_1(VAR_2->client, VAR_0);
}
