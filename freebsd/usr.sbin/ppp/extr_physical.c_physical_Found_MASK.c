
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_12__ TYPE_6__ ;
typedef struct TYPE_11__ TYPE_5__ ;
typedef struct TYPE_10__ TYPE_4__ ;
typedef struct TYPE_9__ TYPE_3__ ;
typedef struct TYPE_8__ TYPE_2__ ;
typedef struct TYPE_7__ TYPE_1__ ;


struct TYPE_8__ {int total; } ;
struct TYPE_11__ {int name; TYPE_2__ stats; } ;
struct TYPE_10__ {scalar_t__ sz; } ;
struct TYPE_7__ {char* full; int base; } ;
struct physical {TYPE_5__ link; TYPE_4__ input; int connect_count; TYPE_3__* dl; TYPE_1__ name; } ;
struct TYPE_12__ {int unit; } ;
struct TYPE_9__ {TYPE_6__* bundle; } ;
typedef int FILE ;


 int FUNC_0 (TYPE_6__*,int ) ;
 int * FUNC_1 (char*,char*) ;
 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int VAR_3 ;
 char* VAR_4 ;
 char* VAR_5 ;
 int VAR_6 ;
 int FUNC_2 (int *) ;
 int FUNC_3 (int *,char*,char*,int ) ;
 int FUNC_4 (int ,char*,int ,...) ;
 int FUNC_5 (char*,int,char*,char*,int ) ;
 int FUNC_6 (int ) ;
 int FUNC_7 (int *,char*,int ) ;

__attribute__((used)) static void
FUNC_8(struct physical *VAR_7)
{
  FILE *VAR_8;
  char VAR_9[VAR_3];

  if (*VAR_7->name.full == '/') {
    FUNC_5(VAR_9, sizeof VAR_9, "%s%s.if", VAR_5, VAR_7->name.base);
    VAR_8 = FUNC_1(VAR_9, "w");
    if (VAR_8 != ((void*)0)) {
      FUNC_3(VAR_8, "%s%d\n", VAR_4, VAR_7->dl->bundle->unit);
      FUNC_2(VAR_8);
    } else
      FUNC_4(VAR_0, "%s: Can't create %s: %s\n",
                 VAR_7->link.name, VAR_9, FUNC_6(VAR_6));
  }

  FUNC_7(&VAR_7->link.stats.total, "physical throughput",
                   FUNC_0(VAR_7->dl->bundle, VAR_2));
  VAR_7->connect_count++;
  VAR_7->input.sz = 0;

  FUNC_4(VAR_1, "%s: Connected!\n", VAR_7->link.name);
}
