
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct mixer_context {int reg_slock; int flags; } ;


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
 int FUNC_0 (int) ;
 int VAR_12 ;
 int VAR_13 ;
 int VAR_14 ;
 int VAR_15 ;
 int FUNC_1 (int ,int,int) ;
 int FUNC_2 (struct mixer_context*,int ,int ) ;
 int FUNC_3 (struct mixer_context*,int ,int ,int ) ;
 int FUNC_4 (int *,unsigned long) ;
 int FUNC_5 (int *,unsigned long) ;
 scalar_t__ FUNC_6 (int ,int *) ;
 int FUNC_7 (struct mixer_context*) ;
 int FUNC_8 (struct mixer_context*) ;

__attribute__((used)) static void FUNC_9(struct mixer_context *VAR_16)
{
 unsigned long VAR_17;

 FUNC_4(&VAR_16->reg_slock, VAR_17);

 FUNC_3(VAR_16, VAR_4, VAR_5, VAR_6);


 FUNC_3(VAR_16, VAR_4, VAR_10, VAR_9);


 FUNC_3(VAR_16, VAR_13, VAR_14,
  VAR_15);


 FUNC_2(VAR_16, VAR_12, 0);


 FUNC_2(VAR_16, VAR_0, FUNC_1(0, 128, 128));
 FUNC_2(VAR_16, VAR_1, FUNC_1(0, 128, 128));
 FUNC_2(VAR_16, VAR_2, FUNC_1(0, 128, 128));

 if (FUNC_6(VAR_3, &VAR_16->flags)) {

  FUNC_8(VAR_16);
  FUNC_7(VAR_16);
 }


 FUNC_3(VAR_16, VAR_4, 0, VAR_7);
 FUNC_3(VAR_16, VAR_4, 0, VAR_8);
 if (FUNC_6(VAR_3, &VAR_16->flags))
  FUNC_3(VAR_16, VAR_4, 0, VAR_11);


 FUNC_2(VAR_16, FUNC_0(0), 0);
 FUNC_2(VAR_16, FUNC_0(1), 0);

 FUNC_5(&VAR_16->reg_slock, VAR_17);
}
