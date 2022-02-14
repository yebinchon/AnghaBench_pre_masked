
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct regmap_async {int dummy; } ;
struct regmap_async_spi {struct regmap_async core; } ;


 int VAR_0 ;
 struct regmap_async_spi* FUNC_0 (int,int ) ;

__attribute__((used)) static struct regmap_async *FUNC_1(void)
{
 struct regmap_async_spi *VAR_1;

 VAR_1 = FUNC_0(sizeof(*VAR_1), VAR_0);
 if (!VAR_1)
  return ((void*)0);

 return &VAR_1->core;
}
