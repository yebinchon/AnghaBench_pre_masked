
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct sdma_engine {int dev; } ;


 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int FUNC_0 (int ,int ,char const*,int ,int ,struct sdma_engine*,int ) ;
 int VAR_3 ;

__attribute__((used)) static int FUNC_1(struct sdma_engine *VAR_4,
  const char *VAR_5)
{
 int VAR_6;

 VAR_6 = FUNC_0(VAR_2,
   VAR_0, VAR_5, VAR_4->dev,
   VAR_1, VAR_4, VAR_3);

 return VAR_6;
}
