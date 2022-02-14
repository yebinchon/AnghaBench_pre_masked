
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct vmctx {int dummy; } ;


 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int VAR_3 ;
 size_t VAR_4 ;
 size_t VAR_5 ;
 int VAR_6 ;
 int VAR_7 ;
 int FUNC_0 (int) ;
 scalar_t__ FUNC_1 () ;
 scalar_t__ FUNC_2 () ;
 int FUNC_3 (int ,char*,...) ;
 int * VAR_8 ;
 int VAR_9 ;
 int FUNC_4 (struct vmctx*,int,int ,int*) ;
 int FUNC_5 (struct vmctx*,int,int ,int) ;
 int FUNC_6 (struct vmctx*,int,int ) ;
 int VAR_10 ;
 int VAR_11 ;
 scalar_t__ VAR_12 ;

void
FUNC_7(struct vmctx *VAR_13, int VAR_14)
{
 int VAR_15, VAR_16;

 if (FUNC_1()) {
  VAR_15 = FUNC_4(VAR_13, VAR_14, VAR_2, &VAR_16);
  if (VAR_15 < 0) {
   FUNC_3(VAR_9, "VM exit on HLT not supported\n");
   FUNC_0(4);
  }
  FUNC_5(VAR_13, VAR_14, VAR_2, 1);
  if (VAR_14 == VAR_0)
   VAR_8[VAR_4] = VAR_10;
 }

        if (FUNC_2()) {



  VAR_15 = FUNC_4(VAR_13, VAR_14, VAR_3, &VAR_16);
  if (VAR_15 < 0) {
   FUNC_3(VAR_9,
       "SMP mux requested, no pause support\n");
   FUNC_0(4);
  }
  FUNC_5(VAR_13, VAR_14, VAR_3, 1);
  if (VAR_14 == VAR_0)
   VAR_8[VAR_5] = VAR_11;
        }

 if (VAR_12)
  VAR_15 = FUNC_6(VAR_13, VAR_14, VAR_7);
 else
  VAR_15 = FUNC_6(VAR_13, VAR_14, VAR_6);

 if (VAR_15) {
  FUNC_3(VAR_9, "Unable to set x2apic state (%d)\n", VAR_15);
  FUNC_0(4);
 }

 FUNC_5(VAR_13, VAR_14, VAR_1, 1);
}
