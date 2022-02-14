
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


struct severity {int mask; int result; int mcgmask; int mcgres; scalar_t__ ser; int context; int excp; char* msg; int covered; scalar_t__ sev; } ;
struct mce {int status; int mcgstatus; } ;
typedef enum exception { ____Placeholder_exception } exception ;
typedef enum context { ____Placeholder_context } context ;
struct TYPE_2__ {scalar_t__ ser; } ;


 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 scalar_t__ VAR_3 ;
 int VAR_4 ;
 scalar_t__ VAR_5 ;
 scalar_t__ VAR_6 ;
 int FUNC_0 (struct mce*) ;
 TYPE_1__ VAR_7 ;
 struct severity* VAR_8 ;

__attribute__((used)) static int FUNC_1(struct mce *VAR_9, int VAR_10, char **VAR_11, bool VAR_12)
{
 enum exception VAR_13 = (VAR_12 ? VAR_0 : VAR_4);
 enum context VAR_14 = FUNC_0(VAR_9);
 struct severity *VAR_15;

 for (VAR_15 = VAR_8;; VAR_15++) {
  if ((VAR_9->status & VAR_15->mask) != VAR_15->result)
   continue;
  if ((VAR_9->mcgstatus & VAR_15->mcgmask) != VAR_15->mcgres)
   continue;
  if (VAR_15->ser == VAR_6 && !VAR_7.ser)
   continue;
  if (VAR_15->ser == VAR_5 && VAR_7.ser)
   continue;
  if (VAR_15->context && VAR_14 != VAR_15->context)
   continue;
  if (VAR_15->excp && VAR_13 != VAR_15->excp)
   continue;
  if (VAR_11)
   *VAR_11 = VAR_15->msg;
  VAR_15->covered = 1;
  if (VAR_15->sev >= VAR_3 && VAR_14 == VAR_1) {
   if (VAR_10 < 1)
    return VAR_2;
  }
  return VAR_15->sev;
 }
}
