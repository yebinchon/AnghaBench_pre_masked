
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_25__ TYPE_7__ ;
typedef struct TYPE_24__ TYPE_6__ ;
typedef struct TYPE_23__ TYPE_5__ ;
typedef struct TYPE_22__ TYPE_4__ ;
typedef struct TYPE_21__ TYPE_3__ ;
typedef struct TYPE_20__ TYPE_2__ ;
typedef struct TYPE_19__ TYPE_1__ ;
typedef struct TYPE_18__ TYPE_16__ ;


typedef int attribs ;
struct TYPE_20__ {int dc; } ;
struct TYPE_21__ {TYPE_2__ wgl; } ;
struct TYPE_22__ {TYPE_3__ context; } ;
typedef TYPE_4__ _GLFWwindow ;
struct TYPE_23__ {int handle; void* doublebuffer; void* stereo; scalar_t__ auxBuffers; scalar_t__ accumAlphaBits; scalar_t__ accumBlueBits; scalar_t__ accumGreenBits; scalar_t__ accumRedBits; scalar_t__ stencilBits; scalar_t__ depthBits; scalar_t__ alphaBits; scalar_t__ blueBits; scalar_t__ greenBits; scalar_t__ redBits; void* sRGB; scalar_t__ samples; } ;
typedef TYPE_5__ _GLFWfbconfig ;
struct TYPE_24__ {scalar_t__ client; } ;
typedef TYPE_6__ _GLFWctxconfig ;
struct TYPE_25__ {int dwFlags; scalar_t__ iPixelType; scalar_t__ cAuxBuffers; scalar_t__ cAccumAlphaBits; scalar_t__ cAccumBlueBits; scalar_t__ cAccumGreenBits; scalar_t__ cAccumRedBits; scalar_t__ cStencilBits; scalar_t__ cDepthBits; scalar_t__ cAlphaBits; scalar_t__ cBlueBits; scalar_t__ cGreenBits; scalar_t__ cRedBits; } ;
struct TYPE_19__ {scalar_t__ EXT_colorspace; scalar_t__ EXT_framebuffer_sRGB; scalar_t__ ARB_framebuffer_sRGB; scalar_t__ ARB_multisample; scalar_t__ ARB_pixel_format; } ;
struct TYPE_18__ {TYPE_1__ wgl; } ;
typedef TYPE_7__ PIXELFORMATDESCRIPTOR ;


 int FUNC_0 (int ,int,int,TYPE_7__*) ;
 int VAR_0 ;
 int VAR_1 ;
 scalar_t__ VAR_2 ;
 int VAR_3 ;
 void* VAR_4 ;
 int VAR_5 ;
 int VAR_6 ;
 int VAR_7 ;
 int VAR_8 ;
 int VAR_9 ;
 int VAR_10 ;
 scalar_t__ VAR_11 ;
 int VAR_12 ;
 int VAR_13 ;
 int VAR_14 ;
 int VAR_15 ;
 int VAR_16 ;
 int VAR_17 ;
 int VAR_18 ;
 int VAR_19 ;
 int VAR_20 ;
 int VAR_21 ;
 int VAR_22 ;
 int VAR_23 ;
 scalar_t__ VAR_24 ;
 int VAR_25 ;
 int VAR_26 ;
 int VAR_27 ;
 int VAR_28 ;
 int VAR_29 ;
 int VAR_30 ;
 scalar_t__ VAR_31 ;
 int VAR_32 ;
 int VAR_33 ;
 int VAR_34 ;
 int VAR_35 ;
 int VAR_36 ;
 int VAR_37 ;
 int VAR_38 ;
 int VAR_39 ;
 scalar_t__ VAR_40 ;
 TYPE_16__ VAR_41 ;
 TYPE_5__* FUNC_1 (TYPE_5__ const*,TYPE_5__*,int) ;
 int FUNC_2 (int ,char*) ;
 int FUNC_3 (int ,char*) ;
 int FUNC_4 (int ) ;
 TYPE_5__* FUNC_5 (int,int) ;
 scalar_t__ FUNC_6 (int ) ;
 int FUNC_7 (TYPE_5__*) ;
 int FUNC_8 (int ,int,int ,int,int const*,int*) ;

__attribute__((used)) static int FUNC_9(_GLFWwindow* VAR_42,
                             const _GLFWctxconfig* VAR_43,
                             const _GLFWfbconfig* VAR_44)
{
    _GLFWfbconfig* VAR_45;
    const _GLFWfbconfig* VAR_46;
    int VAR_47, VAR_48, VAR_49, VAR_50 = 0, VAR_51 = 0;
    int VAR_52[40];
    int VAR_53[sizeof(VAR_52) / sizeof(VAR_52[0])];

    if (VAR_41.wgl.ARB_pixel_format)
    {
        const int VAR_54 = VAR_32;

        if (!FUNC_8(VAR_42->context.wgl.dc,
                                          1, 0, 1, &VAR_54, &VAR_49))
        {
            FUNC_3(VAR_3,
                                 "WGL: Failed to retrieve pixel format attribute");
            return 0;
        }

        FUNC_4(VAR_39);
        FUNC_4(VAR_27);
        FUNC_4(VAR_33);
        FUNC_4(VAR_12);
        FUNC_4(VAR_34);
        FUNC_4(VAR_35);
        FUNC_4(VAR_29);
        FUNC_4(VAR_30);
        FUNC_4(VAR_21);
        FUNC_4(VAR_22);
        FUNC_4(VAR_18);
        FUNC_4(VAR_19);
        FUNC_4(VAR_25);
        FUNC_4(VAR_37);
        FUNC_4(VAR_14);
        FUNC_4(VAR_17);
        FUNC_4(VAR_16);
        FUNC_4(VAR_15);
        FUNC_4(VAR_13);
        FUNC_4(VAR_20);
        FUNC_4(VAR_38);
        FUNC_4(VAR_26);

        if (VAR_41.wgl.ARB_multisample)
            FUNC_4(VAR_36);

        if (VAR_43->client == VAR_2)
        {
            if (VAR_41.wgl.ARB_framebuffer_sRGB || VAR_41.wgl.EXT_framebuffer_sRGB)
                FUNC_4(VAR_28);
        }
        else
        {
            if (VAR_41.wgl.EXT_colorspace)
                FUNC_4(VAR_23);
        }
    }
    else
    {
        VAR_49 = FUNC_0(VAR_42->context.wgl.dc,
                                          1,
                                          sizeof(PIXELFORMATDESCRIPTOR),
                                          ((void*)0));
    }

    VAR_45 = FUNC_5(VAR_49, sizeof(_GLFWfbconfig));

    for (VAR_47 = 0; VAR_47 < VAR_49; VAR_47++)
    {
        _GLFWfbconfig* VAR_55 = VAR_45 + VAR_50;
        VAR_48 = VAR_47 + 1;

        if (VAR_41.wgl.ARB_pixel_format)
        {


            if (!FUNC_8(VAR_42->context.wgl.dc,
                                              VAR_48, 0,
                                              VAR_51,
                                              VAR_52, VAR_53))
            {
                FUNC_3(VAR_3,
                                    "WGL: Failed to retrieve pixel format attributes");

                FUNC_7(VAR_45);
                return 0;
            }

            if (!FUNC_6(VAR_39) ||
                !FUNC_6(VAR_27))
            {
                continue;
            }

            if (FUNC_6(VAR_33) != VAR_40)
                continue;

            if (FUNC_6(VAR_12) == VAR_31)
                continue;

            VAR_55->redBits = FUNC_6(VAR_34);
            VAR_55->greenBits = FUNC_6(VAR_29);
            VAR_55->blueBits = FUNC_6(VAR_21);
            VAR_55->alphaBits = FUNC_6(VAR_18);

            VAR_55->depthBits = FUNC_6(VAR_25);
            VAR_55->stencilBits = FUNC_6(VAR_37);

            VAR_55->accumRedBits = FUNC_6(VAR_17);
            VAR_55->accumGreenBits = FUNC_6(VAR_16);
            VAR_55->accumBlueBits = FUNC_6(VAR_15);
            VAR_55->accumAlphaBits = FUNC_6(VAR_13);

            VAR_55->auxBuffers = FUNC_6(VAR_20);

            if (FUNC_6(VAR_38))
                VAR_55->stereo = VAR_4;
            if (FUNC_6(VAR_26))
                VAR_55->doublebuffer = VAR_4;

            if (VAR_41.wgl.ARB_multisample)
                VAR_55->samples = FUNC_6(VAR_36);

            if (VAR_43->client == VAR_2)
            {
                if (VAR_41.wgl.ARB_framebuffer_sRGB ||
                    VAR_41.wgl.EXT_framebuffer_sRGB)
                {
                    if (FUNC_6(VAR_28))
                        VAR_55->sRGB = VAR_4;
                }
            }
            else
            {
                if (VAR_41.wgl.EXT_colorspace)
                {
                    if (FUNC_6(VAR_23) == VAR_24)
                        VAR_55->sRGB = VAR_4;
                }
            }
        }
        else
        {


            PIXELFORMATDESCRIPTOR VAR_56;

            if (!FUNC_0(VAR_42->context.wgl.dc,
                                     VAR_48,
                                     sizeof(PIXELFORMATDESCRIPTOR),
                                     &VAR_56))
            {
                FUNC_3(VAR_3,
                                    "WGL: Failed to describe pixel format");

                FUNC_7(VAR_45);
                return 0;
            }

            if (!(VAR_56.dwFlags & VAR_6) ||
                !(VAR_56.dwFlags & VAR_10))
            {
                continue;
            }

            if (!(VAR_56.dwFlags & VAR_7) &&
                (VAR_56.dwFlags & VAR_8))
            {
                continue;
            }

            if (VAR_56.iPixelType != VAR_11)
                continue;

            VAR_55->redBits = VAR_56.cRedBits;
            VAR_55->greenBits = VAR_56.cGreenBits;
            VAR_55->blueBits = VAR_56.cBlueBits;
            VAR_55->alphaBits = VAR_56.cAlphaBits;

            VAR_55->depthBits = VAR_56.cDepthBits;
            VAR_55->stencilBits = VAR_56.cStencilBits;

            VAR_55->accumRedBits = VAR_56.cAccumRedBits;
            VAR_55->accumGreenBits = VAR_56.cAccumGreenBits;
            VAR_55->accumBlueBits = VAR_56.cAccumBlueBits;
            VAR_55->accumAlphaBits = VAR_56.cAccumAlphaBits;

            VAR_55->auxBuffers = VAR_56.cAuxBuffers;

            if (VAR_56.dwFlags & VAR_9)
                VAR_55->stereo = VAR_4;
            if (VAR_56.dwFlags & VAR_5)
                VAR_55->doublebuffer = VAR_4;
        }

        VAR_55->handle = VAR_48;
        VAR_50++;
    }

    if (!VAR_50)
    {
        FUNC_2(VAR_0,
                        "WGL: The driver does not appear to support OpenGL");

        FUNC_7(VAR_45);
        return 0;
    }

    VAR_46 = FUNC_1(VAR_44, VAR_45, VAR_50);
    if (!VAR_46)
    {
        FUNC_2(VAR_1,
                        "WGL: Failed to find a suitable pixel format");

        FUNC_7(VAR_45);
        return 0;
    }

    VAR_48 = (int) VAR_46->handle;
    FUNC_7(VAR_45);

    return VAR_48;
}
