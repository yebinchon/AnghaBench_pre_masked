
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_7__ TYPE_3__ ;
typedef struct TYPE_6__ TYPE_2__ ;
typedef struct TYPE_5__ TYPE_1__ ;


struct TYPE_6__ {int event_mask; } ;
typedef TYPE_2__ XSetWindowAttributes ;
typedef int Window ;
struct TYPE_5__ {int screen; int display; int root; } ;
struct TYPE_7__ {TYPE_1__ x11; } ;


 int VAR_0 ;
 int FUNC_0 (int ,int ) ;
 int VAR_1 ;
 int VAR_2 ;
 int FUNC_1 (int ,int ,int ,int ,int,int,int ,int ,int ,int ,int ,TYPE_2__*) ;
 TYPE_3__ VAR_3 ;

__attribute__((used)) static Window FUNC_2(void)
{
    XSetWindowAttributes VAR_4;
    VAR_4.event_mask = VAR_2;

    return FUNC_1(VAR_3.x11.display, VAR_3.x11.root,
                         0, 0, 1, 1, 0, 0,
                         VAR_1,
                         FUNC_0(VAR_3.x11.display, VAR_3.x11.screen),
                         VAR_0, &VAR_4);
}
