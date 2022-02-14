
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_4__ TYPE_2__ ;
typedef struct TYPE_3__ TYPE_1__ ;


struct pt_regs {int dummy; } ;
struct mce {int status; int bank; } ;
struct TYPE_4__ {int tolerant; } ;
struct TYPE_3__ {int (* status ) (int) ;} ;


 scalar_t__ VAR_0 ;
 int VAR_1 ;
 int FUNC_0 (int,unsigned long*) ;
 TYPE_2__ VAR_2 ;
 int VAR_3 ;
 int FUNC_1 (int ) ;
 int FUNC_2 (struct mce*,int) ;
 scalar_t__ FUNC_3 (struct mce*,int ,char**,int) ;
 TYPE_1__ VAR_4 ;
 int FUNC_4 (int,struct mce*,struct pt_regs*) ;
 int FUNC_5 (int) ;
 int FUNC_6 (int ) ;

__attribute__((used)) static int FUNC_7(struct mce *VAR_5, char **VAR_6, unsigned long *VAR_7,
     struct pt_regs *VAR_8)
{
 char *VAR_9;
 int VAR_10;

 for (VAR_10 = 0; VAR_10 < FUNC_6(VAR_3); VAR_10++) {
  VAR_5->status = FUNC_1(VAR_4.status(VAR_10));
  if (!(VAR_5->status & VAR_1))
   continue;

  FUNC_0(VAR_10, VAR_7);
  if (&FUNC_4)
   FUNC_4(VAR_10, VAR_5, VAR_8);

  if (FUNC_3(VAR_5, VAR_2.tolerant, &VAR_9, 1) >= VAR_0) {
   VAR_5->bank = VAR_10;
   FUNC_2(VAR_5, VAR_10);
   *VAR_6 = VAR_9;
   return 1;
  }
 }
 return 0;
}
