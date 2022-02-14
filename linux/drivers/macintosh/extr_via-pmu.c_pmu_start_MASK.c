
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct adb_request {size_t* data; } ;


 struct adb_request* VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 scalar_t__ VAR_3 ;
 int ** VAR_4 ;
 scalar_t__ VAR_5 ;
 scalar_t__ VAR_6 ;
 int FUNC_0 (size_t) ;
 scalar_t__ VAR_7 ;
 int FUNC_1 () ;

__attribute__((used)) static void
FUNC_2(void)
{
 struct adb_request *VAR_8;



 VAR_8 = VAR_0;
 if (!VAR_8 || VAR_5 != VAR_3
     || ( VAR_6))
  return;

 VAR_5 = VAR_7;
 VAR_1 = 1;
 VAR_2 = VAR_4[VAR_8->data[0]][0];




 FUNC_1();

 FUNC_0(VAR_8->data[0]);
}
