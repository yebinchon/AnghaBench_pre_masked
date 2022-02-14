
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_7__ TYPE_3__ ;
typedef struct TYPE_6__ TYPE_2__ ;
typedef struct TYPE_5__ TYPE_1__ ;


struct TYPE_6__ {TYPE_1__* c; } ;
typedef TYPE_2__ bot_character_t ;
struct TYPE_7__ {int (* Print ) (int ,char*,int) ;} ;
struct TYPE_5__ {int type; } ;


 TYPE_2__* FUNC_0 (int) ;
 int VAR_0 ;
 int VAR_1 ;
 TYPE_3__ VAR_2 ;
 int VAR_3 ;
 int VAR_4 ;
 int FUNC_1 (int ,char*,int) ;
 int FUNC_2 (int ,char*,int) ;

int FUNC_3(int VAR_5, int VAR_6)
{
 bot_character_t *VAR_7;

 VAR_7 = FUNC_0(VAR_5);
 if (!VAR_7) return VAR_3;
 if (VAR_6 < 0 || VAR_6 >= VAR_0)
 {
  VAR_2.Print(VAR_1, "characteristic %d does not exist\n", VAR_6);
  return VAR_3;
 }
 if (!VAR_7->c[VAR_6].type)
 {
  VAR_2.Print(VAR_1, "characteristic %d is not initialized\n", VAR_6);
  return VAR_3;
 }
 return VAR_4;
}
