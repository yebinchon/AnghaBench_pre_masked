
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


typedef int bot_character_t ;
struct TYPE_2__ {int (* Print ) (int ,char*,int,int,int) ;} ;


 int * FUNC_0 (int) ;
 int FUNC_1 (int,int) ;
 int VAR_0 ;
 TYPE_1__ VAR_1 ;
 int FUNC_2 (int ,char*,int,int,int) ;

int FUNC_3(int VAR_2, int VAR_3, int VAR_4, int VAR_5)
{
 int VAR_6;
 bot_character_t *VAR_7;

 VAR_7 = FUNC_0(VAR_2);
 if (!VAR_7) return 0;
 if (VAR_4 > VAR_5)
 {
  VAR_1.Print(VAR_0, "cannot bound characteristic %d between %d and %d\n", VAR_3, VAR_4, VAR_5);
  return 0;
 }
 VAR_6 = FUNC_1(VAR_2, VAR_3);
 if (VAR_6 < VAR_4) return VAR_4;
 if (VAR_6 > VAR_5) return VAR_5;
 return VAR_6;
}
