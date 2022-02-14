
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_8__ TYPE_6__ ;
typedef struct TYPE_7__ TYPE_1__ ;


struct TYPE_8__ {char* msg; } ;
struct TYPE_7__ {TYPE_6__ z; } ;
typedef TYPE_1__ git_zstream ;


 int VAR_0 ;
 int FUNC_0 (TYPE_6__*,int) ;
 int FUNC_1 (char*,int ,char*) ;
 int FUNC_2 (TYPE_1__*,int ,int) ;
 int FUNC_3 (int) ;
 int FUNC_4 (TYPE_1__*) ;
 int FUNC_5 (TYPE_1__*) ;

void FUNC_6(git_zstream *VAR_1, int VAR_2)
{
 int VAR_3;

 FUNC_2(VAR_1, 0, sizeof(*VAR_1));
 FUNC_5(VAR_1);
 VAR_3 = FUNC_0(&VAR_1->z, VAR_2);
 FUNC_4(VAR_1);
 if (VAR_3 == VAR_0)
  return;
 FUNC_1("deflateInit: %s (%s)", FUNC_3(VAR_3),
     VAR_1->z.msg ? VAR_1->z.msg : "no message");
}
