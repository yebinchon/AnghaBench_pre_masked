
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef scalar_t__ PFNGLREADNPIXELSPROC ;
typedef scalar_t__ PFNGLREADNPIXELSARBPROC ;
typedef scalar_t__ PFNGLGETNUNIFORMUIVARBPROC ;
typedef scalar_t__ PFNGLGETNUNIFORMIVARBPROC ;
typedef scalar_t__ PFNGLGETNUNIFORMFVARBPROC ;
typedef scalar_t__ PFNGLGETNUNIFORMDVARBPROC ;
typedef scalar_t__ PFNGLGETNTEXIMAGEARBPROC ;
typedef scalar_t__ PFNGLGETNSEPARABLEFILTERARBPROC ;
typedef scalar_t__ PFNGLGETNPOLYGONSTIPPLEARBPROC ;
typedef scalar_t__ PFNGLGETNPIXELMAPUSVARBPROC ;
typedef scalar_t__ PFNGLGETNPIXELMAPUIVARBPROC ;
typedef scalar_t__ PFNGLGETNPIXELMAPFVARBPROC ;
typedef scalar_t__ PFNGLGETNMINMAXARBPROC ;
typedef scalar_t__ PFNGLGETNMAPIVARBPROC ;
typedef scalar_t__ PFNGLGETNMAPFVARBPROC ;
typedef scalar_t__ PFNGLGETNMAPDVARBPROC ;
typedef scalar_t__ PFNGLGETNHISTOGRAMARBPROC ;
typedef scalar_t__ PFNGLGETNCONVOLUTIONFILTERARBPROC ;
typedef scalar_t__ PFNGLGETNCOMPRESSEDTEXIMAGEARBPROC ;
typedef scalar_t__ PFNGLGETNCOLORTABLEARBPROC ;
typedef scalar_t__ PFNGLGETGRAPHICSRESETSTATUSARBPROC ;
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
 scalar_t__ VAR_20 ;
 scalar_t__ VAR_21 ;

__attribute__((used)) static void FUNC_0( GLADuserptrloadfunc VAR_22, void* VAR_23) {
    if(!VAR_0) return;
    VAR_1 = (PFNGLGETGRAPHICSRESETSTATUSARBPROC) VAR_22("glGetGraphicsResetStatusARB", VAR_23);
    VAR_2 = (PFNGLGETNCOLORTABLEARBPROC) VAR_22("glGetnColorTableARB", VAR_23);
    VAR_3 = (PFNGLGETNCOMPRESSEDTEXIMAGEARBPROC) VAR_22("glGetnCompressedTexImageARB", VAR_23);
    VAR_4 = (PFNGLGETNCONVOLUTIONFILTERARBPROC) VAR_22("glGetnConvolutionFilterARB", VAR_23);
    VAR_5 = (PFNGLGETNHISTOGRAMARBPROC) VAR_22("glGetnHistogramARB", VAR_23);
    VAR_6 = (PFNGLGETNMAPDVARBPROC) VAR_22("glGetnMapdvARB", VAR_23);
    VAR_7 = (PFNGLGETNMAPFVARBPROC) VAR_22("glGetnMapfvARB", VAR_23);
    VAR_8 = (PFNGLGETNMAPIVARBPROC) VAR_22("glGetnMapivARB", VAR_23);
    VAR_9 = (PFNGLGETNMINMAXARBPROC) VAR_22("glGetnMinmaxARB", VAR_23);
    VAR_10 = (PFNGLGETNPIXELMAPFVARBPROC) VAR_22("glGetnPixelMapfvARB", VAR_23);
    VAR_11 = (PFNGLGETNPIXELMAPUIVARBPROC) VAR_22("glGetnPixelMapuivARB", VAR_23);
    VAR_12 = (PFNGLGETNPIXELMAPUSVARBPROC) VAR_22("glGetnPixelMapusvARB", VAR_23);
    VAR_13 = (PFNGLGETNPOLYGONSTIPPLEARBPROC) VAR_22("glGetnPolygonStippleARB", VAR_23);
    VAR_14 = (PFNGLGETNSEPARABLEFILTERARBPROC) VAR_22("glGetnSeparableFilterARB", VAR_23);
    VAR_15 = (PFNGLGETNTEXIMAGEARBPROC) VAR_22("glGetnTexImageARB", VAR_23);
    VAR_16 = (PFNGLGETNUNIFORMDVARBPROC) VAR_22("glGetnUniformdvARB", VAR_23);
    VAR_17 = (PFNGLGETNUNIFORMFVARBPROC) VAR_22("glGetnUniformfvARB", VAR_23);
    VAR_18 = (PFNGLGETNUNIFORMIVARBPROC) VAR_22("glGetnUniformivARB", VAR_23);
    VAR_19 = (PFNGLGETNUNIFORMUIVARBPROC) VAR_22("glGetnUniformuivARB", VAR_23);
    VAR_20 = (PFNGLREADNPIXELSPROC) VAR_22("glReadnPixels", VAR_23);
    VAR_21 = (PFNGLREADNPIXELSARBPROC) VAR_22("glReadnPixelsARB", VAR_23);
}
