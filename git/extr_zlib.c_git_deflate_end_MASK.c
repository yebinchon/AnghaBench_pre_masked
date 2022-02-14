
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_6__ TYPE_2__ ;
typedef struct TYPE_5__ TYPE_1__ ;


struct TYPE_5__ {char* msg; } ;
struct TYPE_6__ {TYPE_1__ z; } ;
typedef TYPE_2__ git_zstream ;


 int VAR_0 ;
 int FUNC_0 (char*,int ,char*) ;
 int FUNC_1 (TYPE_2__*) ;
 int FUNC_2 (int) ;

void FUNC_3(git_zstream *VAR_1)
{
 int VAR_2 = FUNC_1(VAR_1);

 if (VAR_2 == VAR_0)
  return;
 FUNC_0("deflateEnd: %s (%s)", FUNC_2(VAR_2),
       VAR_1->z.msg ? VAR_1->z.msg : "no message");
}
