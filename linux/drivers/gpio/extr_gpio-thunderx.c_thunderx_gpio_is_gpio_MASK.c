
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct thunderx_gpio {int dummy; } ;


 int FUNC_0 (int,char*,unsigned int) ;
 int FUNC_1 (struct thunderx_gpio*,unsigned int) ;

__attribute__((used)) static bool FUNC_2(struct thunderx_gpio *VAR_0,
      unsigned int VAR_1)
{
 bool VAR_2 = FUNC_1(VAR_0, VAR_1);

 FUNC_0(!VAR_2, "Pin %d not available for GPIO\n", VAR_1);

 return VAR_2;
}
