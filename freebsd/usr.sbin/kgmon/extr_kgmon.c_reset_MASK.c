
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


typedef scalar_t__ u_long ;
struct TYPE_2__ {scalar_t__ kcountsize; scalar_t__ fromssize; scalar_t__ tossize; scalar_t__ tos; scalar_t__ froms; scalar_t__ kcount; } ;
struct kvmvars {TYPE_1__ gpm; int kd; } ;
typedef scalar_t__ ssize_t ;


 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int VAR_3 ;
 int VAR_4 ;
 int VAR_5 ;
 int FUNC_0 (char*,scalar_t__) ;
 int FUNC_1 (int,char*) ;
 int FUNC_2 (int,char*,...) ;
 int FUNC_3 (char*) ;
 int FUNC_4 () ;
 scalar_t__ VAR_6 ;
 int FUNC_5 (int ) ;
 scalar_t__ FUNC_6 (int ,scalar_t__,char*,scalar_t__) ;
 scalar_t__ FUNC_7 (scalar_t__) ;
 int FUNC_8 (int ) ;
 int FUNC_9 (struct kvmvars*,int ) ;
 scalar_t__ FUNC_10 (int*,int,int *,int *,char*,scalar_t__) ;

void
FUNC_11(struct kvmvars *VAR_7)
{
 char *VAR_8;
 u_long VAR_9;
 int VAR_10[3];

 FUNC_9(VAR_7, VAR_1);

 VAR_9 = VAR_7->gpm.kcountsize;
 if (VAR_7->gpm.fromssize > VAR_9)
  VAR_9 = VAR_7->gpm.fromssize;
 if (VAR_7->gpm.tossize > VAR_9)
  VAR_9 = VAR_7->gpm.tossize;
 if ((VAR_8 = (char *)FUNC_7(VAR_9)) == ((void*)0))
  FUNC_2(12, "cannot allocate zbuf space");
 FUNC_0(VAR_8, VAR_9);
 if (VAR_6) {
  if (FUNC_6(VAR_7->kd, (u_long)VAR_7->gpm.kcount, VAR_8,
      VAR_7->gpm.kcountsize) != (ssize_t)VAR_7->gpm.kcountsize)
   FUNC_2(13, "tickbuf zero: %s", FUNC_5(VAR_7->kd));
  if (FUNC_6(VAR_7->kd, (u_long)VAR_7->gpm.froms, VAR_8,
      VAR_7->gpm.fromssize) != (ssize_t)VAR_7->gpm.fromssize)
   FUNC_2(14, "froms zero: %s", FUNC_5(VAR_7->kd));
  if (FUNC_6(VAR_7->kd, (u_long)VAR_7->gpm.tos, VAR_8,
      VAR_7->gpm.tossize) != (ssize_t)VAR_7->gpm.tossize)
   FUNC_2(15, "tos zero: %s", FUNC_5(VAR_7->kd));
  FUNC_3(VAR_8);
  return;
 }
 (void)FUNC_8(0);
 VAR_10[0] = VAR_0;
 VAR_10[1] = VAR_5;
 VAR_10[2] = VAR_2;
 if (FUNC_10(VAR_10, 3, ((void*)0), ((void*)0), VAR_8, VAR_7->gpm.kcountsize) < 0)
  FUNC_1(13, "tickbuf zero");
 VAR_10[2] = VAR_3;
 if (FUNC_10(VAR_10, 3, ((void*)0), ((void*)0), VAR_8, VAR_7->gpm.fromssize) < 0)
  FUNC_1(14, "froms zero");
 VAR_10[2] = VAR_4;
 if (FUNC_10(VAR_10, 3, ((void*)0), ((void*)0), VAR_8, VAR_7->gpm.tossize) < 0)
  FUNC_1(15, "tos zero");
 (void)FUNC_8(FUNC_4());
 FUNC_3(VAR_8);
}
