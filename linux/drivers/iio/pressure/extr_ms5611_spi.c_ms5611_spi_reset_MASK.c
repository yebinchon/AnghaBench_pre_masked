
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int u8 ;
struct ms5611_state {int client; } ;
struct device {int dummy; } ;


 int VAR_0 ;
 int FUNC_0 (struct device*) ;
 struct ms5611_state* FUNC_1 (int ) ;
 int FUNC_2 (int ,int *,int,int *,int ) ;

__attribute__((used)) static int FUNC_3(struct device *VAR_1)
{
 u8 VAR_2 = VAR_0;
 struct ms5611_state *VAR_3 = FUNC_1(FUNC_0(VAR_1));

 return FUNC_2(VAR_3->client, &VAR_2, 1, ((void*)0), 0);
}
