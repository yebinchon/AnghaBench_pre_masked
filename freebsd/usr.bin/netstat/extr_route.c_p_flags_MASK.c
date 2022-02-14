
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct bits {int b_mask; int b_name; } ;


 struct bits* VAR_0 ;
 int FUNC_0 (int) ;
 int FUNC_1 (char*) ;
 int FUNC_2 (char const*,int ) ;
 int FUNC_3 (char*) ;

__attribute__((used)) static void
FUNC_4(int VAR_1, const char *VAR_2)
{
 struct bits *VAR_3;

 FUNC_2(VAR_2, FUNC_0(VAR_1));

 FUNC_3("flags_pretty");
 for (VAR_3 = VAR_0; VAR_3->b_mask; VAR_3++)
  if (VAR_3->b_mask & VAR_1)
   FUNC_2("{le:flags_pretty/%s}", VAR_3->b_name);
 FUNC_1("flags_pretty");
}
