
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_6__ TYPE_4__ ;
typedef struct TYPE_5__ TYPE_1__ ;


typedef int u8 ;
typedef int u64 ;
struct TYPE_6__ {int x86; } ;
struct TYPE_5__ {unsigned int extcpu; int bank; int status; int mcgstatus; int inject_flags; scalar_t__ synd; scalar_t__ misc; int tsc; } ;



 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int VAR_3 ;
 int VAR_4 ;
 int VAR_5 ;
 int VAR_6 ;
 int VAR_7 ;
 int VAR_8 ;

 int VAR_9 ;
 int FUNC_0 (unsigned int) ;
 TYPE_4__ VAR_10 ;
 scalar_t__ FUNC_1 (int ) ;
 int FUNC_2 (unsigned int) ;
 unsigned int FUNC_3 (int ) ;
 int FUNC_4 () ;
 TYPE_1__ VAR_11 ;
 int VAR_12 ;
 int FUNC_5 (TYPE_1__*) ;
 int VAR_13 ;
 int FUNC_6 () ;
 int FUNC_7 () ;
 int FUNC_8 (unsigned int,int ,TYPE_1__*,int ) ;
 int FUNC_9 (unsigned int,int) ;
 int FUNC_10 (int ) ;
 int VAR_14 ;
 int VAR_15 ;
 int VAR_16 ;

__attribute__((used)) static void FUNC_11(void)
{
 u64 VAR_17 = 0;
 unsigned int VAR_18 = VAR_11.extcpu;
 u8 VAR_19 = VAR_11.bank;

 VAR_11.tsc = FUNC_7();

 if (VAR_11.misc)
  VAR_11.status |= VAR_4;

 if (VAR_11.synd)
  VAR_11.status |= VAR_6;

 if (VAR_12 == VAR_8) {
  FUNC_5(&VAR_11);
  return;
 }


 VAR_17 = VAR_1 | VAR_0;

 if (!(VAR_11.status & VAR_5))
  VAR_17 |= VAR_2;






 if (VAR_12 == 129) {
  VAR_11.status |= VAR_3;
  VAR_11.status |= (VAR_11.status & ~VAR_7);
 }






 if (FUNC_1(VAR_9) &&
     VAR_19 == 4 &&
     VAR_10.x86 < 0x17) {
  FUNC_10(FUNC_0(VAR_18));
  VAR_18 = FUNC_3(FUNC_0(VAR_18));
 }

 FUNC_4();
 if (!FUNC_2(VAR_18))
  goto err;

 FUNC_9(VAR_18, 1);

 VAR_11.mcgstatus = VAR_17;
 VAR_11.inject_flags = VAR_12;
 FUNC_8(VAR_18, VAR_13, &VAR_11, 0);

 FUNC_9(VAR_18, 0);

 switch (VAR_12) {
 case 129:
  FUNC_8(VAR_18, VAR_14, ((void*)0), 0);
  break;
 case 128:
  FUNC_8(VAR_18, VAR_16, ((void*)0), 0);
  break;
 default:
  FUNC_8(VAR_18, VAR_15, ((void*)0), 0);
 }

err:
 FUNC_6();

}
