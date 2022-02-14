
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_7__ TYPE_2__ ;
typedef struct TYPE_6__ TYPE_1__ ;


typedef int ylength ;
typedef int yajl_gen ;
struct TYPE_7__ {TYPE_1__* window; } ;
struct TYPE_6__ {int id; } ;
typedef TYPE_2__ Con ;


 int FUNC_0 (char*,char const*,TYPE_2__*,int ) ;
 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int FUNC_1 (int ,TYPE_2__*,int) ;
 int VAR_3 ;
 int VAR_4 ;
 int FUNC_2 (char*,int ,char const*) ;
 int VAR_5 ;
 int VAR_6 ;
 int FUNC_3 (int ,char*) ;
 int FUNC_4 (int ,...) ;
 int FUNC_5 () ;
 int FUNC_6 (char const*) ;

void FUNC_7(const char *VAR_7, Con *VAR_8) {
    FUNC_0("Issue IPC window %s event (con = %p, window = 0x%08x)\n",
         VAR_7, VAR_8, (VAR_8->window ? VAR_8->window->id : VAR_2));

    FUNC_3(VAR_1, "C");
    yajl_gen VAR_9 = FUNC_5();

    FUNC_4(VAR_6);

    FUNC_6("change");
    FUNC_6(VAR_7);

    FUNC_6("container");
    FUNC_1(VAR_9, VAR_8, 0);

    FUNC_4(VAR_5);

    const unsigned char *VAR_10;
    ylength VAR_11;
    FUNC_4(VAR_4, &VAR_10, &VAR_11);

    FUNC_2("window", VAR_0, (const char *)VAR_10);
    FUNC_4(VAR_3);
    FUNC_3(VAR_1, "");
}
