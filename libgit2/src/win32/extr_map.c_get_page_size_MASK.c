
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_3__ TYPE_1__ ;


struct TYPE_3__ {scalar_t__ dwPageSize; } ;
typedef TYPE_1__ SYSTEM_INFO ;
typedef scalar_t__ DWORD ;


 int FUNC_0 (TYPE_1__*) ;

__attribute__((used)) static DWORD FUNC_1(void)
{
 static DWORD VAR_0;
 SYSTEM_INFO VAR_1;

 if (!VAR_0) {
  FUNC_0(&VAR_1);
  VAR_0 = VAR_1.dwPageSize;
 }

 return VAR_0;
}
