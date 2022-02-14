
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef scalar_t__ PFNGLPUSHDEBUGGROUPPROC ;
typedef scalar_t__ PFNGLPOPDEBUGGROUPPROC ;
typedef scalar_t__ PFNGLOBJECTPTRLABELPROC ;
typedef scalar_t__ PFNGLOBJECTLABELPROC ;
typedef scalar_t__ PFNGLGETPOINTERVPROC ;
typedef scalar_t__ PFNGLGETOBJECTPTRLABELPROC ;
typedef scalar_t__ PFNGLGETOBJECTLABELPROC ;
typedef scalar_t__ PFNGLGETDEBUGMESSAGELOGPROC ;
typedef scalar_t__ PFNGLDEBUGMESSAGEINSERTPROC ;
typedef scalar_t__ PFNGLDEBUGMESSAGECONTROLPROC ;
typedef scalar_t__ PFNGLDEBUGMESSAGECALLBACKPROC ;
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

__attribute__((used)) static void FUNC_0( GLADuserptrloadfunc VAR_12, void* VAR_13) {
    if(!VAR_0) return;
    VAR_1 = (PFNGLDEBUGMESSAGECALLBACKPROC) VAR_12("glDebugMessageCallback", VAR_13);
    VAR_2 = (PFNGLDEBUGMESSAGECONTROLPROC) VAR_12("glDebugMessageControl", VAR_13);
    VAR_3 = (PFNGLDEBUGMESSAGEINSERTPROC) VAR_12("glDebugMessageInsert", VAR_13);
    VAR_4 = (PFNGLGETDEBUGMESSAGELOGPROC) VAR_12("glGetDebugMessageLog", VAR_13);
    VAR_5 = (PFNGLGETOBJECTLABELPROC) VAR_12("glGetObjectLabel", VAR_13);
    VAR_6 = (PFNGLGETOBJECTPTRLABELPROC) VAR_12("glGetObjectPtrLabel", VAR_13);
    VAR_7 = (PFNGLGETPOINTERVPROC) VAR_12("glGetPointerv", VAR_13);
    VAR_8 = (PFNGLOBJECTLABELPROC) VAR_12("glObjectLabel", VAR_13);
    VAR_9 = (PFNGLOBJECTPTRLABELPROC) VAR_12("glObjectPtrLabel", VAR_13);
    VAR_10 = (PFNGLPOPDEBUGGROUPPROC) VAR_12("glPopDebugGroup", VAR_13);
    VAR_11 = (PFNGLPUSHDEBUGGROUPPROC) VAR_12("glPushDebugGroup", VAR_13);
}
