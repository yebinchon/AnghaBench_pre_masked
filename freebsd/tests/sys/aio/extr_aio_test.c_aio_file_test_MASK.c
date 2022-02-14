
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct sigevent {int dummy; } ;
struct aio_context {int dummy; } ;
typedef int completion ;


 int FUNC_0 (char*) ;
 int FUNC_1 (int,char*,int ) ;
 int FUNC_2 () ;
 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int VAR_3 ;
 int FUNC_3 (struct aio_context*,int,int,int ) ;
 int FUNC_4 (struct aio_context*,int ,struct sigevent*) ;
 int FUNC_5 (struct aio_context*,int ,struct sigevent*) ;
 int FUNC_6 (int) ;
 int VAR_4 ;
 int FUNC_7 (int ,int,int) ;
 int FUNC_8 (int ) ;

__attribute__((used)) static void
FUNC_9(completion VAR_5, struct sigevent *VAR_6)
{
 struct aio_context VAR_7;
 int VAR_8;

 FUNC_0("aio");
 FUNC_2();

 VAR_8 = FUNC_7(VAR_1, VAR_3 | VAR_2, 0600);
 FUNC_1(VAR_8 != -1, "open failed: %s", FUNC_8(VAR_4));

 FUNC_3(&VAR_7, VAR_8, VAR_8, VAR_0);
 FUNC_5(&VAR_7, VAR_5, VAR_6);
 FUNC_4(&VAR_7, VAR_5, VAR_6);
 FUNC_6(VAR_8);
}
