
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct max3191x_chip {scalar_t__ mode; int undervolt1; int ignore_uv; int overtemp; int crc_error; int fault; } ;


 scalar_t__ VAR_0 ;
 scalar_t__ FUNC_0 (unsigned int,int ) ;

__attribute__((used)) static bool FUNC_1(struct max3191x_chip *VAR_1,
          unsigned int VAR_2)
{

 if (!VAR_1->ignore_uv && FUNC_0(VAR_2, VAR_1->fault))
  return 1;

 if (VAR_1->mode == VAR_0)
  return 0;

 return FUNC_0(VAR_2, VAR_1->crc_error) ||
        FUNC_0(VAR_2, VAR_1->overtemp) ||
        (!VAR_1->ignore_uv &&
  FUNC_0(VAR_2, VAR_1->undervolt1));
}
