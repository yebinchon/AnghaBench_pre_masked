
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_4__ TYPE_2__ ;
typedef struct TYPE_3__ TYPE_1__ ;


struct mce_bank {int ctl; } ;
struct mce {int bank; int status; int severity; scalar_t__ addr; scalar_t__ misc; int tsc; } ;
typedef int mce_banks_t ;
typedef enum mcp_flags { ____Placeholder_mcp_flags } mcp_flags ;
struct TYPE_4__ {int dont_log_ce; int tolerant; int ser; } ;
struct TYPE_3__ {int (* status ) (int) ;} ;


 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int VAR_3 ;
 int VAR_4 ;
 int VAR_5 ;
 int VAR_6 ;
 int VAR_7 ;
 int FUNC_0 () ;
 TYPE_2__ VAR_8 ;
 int VAR_9 ;
 int FUNC_1 (struct mce*,int *) ;
 int FUNC_2 (struct mce*) ;
 int FUNC_3 (struct mce*) ;
 int VAR_10 ;
 int VAR_11 ;
 int FUNC_4 (int ) ;
 int FUNC_5 (struct mce*,int) ;
 int FUNC_6 () ;
 int FUNC_7 (struct mce*,int ,int *,int) ;
 scalar_t__ FUNC_8 (struct mce*) ;
 int FUNC_9 (int ,int ) ;
 TYPE_1__ VAR_12 ;
 int FUNC_10 () ;
 int FUNC_11 (int) ;
 int FUNC_12 (int) ;
 int FUNC_13 () ;
 int FUNC_14 (int,int ) ;
 int FUNC_15 (int ) ;
 struct mce_bank* FUNC_16 (int ) ;
 int FUNC_17 (int ) ;

bool FUNC_18(enum mcp_flags VAR_13, mce_banks_t *VAR_14)
{
 struct mce_bank *VAR_15 = FUNC_16(VAR_9);
 bool VAR_16 = 0;
 struct mce VAR_17;
 int VAR_18;

 FUNC_15(VAR_11);

 FUNC_1(&VAR_17, ((void*)0));

 if (VAR_13 & VAR_6)
  VAR_17.tsc = FUNC_10();

 for (VAR_18 = 0; VAR_18 < FUNC_17(VAR_10); VAR_18++) {
  if (!VAR_15[VAR_18].ctl || !FUNC_14(VAR_18, *VAR_14))
   continue;

  VAR_17.misc = 0;
  VAR_17.addr = 0;
  VAR_17.bank = VAR_18;

  FUNC_0();
  VAR_17.status = FUNC_4(VAR_12.status(VAR_18));


  if (!(VAR_17.status & VAR_4))
   continue;





  if ((VAR_13 & VAR_7) || !(VAR_17.status & VAR_3))
   goto log_it;







  if (!VAR_8.ser) {
   if (VAR_17.status & VAR_3)
    continue;
   goto log_it;
  }


  if (!(VAR_17.status & VAR_0))
   goto log_it;





  if (!(VAR_17.status & VAR_1) && !(VAR_17.status & VAR_2))
   goto log_it;






  continue;

log_it:
  VAR_16 = 1;

  FUNC_5(&VAR_17, VAR_18);

  VAR_17.severity = FUNC_7(&VAR_17, VAR_8.tolerant, ((void*)0), 0);





  if (!(VAR_13 & VAR_5) && !VAR_8.dont_log_ce)
   FUNC_3(&VAR_17);
  else if (FUNC_8(&VAR_17)) {





   if (!FUNC_2(&VAR_17))
    FUNC_6();
  }




  FUNC_9(VAR_12.status(VAR_18), 0);
 }






 FUNC_13();

 return VAR_16;
}
