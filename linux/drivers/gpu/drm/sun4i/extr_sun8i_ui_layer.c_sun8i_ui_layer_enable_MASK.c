
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


typedef int u32 ;
struct TYPE_2__ {int regs; } ;
struct sun8i_mixer {TYPE_1__ engine; } ;


 int FUNC_0 (char*,char*,int,int) ;
 int FUNC_1 (int) ;
 int FUNC_2 (unsigned int) ;
 int FUNC_3 (int) ;
 int FUNC_4 (unsigned int) ;
 int FUNC_5 (unsigned int) ;
 int FUNC_6 (int,int) ;
 int VAR_0 ;
 int FUNC_7 (int ,int ,int,int) ;
 int FUNC_8 (struct sun8i_mixer*) ;
 int FUNC_9 (struct sun8i_mixer*,int) ;

__attribute__((used)) static void FUNC_10(struct sun8i_mixer *VAR_1, int VAR_2,
      int VAR_3, bool VAR_4, unsigned int VAR_5,
      unsigned int VAR_6)
{
 u32 VAR_7, VAR_8, VAR_9;

 VAR_8 = FUNC_8(VAR_1);
 VAR_9 = FUNC_9(VAR_1, VAR_2);

 FUNC_0("%sabling channel %d overlay %d\n",
    VAR_4 ? "En" : "Dis", VAR_2, VAR_3);

 if (VAR_4)
  VAR_7 = VAR_0;
 else
  VAR_7 = 0;

 FUNC_7(VAR_1->engine.regs,
      FUNC_6(VAR_9, VAR_3),
      VAR_0, VAR_7);

 if (!VAR_4 || VAR_5 != VAR_6) {
  FUNC_7(VAR_1->engine.regs,
       FUNC_1(VAR_8),
       FUNC_2(VAR_6),
       0);

  FUNC_7(VAR_1->engine.regs,
       FUNC_3(VAR_8),
       FUNC_4(VAR_6),
       0);
 }

 if (VAR_4) {
  VAR_7 = FUNC_2(VAR_5);

  FUNC_7(VAR_1->engine.regs,
       FUNC_1(VAR_8),
       VAR_7, VAR_7);

  VAR_7 = VAR_2 << FUNC_5(VAR_5);

  FUNC_7(VAR_1->engine.regs,
       FUNC_3(VAR_8),
       FUNC_4(VAR_5),
       VAR_7);
 }
}
