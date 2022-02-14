
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_4__ TYPE_2__ ;
typedef struct TYPE_3__ TYPE_1__ ;


struct TYPE_3__ {scalar_t__ GetProcAddress; scalar_t__ GetDepthBuffer; scalar_t__ GetColorBuffer; scalar_t__ MakeCurrent; scalar_t__ DestroyContext; scalar_t__ CreateContextExt; scalar_t__ handle; scalar_t__ CreateContextAttribs; } ;
struct TYPE_4__ {TYPE_1__ osmesa; } ;
typedef scalar_t__ PFN_OSMesaMakeCurrent ;
typedef scalar_t__ PFN_OSMesaGetProcAddress ;
typedef scalar_t__ PFN_OSMesaGetDepthBuffer ;
typedef scalar_t__ PFN_OSMesaGetColorBuffer ;
typedef scalar_t__ PFN_OSMesaDestroyContext ;
typedef scalar_t__ PFN_OSMesaCreateContextExt ;
typedef scalar_t__ PFN_OSMesaCreateContextAttribs ;
typedef int GLFWbool ;


 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int VAR_3 ;
 char* VAR_4 ;
 TYPE_2__ VAR_5 ;
 int FUNC_0 (int ,char*) ;
 int FUNC_1 () ;
 scalar_t__ FUNC_2 (char const*) ;
 scalar_t__ FUNC_3 (scalar_t__,char*) ;

GLFWbool FUNC_4(void)
{
    int VAR_6;
    const char* VAR_7[] =
    {
        "libOSMesa.so.8",
        "libOSMesa.so.6",

        ((void*)0)
    };

    if (VAR_5.osmesa.handle)
        return VAR_3;

    for (VAR_6 = 0; VAR_7[VAR_6]; VAR_6++)
    {
        VAR_5.osmesa.handle = FUNC_2(VAR_7[VAR_6]);
        if (VAR_5.osmesa.handle)
            break;
    }

    if (!VAR_5.osmesa.handle)
    {
        FUNC_0(VAR_0, "OSMesa: Library not found");
        return VAR_1;
    }

    VAR_5.osmesa.CreateContextExt = (PFN_OSMesaCreateContextExt)
        FUNC_3(VAR_5.osmesa.handle, "OSMesaCreateContextExt");
    VAR_5.osmesa.CreateContextAttribs = (PFN_OSMesaCreateContextAttribs)
        FUNC_3(VAR_5.osmesa.handle, "OSMesaCreateContextAttribs");
    VAR_5.osmesa.DestroyContext = (PFN_OSMesaDestroyContext)
        FUNC_3(VAR_5.osmesa.handle, "OSMesaDestroyContext");
    VAR_5.osmesa.MakeCurrent = (PFN_OSMesaMakeCurrent)
        FUNC_3(VAR_5.osmesa.handle, "OSMesaMakeCurrent");
    VAR_5.osmesa.GetColorBuffer = (PFN_OSMesaGetColorBuffer)
        FUNC_3(VAR_5.osmesa.handle, "OSMesaGetColorBuffer");
    VAR_5.osmesa.GetDepthBuffer = (PFN_OSMesaGetDepthBuffer)
        FUNC_3(VAR_5.osmesa.handle, "OSMesaGetDepthBuffer");
    VAR_5.osmesa.GetProcAddress = (PFN_OSMesaGetProcAddress)
        FUNC_3(VAR_5.osmesa.handle, "OSMesaGetProcAddress");

    if (!VAR_5.osmesa.CreateContextExt ||
        !VAR_5.osmesa.DestroyContext ||
        !VAR_5.osmesa.MakeCurrent ||
        !VAR_5.osmesa.GetColorBuffer ||
        !VAR_5.osmesa.GetDepthBuffer ||
        !VAR_5.osmesa.GetProcAddress)
    {
        FUNC_0(VAR_2,
                        "OSMesa: Failed to load required entry points");

        FUNC_1();
        return VAR_1;
    }

    return VAR_3;
}
