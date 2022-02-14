
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_4__ TYPE_2__ ;
typedef struct TYPE_3__ TYPE_1__ ;


struct wl_data_offer {int dummy; } ;
struct wl_data_device {int dummy; } ;
struct TYPE_3__ {struct wl_data_offer* dataOffer; } ;
struct TYPE_4__ {TYPE_1__ wl; } ;


 TYPE_2__ VAR_0 ;
 int VAR_1 ;
 int FUNC_0 (struct wl_data_offer*,int *,int *) ;
 int FUNC_1 (struct wl_data_offer*) ;

__attribute__((used)) static void FUNC_2(void* VAR_2,
                                      struct wl_data_device* VAR_3,
                                      struct wl_data_offer* VAR_4)
{
    if (VAR_0.wl.dataOffer)
        FUNC_1(VAR_0.wl.dataOffer);

    VAR_0.wl.dataOffer = VAR_4;
    FUNC_0(VAR_0.wl.dataOffer, &VAR_1, ((void*)0));
}
