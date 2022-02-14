
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_4__ TYPE_2__ ;
typedef struct TYPE_3__ TYPE_1__ ;


struct wl_data_source {int dummy; } ;
struct TYPE_3__ {char* clipboardSendString; size_t clipboardSendSize; struct wl_data_source* dataSource; } ;
struct TYPE_4__ {TYPE_1__ wl; } ;


 scalar_t__ VAR_0 ;
 int VAR_1 ;
 TYPE_2__ VAR_2 ;
 int FUNC_0 (int ,char*) ;
 int FUNC_1 (int) ;
 scalar_t__ VAR_3 ;
 scalar_t__ FUNC_2 (char const*,char*) ;
 int FUNC_3 (int,char const*,size_t) ;

__attribute__((used)) static void FUNC_4(void* VAR_4,
                                 struct wl_data_source* VAR_5,
                                 const char* VAR_6,
                                 int VAR_7)
{
    const char* VAR_8 = VAR_2.wl.clipboardSendString;
    size_t VAR_9 = VAR_2.wl.clipboardSendSize;
    int VAR_10;

    if (VAR_2.wl.dataSource != VAR_5)
    {
        FUNC_0(VAR_1,
                        "Wayland: Unknown clipboard data source");
        return;
    }

    if (!VAR_8)
    {
        FUNC_0(VAR_1,
                        "Wayland: Copy requested from an invalid string");
        return;
    }

    if (FUNC_2(VAR_6, "text/plain;charset=utf-8") != 0)
    {
        FUNC_0(VAR_1,
                        "Wayland: Wrong MIME type asked from clipboard");
        FUNC_1(VAR_7);
        return;
    }

    while (VAR_9 > 0)
    {
        VAR_10 = FUNC_3(VAR_7, VAR_8, VAR_9);
        if (VAR_10 == -1 && VAR_3 == VAR_0)
            continue;
        if (VAR_10 == -1)
        {

            FUNC_0(VAR_1,
                            "Wayland: Error while writing the clipboard");
            FUNC_1(VAR_7);
            return;
        }
        VAR_9 -= VAR_10;
    }
    FUNC_1(VAR_7);
}
