
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int u32 ;
struct mixer_context {int flags; } ;


 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int VAR_3 ;
 int VAR_4 ;
 int VAR_5 ;
 int VAR_6 ;
 int FUNC_0 (unsigned int) ;
 int VAR_7 ;
 int FUNC_1 (unsigned int) ;
 int VAR_8 ;
 int FUNC_2 (unsigned int) ;

 int VAR_9 ;
 int VAR_10 ;
 int FUNC_3 (struct mixer_context*,int ,int ,int ) ;
 int FUNC_4 (int ,int *) ;
 int FUNC_5 (struct mixer_context*,int ,int ,int ) ;

__attribute__((used)) static void FUNC_6(struct mixer_context *VAR_11, unsigned int VAR_12,
       unsigned int VAR_13, bool VAR_14)
{
 u32 VAR_15 = VAR_14 ? ~0 : 0;

 switch (VAR_12) {
 case 0:
  FUNC_3(VAR_11, VAR_1, VAR_15, VAR_2);
  FUNC_3(VAR_11, VAR_5,
        FUNC_0(VAR_13),
        VAR_6);
  break;
 case 1:
  FUNC_3(VAR_11, VAR_1, VAR_15, VAR_3);
  FUNC_3(VAR_11, VAR_5,
        FUNC_1(VAR_13),
        VAR_7);

  break;
 case 128:
  if (FUNC_4(VAR_0, &VAR_11->flags)) {
   FUNC_5(VAR_11, VAR_9, VAR_15, VAR_10);
   FUNC_3(VAR_11, VAR_1, VAR_15,
    VAR_4);
   FUNC_3(VAR_11, VAR_5,
         FUNC_2(VAR_13),
         VAR_8);
  }
  break;
 }
}
