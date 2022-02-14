
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


typedef int u_int32_t ;
struct ttydevice {char* hook; int cs; } ;
struct TYPE_2__ {int name; } ;
struct physical {int async; TYPE_1__ link; int handler; } ;
struct ng_async_cfg {int enabled; int accm; int smru; int amru; } ;


 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int VAR_3 ;
 int VAR_4 ;
 int VAR_5 ;
 int VAR_6 ;
 scalar_t__ FUNC_0 (int ,char*,int ,int ,struct ng_async_cfg*,int) ;
 int FUNC_1 (int *,int,int) ;
 struct ttydevice* FUNC_2 (int ) ;
 scalar_t__ FUNC_3 (struct ttydevice*) ;
 int FUNC_4 (int ,char*,char*,...) ;
 int FUNC_5 (struct ng_async_cfg*,int ,int) ;
 int FUNC_6 (char*,int,char*,char*) ;

__attribute__((used)) static void
FUNC_7(struct physical *VAR_7, u_int32_t VAR_8, u_int32_t VAR_9)
{
  struct ttydevice *VAR_10 = FUNC_2(VAR_7->handler);
  char VAR_11[VAR_6];
  struct ng_async_cfg VAR_12;

  if (FUNC_3(VAR_10)) {


    FUNC_6(VAR_11, sizeof VAR_11, ".:%s", VAR_10->hook);
    FUNC_5(&VAR_12, 0, sizeof VAR_12);
    VAR_12.enabled = 1;
    VAR_12.accm = VAR_8 | VAR_9;
    VAR_12.amru = VAR_3;
    VAR_12.smru = VAR_2;
    FUNC_4(VAR_0, "Configure async node at %s\n", VAR_11);
    if (FUNC_0(VAR_10->cs, VAR_11, VAR_5,
                  VAR_4, &VAR_12, sizeof VAR_12) < 0)
      FUNC_4(VAR_1, "%s: Can't configure async node at %s\n",
                 VAR_7->link.name, VAR_11);
  } else

    FUNC_1(&VAR_7->async, VAR_8, VAR_9);
}
