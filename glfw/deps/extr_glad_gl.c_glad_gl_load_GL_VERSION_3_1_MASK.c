
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef scalar_t__ PFNGLUNIFORMBLOCKBINDINGPROC ;
typedef scalar_t__ PFNGLTEXBUFFERPROC ;
typedef scalar_t__ PFNGLPRIMITIVERESTARTINDEXPROC ;
typedef scalar_t__ PFNGLGETUNIFORMINDICESPROC ;
typedef scalar_t__ PFNGLGETUNIFORMBLOCKINDEXPROC ;
typedef scalar_t__ PFNGLGETINTEGERI_VPROC ;
typedef scalar_t__ PFNGLGETACTIVEUNIFORMSIVPROC ;
typedef scalar_t__ PFNGLGETACTIVEUNIFORMNAMEPROC ;
typedef scalar_t__ PFNGLGETACTIVEUNIFORMBLOCKNAMEPROC ;
typedef scalar_t__ PFNGLGETACTIVEUNIFORMBLOCKIVPROC ;
typedef scalar_t__ PFNGLDRAWELEMENTSINSTANCEDPROC ;
typedef scalar_t__ PFNGLDRAWARRAYSINSTANCEDPROC ;
typedef scalar_t__ PFNGLCOPYBUFFERSUBDATAPROC ;
typedef scalar_t__ PFNGLBINDBUFFERRANGEPROC ;
typedef scalar_t__ PFNGLBINDBUFFERBASEPROC ;
typedef scalar_t__ (* GLADuserptrloadfunc ) (char*,void*) ;


 int VAR_0 ;
 scalar_t__ VAR_1 ;
 scalar_t__ VAR_2 ;
 scalar_t__ VAR_3 ;
 scalar_t__ VAR_4 ;
 scalar_t__ VAR_5 ;
 scalar_t__ VAR_6 ;
 scalar_t__ VAR_7 ;
 scalar_t__ VAR_8 ;
 scalar_t__ VAR_9 ;
 scalar_t__ VAR_10 ;
 scalar_t__ VAR_11 ;
 scalar_t__ VAR_12 ;
 scalar_t__ VAR_13 ;
 scalar_t__ VAR_14 ;
 scalar_t__ VAR_15 ;

__attribute__((used)) static void FUNC_0( GLADuserptrloadfunc VAR_16, void* VAR_17) {
    if(!VAR_0) return;
    VAR_1 = (PFNGLBINDBUFFERBASEPROC) VAR_16("glBindBufferBase", VAR_17);
    VAR_2 = (PFNGLBINDBUFFERRANGEPROC) VAR_16("glBindBufferRange", VAR_17);
    VAR_3 = (PFNGLCOPYBUFFERSUBDATAPROC) VAR_16("glCopyBufferSubData", VAR_17);
    VAR_4 = (PFNGLDRAWARRAYSINSTANCEDPROC) VAR_16("glDrawArraysInstanced", VAR_17);
    VAR_5 = (PFNGLDRAWELEMENTSINSTANCEDPROC) VAR_16("glDrawElementsInstanced", VAR_17);
    VAR_6 = (PFNGLGETACTIVEUNIFORMBLOCKNAMEPROC) VAR_16("glGetActiveUniformBlockName", VAR_17);
    VAR_7 = (PFNGLGETACTIVEUNIFORMBLOCKIVPROC) VAR_16("glGetActiveUniformBlockiv", VAR_17);
    VAR_8 = (PFNGLGETACTIVEUNIFORMNAMEPROC) VAR_16("glGetActiveUniformName", VAR_17);
    VAR_9 = (PFNGLGETACTIVEUNIFORMSIVPROC) VAR_16("glGetActiveUniformsiv", VAR_17);
    VAR_10 = (PFNGLGETINTEGERI_VPROC) VAR_16("glGetIntegeri_v", VAR_17);
    VAR_11 = (PFNGLGETUNIFORMBLOCKINDEXPROC) VAR_16("glGetUniformBlockIndex", VAR_17);
    VAR_12 = (PFNGLGETUNIFORMINDICESPROC) VAR_16("glGetUniformIndices", VAR_17);
    VAR_13 = (PFNGLPRIMITIVERESTARTINDEXPROC) VAR_16("glPrimitiveRestartIndex", VAR_17);
    VAR_14 = (PFNGLTEXBUFFERPROC) VAR_16("glTexBuffer", VAR_17);
    VAR_15 = (PFNGLUNIFORMBLOCKBINDINGPROC) VAR_16("glUniformBlockBinding", VAR_17);
}
