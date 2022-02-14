
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_9__ TYPE_3__ ;
typedef struct TYPE_8__ TYPE_2__ ;
typedef struct TYPE_7__ TYPE_1__ ;


struct TYPE_9__ {scalar_t__ default_orientation; } ;
struct TYPE_7__ {scalar_t__ height; scalar_t__ width; } ;
struct TYPE_8__ {void* layout; TYPE_1__ rect; } ;
typedef TYPE_2__ Con ;


 int FUNC_0 (char*,scalar_t__,scalar_t__,void*) ;
 scalar_t__ VAR_0 ;
 void* VAR_1 ;
 void* VAR_2 ;
 scalar_t__ VAR_3 ;
 TYPE_2__* FUNC_1 (TYPE_2__*) ;
 TYPE_3__ VAR_4 ;

__attribute__((used)) static void FUNC_2(Con *VAR_5) {


    if (VAR_4.default_orientation == VAR_3) {
        Con *VAR_6 = FUNC_1(VAR_5);
        VAR_5->layout = (VAR_6->rect.height > VAR_6->rect.width) ? VAR_2 : VAR_1;
        VAR_5->rect = VAR_6->rect;
        FUNC_0("Auto orientation. Workspace size set to (%d,%d), setting layout to %d.\n",
             VAR_6->rect.width, VAR_6->rect.height, VAR_5->layout);
    } else {
        VAR_5->layout = (VAR_4.default_orientation == VAR_0) ? VAR_1 : VAR_2;
    }
}
