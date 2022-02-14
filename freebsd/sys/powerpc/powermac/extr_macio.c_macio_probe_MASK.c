
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


typedef scalar_t__ u_int32_t ;
typedef int device_t ;
struct TYPE_2__ {scalar_t__ mpd_devid; int * mpd_desc; } ;


 int VAR_0 ;
 int FUNC_0 (int ,int *) ;
 TYPE_1__* VAR_1 ;
 scalar_t__ FUNC_1 (int ) ;

__attribute__((used)) static int
FUNC_2(device_t VAR_2)
{
        int VAR_3;
        u_int32_t VAR_4;

        VAR_4 = FUNC_1(VAR_2);
        for (VAR_3 = 0; VAR_1[VAR_3].mpd_desc != ((void*)0); VAR_3++) {
                if (VAR_4 == VAR_1[VAR_3].mpd_devid) {
                        FUNC_0(VAR_2, VAR_1[VAR_3].mpd_desc);
                        return (0);
                }
        }

        return (VAR_0);
}
