
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int uiprivAttrList ;
struct attr {int val; } ;


 struct attr* FUNC_0 (int *,struct attr*) ;
 int FUNC_1 (int ) ;
 int FUNC_2 (struct attr*) ;

__attribute__((used)) static struct attr *FUNC_3(uiprivAttrList *VAR_0, struct attr *VAR_1)
{
 struct attr *VAR_2;

 VAR_2 = FUNC_0(VAR_0, VAR_1);
 FUNC_1(VAR_1->val);
 FUNC_2(VAR_1);
 return VAR_2;
}
