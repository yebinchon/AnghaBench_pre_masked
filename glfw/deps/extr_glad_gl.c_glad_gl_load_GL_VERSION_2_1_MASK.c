
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef scalar_t__ PFNGLUNIFORMMATRIX4X3FVPROC ;
typedef scalar_t__ PFNGLUNIFORMMATRIX4X2FVPROC ;
typedef scalar_t__ PFNGLUNIFORMMATRIX3X4FVPROC ;
typedef scalar_t__ PFNGLUNIFORMMATRIX3X2FVPROC ;
typedef scalar_t__ PFNGLUNIFORMMATRIX2X4FVPROC ;
typedef scalar_t__ PFNGLUNIFORMMATRIX2X3FVPROC ;
typedef scalar_t__ (* GLADuserptrloadfunc ) (char*,void*) ;


 int VAR_0 ;
 scalar_t__ VAR_1 ;
 scalar_t__ VAR_2 ;
 scalar_t__ VAR_3 ;
 scalar_t__ VAR_4 ;
 scalar_t__ VAR_5 ;
 scalar_t__ VAR_6 ;

__attribute__((used)) static void FUNC_0( GLADuserptrloadfunc VAR_7, void* VAR_8) {
    if(!VAR_0) return;
    VAR_1 = (PFNGLUNIFORMMATRIX2X3FVPROC) VAR_7("glUniformMatrix2x3fv", VAR_8);
    VAR_2 = (PFNGLUNIFORMMATRIX2X4FVPROC) VAR_7("glUniformMatrix2x4fv", VAR_8);
    VAR_3 = (PFNGLUNIFORMMATRIX3X2FVPROC) VAR_7("glUniformMatrix3x2fv", VAR_8);
    VAR_4 = (PFNGLUNIFORMMATRIX3X4FVPROC) VAR_7("glUniformMatrix3x4fv", VAR_8);
    VAR_5 = (PFNGLUNIFORMMATRIX4X2FVPROC) VAR_7("glUniformMatrix4x2fv", VAR_8);
    VAR_6 = (PFNGLUNIFORMMATRIX4X3FVPROC) VAR_7("glUniformMatrix4x3fv", VAR_8);
}
