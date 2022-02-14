
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_5__ TYPE_1__ ;


typedef int xcb_expose_event_t ;
typedef int xcb_connection_t ;
struct TYPE_5__ {int width; scalar_t__ height; } ;


 scalar_t__ VAR_0 ;
 int VAR_1 ;
 scalar_t__ VAR_2 ;
 int VAR_3 ;
 scalar_t__ VAR_4 ;
 int VAR_5 ;
 TYPE_1__ VAR_6 ;
 int VAR_7 ;
 scalar_t__ FUNC_0 (int *,int) ;
 int VAR_8 ;
 int * VAR_9 ;
 int VAR_10 ;
 int VAR_11 ;
 int VAR_12 ;
 int FUNC_1 (TYPE_1__*,int ) ;
 int FUNC_2 (TYPE_1__*,int ,int ,scalar_t__,int,scalar_t__) ;
 int FUNC_3 (int ,TYPE_1__*,int ,int ,int,int,int) ;
 int VAR_13 ;
 int FUNC_4 (int *) ;

__attribute__((used)) static int FUNC_5(xcb_connection_t *VAR_14, xcb_expose_event_t *VAR_15) {

    FUNC_1(&VAR_6, VAR_10);

    FUNC_3(VAR_13, &VAR_6, VAR_12, VAR_10,
                   VAR_5, VAR_5,
                   VAR_6.width - 2 * VAR_5);

    int VAR_16 = VAR_6.width - (VAR_5 - VAR_1 - VAR_3);


    VAR_16 -= FUNC_0(&VAR_7, VAR_16);
    VAR_16 -= VAR_4;


    for (int VAR_17 = 0; VAR_17 < VAR_8; VAR_17++) {
        VAR_16 -= VAR_2;
        VAR_16 -= FUNC_0(&VAR_9[VAR_17], VAR_16);
    }


    FUNC_2(&VAR_6, VAR_11, 0, VAR_6.height - VAR_0, VAR_6.width, VAR_0);

    FUNC_4(VAR_14);
    return 1;
}
