
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_4__ TYPE_1__ ;


struct TYPE_4__ {int buf; scalar_t__ len; } ;


 int VAR_0 ;
 char* FUNC_0 (int ) ;
 int FUNC_1 (int ,int ,int) ;
 int FUNC_2 (TYPE_1__*,char) ;
 int FUNC_3 (TYPE_1__*,char const*) ;
 int FUNC_4 () ;
 TYPE_1__ VAR_1 ;
 int VAR_2 ;

__attribute__((used)) static void FUNC_5(void)
{
 const char *VAR_3;

 if (VAR_1.len)
  return;

 VAR_3 = FUNC_0(VAR_0);
 if (VAR_3 && *VAR_3) {
  const char *VAR_4;
  for (VAR_4 = VAR_3; *VAR_4; VAR_4++)
   if (*VAR_4 == '/')
    VAR_2++;

  FUNC_3(&VAR_1, VAR_3);
  FUNC_2(&VAR_1, '/');
  VAR_2++;
 }

 FUNC_4();

 FUNC_1(VAR_0, VAR_1.buf, 1);
}
