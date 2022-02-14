
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct cdg {int shadow_w; } ;
struct cc_var {struct cdg* cc_data; } ;


 int FUNC_0 (struct cc_var*,int ) ;
 int VAR_0 ;

__attribute__((used)) static void
FUNC_1(struct cc_var *VAR_1)
{
 struct cdg *VAR_2 = VAR_1->cc_data;





 VAR_2->shadow_w = FUNC_0(VAR_1, VAR_0);
}
