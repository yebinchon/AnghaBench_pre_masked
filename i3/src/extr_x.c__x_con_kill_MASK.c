
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_13__ TYPE_6__ ;
typedef struct TYPE_12__ TYPE_2__ ;
typedef struct TYPE_11__ TYPE_1__ ;


struct TYPE_11__ {int name; } ;
typedef TYPE_1__ con_state ;
struct TYPE_13__ {scalar_t__ id; } ;
struct TYPE_12__ {scalar_t__ colormap; TYPE_6__ frame; TYPE_6__ frame_buffer; } ;
typedef TYPE_2__ Con ;


 int FUNC_0 (int *,TYPE_1__*,TYPE_1__*) ;
 int FUNC_1 (int ) ;
 int FUNC_2 (int *,TYPE_1__*,int ) ;
 scalar_t__ VAR_0 ;
 int VAR_1 ;
 int FUNC_3 (int ,TYPE_6__*) ;
 scalar_t__ VAR_2 ;
 int FUNC_4 (TYPE_1__*) ;
 int VAR_3 ;
 int VAR_4 ;
 scalar_t__ VAR_5 ;
 TYPE_1__* VAR_6 ;
 int VAR_7 ;
 TYPE_1__* FUNC_5 (scalar_t__) ;
 int VAR_8 ;
 int FUNC_6 (int ,scalar_t__) ;
 int FUNC_7 (int ,scalar_t__) ;

__attribute__((used)) static void FUNC_8(Con *VAR_9) {
    con_state *VAR_10;

    if (VAR_9->colormap != VAR_0) {
        FUNC_6(VAR_1, VAR_9->colormap);
    }

    FUNC_3(VAR_1, &(VAR_9->frame));
    FUNC_3(VAR_1, &(VAR_9->frame_buffer));
    FUNC_7(VAR_1, VAR_9->frame_buffer.id);
    VAR_9->frame_buffer.id = VAR_0;
    VAR_10 = FUNC_5(VAR_9->frame.id);
    FUNC_0(&VAR_8, VAR_10, VAR_10);
    FUNC_0(&VAR_7, VAR_10, VAR_6);
    FUNC_2(&VAR_3, VAR_10, VAR_4);
    FUNC_1(VAR_10->name);
    FUNC_4(VAR_10);


    if (VAR_9->frame.id == VAR_2) {
        VAR_2 = VAR_0;
    }
    if (VAR_9->frame.id == VAR_5) {
        VAR_5 = VAR_0;
    }
}
