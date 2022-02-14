
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_3__ TYPE_1__ ;


typedef int vec3_t ;
struct TYPE_3__ {float speed; int dir; } ;
typedef TYPE_1__ bot_input_t ;


 float VAR_0 ;
 int FUNC_0 (int ,int ) ;
 TYPE_1__* VAR_1 ;

void FUNC_1(int VAR_2, vec3_t VAR_3, float VAR_4)
{
 bot_input_t *VAR_5;

 VAR_5 = &VAR_1[VAR_2];

 FUNC_0(VAR_3, VAR_5->dir);

 if (VAR_4 > VAR_0) VAR_4 = VAR_0;
 else if (VAR_4 < -VAR_0) VAR_4 = -VAR_0;
 VAR_5->speed = VAR_4;
}
