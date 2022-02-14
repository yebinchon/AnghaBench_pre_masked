
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef scalar_t__ PFNGLTEXSUBIMAGE3DPROC ;
typedef scalar_t__ PFNGLTEXIMAGE3DPROC ;
typedef scalar_t__ PFNGLDRAWRANGEELEMENTSPROC ;
typedef scalar_t__ PFNGLCOPYTEXSUBIMAGE3DPROC ;
typedef scalar_t__ (* GLADuserptrloadfunc ) (char*,void*) ;


 int VAR_0 ;
 scalar_t__ VAR_1 ;
 scalar_t__ VAR_2 ;
 scalar_t__ VAR_3 ;
 scalar_t__ VAR_4 ;

__attribute__((used)) static void FUNC_0( GLADuserptrloadfunc VAR_5, void* VAR_6) {
    if(!VAR_0) return;
    VAR_1 = (PFNGLCOPYTEXSUBIMAGE3DPROC) VAR_5("glCopyTexSubImage3D", VAR_6);
    VAR_2 = (PFNGLDRAWRANGEELEMENTSPROC) VAR_5("glDrawRangeElements", VAR_6);
    VAR_3 = (PFNGLTEXIMAGE3DPROC) VAR_5("glTexImage3D", VAR_6);
    VAR_4 = (PFNGLTEXSUBIMAGE3DPROC) VAR_5("glTexSubImage3D", VAR_6);
}
