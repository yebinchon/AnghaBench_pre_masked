
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef scalar_t__ PFNGLUNMAPBUFFERPROC ;
typedef scalar_t__ PFNGLMAPBUFFERPROC ;
typedef scalar_t__ PFNGLISQUERYPROC ;
typedef scalar_t__ PFNGLISBUFFERPROC ;
typedef scalar_t__ PFNGLGETQUERYOBJECTUIVPROC ;
typedef scalar_t__ PFNGLGETQUERYOBJECTIVPROC ;
typedef scalar_t__ PFNGLGETQUERYIVPROC ;
typedef scalar_t__ PFNGLGETBUFFERSUBDATAPROC ;
typedef scalar_t__ PFNGLGETBUFFERPOINTERVPROC ;
typedef scalar_t__ PFNGLGETBUFFERPARAMETERIVPROC ;
typedef scalar_t__ PFNGLGENQUERIESPROC ;
typedef scalar_t__ PFNGLGENBUFFERSPROC ;
typedef scalar_t__ PFNGLENDQUERYPROC ;
typedef scalar_t__ PFNGLDELETEQUERIESPROC ;
typedef scalar_t__ PFNGLDELETEBUFFERSPROC ;
typedef scalar_t__ PFNGLBUFFERSUBDATAPROC ;
typedef scalar_t__ PFNGLBUFFERDATAPROC ;
typedef scalar_t__ PFNGLBINDBUFFERPROC ;
typedef scalar_t__ PFNGLBEGINQUERYPROC ;
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
 scalar_t__ VAR_16 ;
 scalar_t__ VAR_17 ;
 scalar_t__ VAR_18 ;
 scalar_t__ VAR_19 ;

__attribute__((used)) static void FUNC_0( GLADuserptrloadfunc VAR_20, void* VAR_21) {
    if(!VAR_0) return;
    VAR_1 = (PFNGLBEGINQUERYPROC) VAR_20("glBeginQuery", VAR_21);
    VAR_2 = (PFNGLBINDBUFFERPROC) VAR_20("glBindBuffer", VAR_21);
    VAR_3 = (PFNGLBUFFERDATAPROC) VAR_20("glBufferData", VAR_21);
    VAR_4 = (PFNGLBUFFERSUBDATAPROC) VAR_20("glBufferSubData", VAR_21);
    VAR_5 = (PFNGLDELETEBUFFERSPROC) VAR_20("glDeleteBuffers", VAR_21);
    VAR_6 = (PFNGLDELETEQUERIESPROC) VAR_20("glDeleteQueries", VAR_21);
    VAR_7 = (PFNGLENDQUERYPROC) VAR_20("glEndQuery", VAR_21);
    VAR_8 = (PFNGLGENBUFFERSPROC) VAR_20("glGenBuffers", VAR_21);
    VAR_9 = (PFNGLGENQUERIESPROC) VAR_20("glGenQueries", VAR_21);
    VAR_10 = (PFNGLGETBUFFERPARAMETERIVPROC) VAR_20("glGetBufferParameteriv", VAR_21);
    VAR_11 = (PFNGLGETBUFFERPOINTERVPROC) VAR_20("glGetBufferPointerv", VAR_21);
    VAR_12 = (PFNGLGETBUFFERSUBDATAPROC) VAR_20("glGetBufferSubData", VAR_21);
    VAR_13 = (PFNGLGETQUERYOBJECTIVPROC) VAR_20("glGetQueryObjectiv", VAR_21);
    VAR_14 = (PFNGLGETQUERYOBJECTUIVPROC) VAR_20("glGetQueryObjectuiv", VAR_21);
    VAR_15 = (PFNGLGETQUERYIVPROC) VAR_20("glGetQueryiv", VAR_21);
    VAR_16 = (PFNGLISBUFFERPROC) VAR_20("glIsBuffer", VAR_21);
    VAR_17 = (PFNGLISQUERYPROC) VAR_20("glIsQuery", VAR_21);
    VAR_18 = (PFNGLMAPBUFFERPROC) VAR_20("glMapBuffer", VAR_21);
    VAR_19 = (PFNGLUNMAPBUFFERPROC) VAR_20("glUnmapBuffer", VAR_21);
}
