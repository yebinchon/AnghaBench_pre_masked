
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_4__ TYPE_2__ ;
typedef struct TYPE_3__ TYPE_1__ ;


typedef int u32 ;
typedef int amb_dev ;
struct TYPE_3__ {int result; int ready; } ;
struct TYPE_4__ {TYPE_1__ loader; } ;


 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int VAR_3 ;
 int VAR_4 ;
 int VAR_5 ;
 int VAR_6 ;
 int VAR_7 ;
 int FUNC_0 (int,char*) ;
 int VAR_8 ;
 int VAR_9 ;
 int VAR_10 ;
 int VAR_11 ;
 int VAR_12 ;
 int VAR_13 ;
 int VAR_14 ;
 int VAR_15 ;
 int VAR_16 ;
 TYPE_2__ VAR_17 ;
 int FUNC_1 (int) ;
 unsigned long FUNC_2 (unsigned long) ;
 int FUNC_3 (int ,int ) ;
 int FUNC_4 (int *,int ) ;
 int FUNC_5 (int *,int ) ;
 int VAR_18 ;
 int FUNC_6 (char*) ;
 int FUNC_7 (int) ;
 int FUNC_8 (int *,int ,int) ;

__attribute__((used)) static int FUNC_9 (amb_dev * VAR_19, int VAR_20) {
  u32 VAR_21;

  FUNC_0 (VAR_3|VAR_4, "amb_reset");

  VAR_21 = FUNC_5 (VAR_19, FUNC_3(VAR_14, VAR_18));

  FUNC_8 (VAR_19, FUNC_3(VAR_14, VAR_18), VAR_21 | VAR_1);

  FUNC_7 (10);


  FUNC_8 (VAR_19, FUNC_3(VAR_14, VAR_16), VAR_0);

  FUNC_8 (VAR_19, FUNC_3(VAR_14, VAR_15), -1);


  FUNC_8 (VAR_19, FUNC_3(VAR_14, VAR_17.loader.ready), 0);

  FUNC_8 (VAR_19, FUNC_3(VAR_14, VAR_18), VAR_21 &~ VAR_1);

  if (VAR_20) {
    unsigned long VAR_22;

    FUNC_1(4200);

    VAR_22 = 500;
    while (!FUNC_5 (VAR_19, FUNC_3(VAR_14, VAR_17.loader.ready)))
      if (VAR_22) {
 VAR_22 = FUNC_2(VAR_22);
      } else {
 FUNC_0 (VAR_4|VAR_2, "reset timed out");
 return -VAR_6;
      }



    VAR_21 = FUNC_4 (VAR_19, FUNC_3(VAR_14, VAR_17.loader.result));
    if (VAR_21 & VAR_8) {
      if (VAR_21 & VAR_7)
 FUNC_6 ("interrupt");
      if (VAR_21 & VAR_11)
 FUNC_6 ("SUNI data pattern");
      if (VAR_21 & VAR_10)
 FUNC_6 ("SUNI data bits");
      if (VAR_21 & VAR_13)
 FUNC_6 ("SUNI UTOPIA interface");
      if (VAR_21 & VAR_12)
 FUNC_6 ("SUNI cell buffer FIFO");
      if (VAR_21 & VAR_9)
 FUNC_6 ("bad SRAM");

      return -VAR_5;
    }

  }
  return 0;
}
