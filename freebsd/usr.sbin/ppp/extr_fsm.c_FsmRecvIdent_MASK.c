
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_4__ TYPE_2__ ;
typedef struct TYPE_3__ TYPE_1__ ;


typedef int u_short ;
typedef int u_long ;
typedef scalar_t__ u_int32_t ;
typedef char u_char ;
struct mbuf {int dummy; } ;
struct fsmheader {int length; } ;
struct fsm {TYPE_1__* link; int LogLevel; } ;
struct TYPE_4__ {scalar_t__ his_magic; } ;
struct TYPE_3__ {TYPE_2__ lcp; int name; } ;


 char* FUNC_0 (struct mbuf*) ;
 int FUNC_1 (TYPE_2__*,char*) ;
 int FUNC_2 (int ,char*,int ,int ,int ) ;
 int FUNC_3 (struct mbuf*,char*,int) ;
 int FUNC_4 (struct mbuf*) ;
 struct mbuf* FUNC_5 (int ) ;
 int FUNC_6 (int ) ;
 int FUNC_7 (char*,scalar_t__*) ;

__attribute__((used)) static void
FUNC_8(struct fsm *VAR_0, struct fsmheader *VAR_1, struct mbuf *VAR_2)
{
  u_int32_t VAR_3;
  u_short VAR_4;
  u_char *VAR_5;

  VAR_4 = FUNC_6(VAR_1->length) - sizeof *VAR_1;
  if (VAR_4 >= 4) {
    VAR_2 = FUNC_5(FUNC_3(VAR_2, "", 1));
    VAR_5 = FUNC_0(VAR_2);
    FUNC_7(VAR_5, &VAR_3);
    if (VAR_3 != VAR_0->link->lcp.his_magic)
      FUNC_2(VAR_0->LogLevel, "%s: RecvIdent: magic 0x%08lx is wrong,"
                 " expecting 0x%08lx\n", VAR_0->link->name, (u_long)VAR_3,
                 (u_long)VAR_0->link->lcp.his_magic);
    VAR_5[VAR_4] = '\0';
    FUNC_1(&VAR_0->link->lcp, VAR_5 + 4);
  }
  FUNC_4(VAR_2);
}
