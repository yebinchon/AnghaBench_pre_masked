
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_3__ TYPE_1__ ;


typedef scalar_t__ u32 ;
struct TYPE_3__ {scalar_t__ num; scalar_t__ den; } ;


 unsigned int FUNC_0 (TYPE_1__*) ;
 int VAR_0 ;
 TYPE_1__* VAR_1 ;

__attribute__((used)) static int FUNC_1(u32 VAR_2, u32 VAR_3)
{
 unsigned int VAR_4;

 for (VAR_4 = 0; VAR_4 < FUNC_0(VAR_1); VAR_4++)
  if (VAR_1[VAR_4].num == VAR_2 &&
      VAR_1[VAR_4].den == VAR_3)
   break;

 if (VAR_4 == FUNC_0(VAR_1))
  return -VAR_0;

 return VAR_4;
}
