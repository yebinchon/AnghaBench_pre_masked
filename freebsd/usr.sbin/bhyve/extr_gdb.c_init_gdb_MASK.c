
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


struct vmctx {int dummy; } ;
struct TYPE_2__ {int s_addr; } ;
struct sockaddr_in {int sin_len; int sin_port; TYPE_1__ sin_addr; int sin_family; } ;
struct sockaddr {int dummy; } ;
typedef int sin ;


 int VAR_0 ;
 int FUNC_0 (int ,int *) ;
 int VAR_1 ;
 int VAR_2 ;
 int VAR_3 ;
 int VAR_4 ;
 int VAR_5 ;
 int VAR_6 ;
 int VAR_7 ;
 scalar_t__ FUNC_1 (int,struct sockaddr*,int) ;
 struct vmctx* VAR_8 ;
 int FUNC_2 (char*,int,char*) ;
 int FUNC_3 (int,char*) ;
 int FUNC_4 (int,int,char*) ;
 int FUNC_5 (int,int ,...) ;
 int VAR_9 ;
 int FUNC_6 (int ) ;
 int FUNC_7 (int) ;
 int VAR_10 ;
 int FUNC_8 (int) ;
 scalar_t__ FUNC_9 (int,int) ;
 int FUNC_10 (int,int ,int ,int *) ;
 int VAR_11 ;
 int FUNC_11 (int *,int *) ;
 int FUNC_12 (int *,int *) ;
 int FUNC_13 (int ,int ,int ) ;
 int VAR_12 ;
 int VAR_13 ;
 int VAR_14 ;

void
FUNC_14(struct vmctx *VAR_15, int VAR_16, bool VAR_17)
{
 struct sockaddr_in VAR_18;
 int VAR_19, VAR_20, VAR_21;

 FUNC_2("==> starting on %d, %swaiting\n", VAR_16, VAR_17 ? "" : "not ");

 VAR_19 = FUNC_12(&VAR_9, ((void*)0));
 if (VAR_19 != 0)
  FUNC_4(1, VAR_19, "gdb mutex init");
 VAR_19 = FUNC_11(&VAR_10, ((void*)0));
 if (VAR_19 != 0)
  FUNC_4(1, VAR_19, "gdb cv init");

 VAR_8 = VAR_15;
 VAR_21 = FUNC_13(VAR_6, VAR_7, 0);
 if (VAR_21 < 0)
  FUNC_3(1, "gdb socket create");

 VAR_18.sin_len = sizeof(VAR_18);
 VAR_18.sin_family = VAR_0;
 VAR_18.sin_addr.s_addr = FUNC_6(VAR_4);
 VAR_18.sin_port = FUNC_7(VAR_16);

 if (FUNC_1(VAR_21, (struct sockaddr *)&VAR_18, sizeof(VAR_18)) < 0)
  FUNC_3(1, "gdb socket bind");

 if (FUNC_9(VAR_21, 1) < 0)
  FUNC_3(1, "gdb socket listen");

 if (VAR_17) {






  VAR_12 = -1;
  VAR_13 = -1;
  FUNC_0(0, &VAR_14);
 }

 VAR_20 = FUNC_5(VAR_21, VAR_2);
 if (FUNC_5(VAR_21, VAR_3, VAR_20 | VAR_5) == -1)
  FUNC_3(1, "Failed to mark gdb socket non-blocking");


 FUNC_8(VAR_21);

 FUNC_10(VAR_21, VAR_1, VAR_11, ((void*)0));
}
