
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct jit_ctx {int flags; int stack_size; } ;


 int FUNC_0 (int) ;
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
 int VAR_10 ;
 int VAR_11 ;
 int VAR_12 ;
 int VAR_13 ;
 int VAR_14 ;
 int VAR_15 ;
 int VAR_16 ;
 int VAR_17 ;
 int VAR_18 ;
 int VAR_19 ;
 int VAR_20 ;
 int VAR_21 ;
 int VAR_22 ;
 int VAR_23 ;
 int FUNC_1 (struct jit_ctx*,int ,int,int,int ) ;
 int FUNC_2 (struct jit_ctx*,int ,int ,int,int,int) ;
 int VAR_24 ;
 int VAR_25 ;

__attribute__((used)) static int FUNC_3(struct jit_ctx *VAR_26)
{
 int VAR_27 = 0;
 int VAR_28;
 int VAR_29;

 if (VAR_26->flags & VAR_0)




  VAR_27 += 2 * sizeof(long);
 if (VAR_26->flags & VAR_1)
  VAR_27 += sizeof(long);
 if (VAR_26->flags & VAR_2)
  VAR_27 += sizeof(long);
 if (VAR_26->flags & VAR_3)
  VAR_27 += sizeof(long);
 if (VAR_26->flags & VAR_4)
  VAR_27 += sizeof(long);
 if (VAR_26->flags & VAR_5)
  VAR_27 += sizeof(long);

 FUNC_0(VAR_9 & 7);
 VAR_29 = (VAR_26->flags & VAR_6) ? VAR_9 : 0;

 VAR_27 += VAR_29;

 VAR_26->stack_size = VAR_27;






 FUNC_1(VAR_26, VAR_20, VAR_18, VAR_19, VAR_10);
 if (VAR_27)
  FUNC_2(VAR_26, VAR_22, VAR_20,
     VAR_17, VAR_17, -VAR_27);
 else
  return 0;

 VAR_28 = VAR_27 - sizeof(long);

 if (VAR_26->flags & VAR_0) {
  FUNC_2(VAR_26, VAR_24, VAR_25,
     VAR_11, VAR_28, VAR_17);
  VAR_28 -= sizeof(long);
 }
 if (VAR_26->flags & VAR_1) {
  FUNC_2(VAR_26, VAR_24, VAR_25,
     VAR_12, VAR_28, VAR_17);
  VAR_28 -= sizeof(long);
 }
 if (VAR_26->flags & VAR_2) {
  FUNC_2(VAR_26, VAR_24, VAR_25,
     VAR_13, VAR_28, VAR_17);
  VAR_28 -= sizeof(long);
 }
 if (VAR_26->flags & VAR_3) {
  FUNC_2(VAR_26, VAR_24, VAR_25,
     VAR_14, VAR_28, VAR_17);
  VAR_28 -= sizeof(long);
 }
 if (VAR_26->flags & VAR_4) {
  FUNC_2(VAR_26, VAR_24, VAR_25,
     VAR_15, VAR_28, VAR_17);
  VAR_28 -= sizeof(long);
 }
 if (VAR_26->flags & VAR_5) {
  FUNC_2(VAR_26, VAR_24, VAR_25,
     VAR_16, VAR_28, VAR_17);
  VAR_28 -= sizeof(long);
 }

 if ((VAR_26->flags & VAR_7) && !(VAR_26->flags & VAR_8))
  FUNC_2(VAR_26, VAR_23, VAR_21,
     VAR_16, VAR_18, VAR_19);

 return 0;
}
