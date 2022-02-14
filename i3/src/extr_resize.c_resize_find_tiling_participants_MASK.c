
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_9__ TYPE_1__ ;


typedef scalar_t__ orientation_t ;
typedef scalar_t__ direction_t ;
struct TYPE_9__ {scalar_t__ type; scalar_t__ layout; struct TYPE_9__* parent; } ;
typedef TYPE_1__ Con ;


 scalar_t__ VAR_0 ;
 scalar_t__ VAR_1 ;
 int FUNC_0 (char*,...) ;
 scalar_t__ VAR_2 ;
 scalar_t__ VAR_3 ;
 scalar_t__ VAR_4 ;
 scalar_t__ VAR_5 ;
 TYPE_1__* FUNC_1 (TYPE_1__*,int ) ;
 TYPE_1__* FUNC_2 (TYPE_1__*,int ,int ) ;
 scalar_t__ const FUNC_3 (TYPE_1__*) ;
 int VAR_6 ;
 int VAR_7 ;
 scalar_t__ FUNC_4 (scalar_t__) ;

bool FUNC_5(Con **VAR_8, Con **VAR_9, direction_t VAR_10, bool VAR_11) {
    FUNC_0("Find two participants for resizing container=%p in direction=%i\n", VAR_9, VAR_10);
    Con *VAR_12 = *VAR_8;
    Con *VAR_13 = ((void*)0);
    if (VAR_12 == ((void*)0)) {
        FUNC_0("Current container is NULL, aborting.\n");
        return 0;
    }


    const orientation_t VAR_14 = FUNC_4(VAR_10);
    const bool VAR_15 = (VAR_10 == VAR_3 || VAR_10 == VAR_2);
    while (VAR_12->type != VAR_1 &&
           VAR_12->type != VAR_0 &&
           VAR_13 == ((void*)0)) {


        if ((FUNC_3(VAR_12->parent) != VAR_14) ||
            (VAR_12->parent->layout == VAR_4) ||
            (VAR_12->parent->layout == VAR_5)) {
            VAR_12 = VAR_12->parent;
            continue;
        }


        if (VAR_15) {
            VAR_13 = FUNC_2(VAR_12, VAR_7, VAR_6);
            if (VAR_13 == ((void*)0) && VAR_11 == 1) {
                VAR_13 = FUNC_1(VAR_12, VAR_6);
            }
        } else {
            VAR_13 = FUNC_1(VAR_12, VAR_6);
            if (VAR_13 == ((void*)0) && VAR_11 == 1) {
                VAR_13 = FUNC_2(VAR_12, VAR_7, VAR_6);
            }
        }

        if (VAR_13 == ((void*)0)) {
            FUNC_0("No second container in this direction found, trying to look further up in the tree...\n");
            VAR_12 = VAR_12->parent;
        }
    }

    FUNC_0("Found participants: first=%p and second=%p.\n", VAR_12, VAR_13);
    *VAR_8 = VAR_12;
    *VAR_9 = VAR_13;
    if (VAR_12 == ((void*)0) || VAR_13 == ((void*)0)) {
        FUNC_0("Could not find two participants for this resize request.\n");
        return 0;
    }

    return 1;
}
