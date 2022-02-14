
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


struct TYPE_2__ {scalar_t__ unacked_exist; } ;
struct md_rdev {TYPE_1__ badblocks; int flags; } ;
typedef scalar_t__ ssize_t ;


 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int VAR_3 ;
 int VAR_4 ;
 int VAR_5 ;
 unsigned long FUNC_0 (int ) ;
 int VAR_6 ;
 int VAR_7 ;
 int VAR_8 ;
 int VAR_9 ;
 scalar_t__ FUNC_1 (char*,char*,...) ;
 scalar_t__ FUNC_2 (char*) ;
 scalar_t__ FUNC_3 (int ,unsigned long*) ;

__attribute__((used)) static ssize_t
FUNC_4(struct md_rdev *VAR_10, char *VAR_11)
{
 char *VAR_12 = ",";
 size_t VAR_13 = 0;
 unsigned long VAR_14 = FUNC_0(VAR_10->flags);

 if (FUNC_3(VAR_3, &VAR_14) ||
     (!FUNC_3(VAR_1, &VAR_14) &&
     VAR_10->badblocks.unacked_exist))
  VAR_13 += FUNC_1(VAR_11+VAR_13, "faulty%s", VAR_12);
 if (FUNC_3(VAR_4, &VAR_14))
  VAR_13 += FUNC_1(VAR_11+VAR_13, "in_sync%s", VAR_12);
 if (FUNC_3(VAR_5, &VAR_14))
  VAR_13 += FUNC_1(VAR_11+VAR_13, "journal%s", VAR_12);
 if (FUNC_3(VAR_9, &VAR_14))
  VAR_13 += FUNC_1(VAR_11+VAR_13, "write_mostly%s", VAR_12);
 if (FUNC_3(VAR_0, &VAR_14) ||
     (VAR_10->badblocks.unacked_exist
      && !FUNC_3(VAR_3, &VAR_14)))
  VAR_13 += FUNC_1(VAR_11+VAR_13, "blocked%s", VAR_12);
 if (!FUNC_3(VAR_3, &VAR_14) &&
     !FUNC_3(VAR_5, &VAR_14) &&
     !FUNC_3(VAR_4, &VAR_14))
  VAR_13 += FUNC_1(VAR_11+VAR_13, "spare%s", VAR_12);
 if (FUNC_3(VAR_8, &VAR_14))
  VAR_13 += FUNC_1(VAR_11+VAR_13, "write_error%s", VAR_12);
 if (FUNC_3(VAR_7, &VAR_14))
  VAR_13 += FUNC_1(VAR_11+VAR_13, "want_replacement%s", VAR_12);
 if (FUNC_3(VAR_6, &VAR_14))
  VAR_13 += FUNC_1(VAR_11+VAR_13, "replacement%s", VAR_12);
 if (FUNC_3(VAR_1, &VAR_14))
  VAR_13 += FUNC_1(VAR_11+VAR_13, "external_bbl%s", VAR_12);
 if (FUNC_3(VAR_2, &VAR_14))
  VAR_13 += FUNC_1(VAR_11+VAR_13, "failfast%s", VAR_12);

 if (VAR_13)
  VAR_13 -= FUNC_2(VAR_12);

 return VAR_13+FUNC_1(VAR_11+VAR_13, "\n");
}
