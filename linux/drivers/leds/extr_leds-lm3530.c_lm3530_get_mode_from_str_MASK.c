
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_3__ TYPE_1__ ;


struct TYPE_3__ {int mode_val; int mode; } ;


 int FUNC_0 (TYPE_1__*) ;
 int VAR_0 ;
 TYPE_1__* VAR_1 ;
 scalar_t__ FUNC_1 (char const*,int ) ;

__attribute__((used)) static int FUNC_2(const char *VAR_2)
{
 int VAR_3;

 for (VAR_3 = 0; VAR_3 < FUNC_0(VAR_1); VAR_3++)
  if (FUNC_1(VAR_2, VAR_1[VAR_3].mode))
   return VAR_1[VAR_3].mode_val;

 return -VAR_0;
}
