
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct adb_request {int dummy; } ;


 int VAR_0 ;
 int FUNC_0 (scalar_t__,int ) ;
 int FUNC_1 (struct adb_request*,int *,int ,int,int ) ;
 int VAR_1 ;
 int * VAR_2 ;
 scalar_t__ FUNC_2 (int) ;
 int FUNC_3 (unsigned long) ;
 int FUNC_4 (unsigned long) ;
 int FUNC_5 (struct adb_request*) ;

__attribute__((used)) static int FUNC_6(int VAR_3)
{
 static struct adb_request VAR_4;
 unsigned long VAR_5;
 int VAR_6 = 0;


 VAR_1 = VAR_3 & 0xFFFE;

 if (!VAR_1)
  return 0;

 FUNC_4(VAR_5);

 if (VAR_2 == ((void*)0)) {



  FUNC_1(&VAR_4, ((void*)0), VAR_0, 1,
              FUNC_0(FUNC_2(VAR_1) - 1, 0));
  VAR_6 = FUNC_5(&VAR_4);
 }

 FUNC_3(VAR_5);
 return VAR_6;
}
