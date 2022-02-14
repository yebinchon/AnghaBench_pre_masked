
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_4__ TYPE_2__ ;
typedef struct TYPE_3__ TYPE_1__ ;


typedef int buffer ;
struct TYPE_3__ {int errorCode; int display; } ;
struct TYPE_4__ {TYPE_1__ x11; } ;


 int FUNC_0 (int ,int ,char*,int) ;
 int VAR_0 ;
 TYPE_2__ VAR_1 ;
 int FUNC_1 (int,char*,char const*,char*) ;

void FUNC_2(int VAR_2, const char* VAR_3)
{
    char VAR_4[VAR_0];
    FUNC_0(VAR_1.x11.display, VAR_1.x11.errorCode,
                  VAR_4, sizeof(VAR_4));

    FUNC_1(VAR_2, "%s: %s", VAR_3, VAR_4);
}
