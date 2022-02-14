
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_3__ TYPE_1__ ;


typedef int __be32 ;
struct TYPE_3__ {scalar_t__ opal_no; } ;


 int FUNC_0 (TYPE_1__*) ;
 scalar_t__ FUNC_1 (int const) ;
 TYPE_1__* VAR_0 ;

__attribute__((used)) static int FUNC_2(const __be32 *VAR_1, int VAR_2)
{
 int VAR_3, VAR_4;
 int VAR_5 = 0;

 for (VAR_3 = 0; VAR_3 < VAR_2; VAR_3++)
  for (VAR_4 = 0; VAR_4 < FUNC_0(VAR_0); VAR_4++)
   if (FUNC_1(VAR_1[VAR_3]) == VAR_0[VAR_4].opal_no)
    VAR_5++;

 return VAR_5;
}
