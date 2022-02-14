
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_4__ TYPE_1__ ;


struct TYPE_4__ {size_t count; int * strings; } ;


 int FUNC_0 (int) ;
 int FUNC_1 (int ) ;
 scalar_t__ FUNC_2 (int ,char*) ;
 int FUNC_3 (TYPE_1__*,int ) ;
 int FUNC_4 (int ) ;
 int FUNC_5 (int *,char const*) ;
 int FUNC_6 (TYPE_1__*) ;
 TYPE_1__ VAR_0 ;
 int VAR_1 ;

__attribute__((used)) static void FUNC_7(const char *VAR_2)
{
 size_t VAR_3;

 FUNC_1(FUNC_5(&VAR_1, VAR_2));
 FUNC_1(FUNC_3(&VAR_0, VAR_1));

 FUNC_0(VAR_0.count > 0);

 for (VAR_3 = 0; VAR_3 < VAR_0.count; VAR_3++)
  FUNC_0(FUNC_2(VAR_0.strings[VAR_3], "/") != 0);

 FUNC_6(&VAR_0);
 FUNC_4(VAR_1);
}
