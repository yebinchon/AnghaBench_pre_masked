
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct drm_i915_private {int dummy; } ;


 int VAR_0 ;
 int FUNC_0 (int ) ;
 int VAR_1 ;
 int FUNC_1 (int ) ;
 int FUNC_2 (int,char*) ;

__attribute__((used)) static void FUNC_3(struct drm_i915_private *VAR_2)
{
 FUNC_2(!FUNC_1(FUNC_0(0)),
    "CSR program storage start is NULL\n");
 FUNC_2(!FUNC_1(VAR_1), "CSR SSP Base Not fine\n");
 FUNC_2(!FUNC_1(VAR_0), "CSR HTP Not fine\n");
}
