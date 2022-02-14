
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_7__ TYPE_4__ ;
typedef struct TYPE_6__ TYPE_1__ ;


struct TYPE_7__ {char* msg; } ;
struct TYPE_6__ {TYPE_4__ z; } ;
typedef TYPE_1__ git_zstream ;


 int VAR_0 ;
 int FUNC_0 (char*,int ,char*) ;
 int FUNC_1 (TYPE_4__*) ;
 int FUNC_2 (int) ;
 int FUNC_3 (TYPE_1__*) ;
 int FUNC_4 (TYPE_1__*) ;

void FUNC_5(git_zstream *VAR_1)
{
 int VAR_2;

 FUNC_4(VAR_1);
 VAR_2 = FUNC_1(&VAR_1->z);
 FUNC_3(VAR_1);
 if (VAR_2 == VAR_0)
  return;
 FUNC_0("inflateEnd: %s (%s)", FUNC_2(VAR_2),
       VAR_1->z.msg ? VAR_1->z.msg : "no message");
}
