
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_5__ TYPE_1__ ;


struct TYPE_5__ {int buf; } ;


 int VAR_0 ;
 char* FUNC_0 (int ) ;
 int FUNC_1 (int ,int ,int) ;
 int FUNC_2 (TYPE_1__*,char) ;
 int FUNC_3 (TYPE_1__*,char const*) ;
 int FUNC_4 (TYPE_1__*) ;
 TYPE_1__ VAR_1 ;

void FUNC_5(const char *VAR_2)
{
 const char *VAR_3 = FUNC_0(VAR_0);

 FUNC_4(&VAR_1);
 if (VAR_3 && *VAR_3) {
  FUNC_3(&VAR_1, VAR_3);
  FUNC_2(&VAR_1, '/');
 }
 FUNC_3(&VAR_1, VAR_2);

 FUNC_1(VAR_0, VAR_1.buf, 1);
}
