
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef scalar_t__ PFNGLSAMPLECOVERAGEPROC ;
typedef scalar_t__ PFNGLSAMPLECOVERAGEARBPROC ;
typedef scalar_t__ (* GLADuserptrloadfunc ) (char*,void*) ;


 int VAR_0 ;
 scalar_t__ VAR_1 ;
 scalar_t__ VAR_2 ;

__attribute__((used)) static void FUNC_0( GLADuserptrloadfunc VAR_3, void* VAR_4) {
    if(!VAR_0) return;
    VAR_1 = (PFNGLSAMPLECOVERAGEPROC) VAR_3("glSampleCoverage", VAR_4);
    VAR_2 = (PFNGLSAMPLECOVERAGEARBPROC) VAR_3("glSampleCoverageARB", VAR_4);
}
