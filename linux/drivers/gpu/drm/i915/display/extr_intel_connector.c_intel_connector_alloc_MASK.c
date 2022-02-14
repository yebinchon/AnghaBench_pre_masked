
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct intel_connector {int dummy; } ;


 int VAR_0 ;
 scalar_t__ FUNC_0 (struct intel_connector*) ;
 int FUNC_1 (struct intel_connector*) ;
 struct intel_connector* FUNC_2 (int,int ) ;

struct intel_connector *FUNC_3(void)
{
 struct intel_connector *VAR_1;

 VAR_1 = FUNC_2(sizeof(*VAR_1), VAR_0);
 if (!VAR_1)
  return ((void*)0);

 if (FUNC_0(VAR_1) < 0) {
  FUNC_1(VAR_1);
  return ((void*)0);
 }

 return VAR_1;
}
