
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


struct mce_bank {int ctl; } ;
struct mce {int bank; int status; int severity; scalar_t__ addr; scalar_t__ misc; } ;
struct mca_config {int tolerant; scalar_t__ ser; } ;
struct TYPE_2__ {int (* status ) (int) ;} ;


 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int VAR_3 ;
 int VAR_4 ;
 int VAR_5 ;
 int VAR_6 ;
 int VAR_7 ;
 int FUNC_0 (int,unsigned long*) ;
 int FUNC_1 (int,unsigned long*) ;
 int FUNC_2 (int ,int ) ;
 struct mca_config VAR_8 ;
 int VAR_9 ;
 int FUNC_3 (struct mce*) ;
 int VAR_10 ;
 int FUNC_4 (int ) ;
 int FUNC_5 (struct mce*,int) ;
 int FUNC_6 (struct mce*,int ,int *,int) ;
 TYPE_1__ VAR_11 ;
 int FUNC_7 (int) ;
 int FUNC_8 (int,unsigned long*) ;
 struct mce_bank* FUNC_9 (int ) ;
 int FUNC_10 (int ) ;

__attribute__((used)) static void FUNC_11(struct mce *VAR_12, struct mce *VAR_13,
       unsigned long *VAR_14, unsigned long *VAR_15,
       int VAR_16, int *VAR_17)
{
 struct mce_bank *VAR_18 = FUNC_9(VAR_9);
 struct mca_config *VAR_19 = &VAR_8;
 int VAR_20, VAR_21;

 for (VAR_21 = 0; VAR_21 < FUNC_10(VAR_10); VAR_21++) {
  FUNC_0(VAR_21, VAR_14);
  if (!FUNC_8(VAR_21, VAR_15))
   continue;

  if (!VAR_18[VAR_21].ctl)
   continue;

  VAR_12->misc = 0;
  VAR_12->addr = 0;
  VAR_12->bank = VAR_21;

  VAR_12->status = FUNC_4(VAR_11.status(VAR_21));
  if (!(VAR_12->status & VAR_6))
   continue;





  if (!(VAR_12->status & (VAR_19->ser ? VAR_4 : VAR_5)) &&
   !VAR_16)
   continue;


  FUNC_2(VAR_7, VAR_0);

  VAR_20 = FUNC_6(VAR_12, VAR_19->tolerant, ((void*)0), 1);





  if ((VAR_20 == VAR_1 ||
       VAR_20 == VAR_3) && !VAR_16)
   continue;

  FUNC_1(VAR_21, VAR_14);


  if (VAR_20 == VAR_2)
   continue;

  FUNC_5(VAR_12, VAR_21);


  VAR_12->severity = VAR_20;

  FUNC_3(VAR_12);

  if (VAR_20 > *VAR_17) {
   *VAR_13 = *VAR_12;
   *VAR_17 = VAR_20;
  }
 }


 *VAR_12 = *VAR_13;
}
