
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
 int VAR_4 ;
 int FUNC_3 (struct aio_context*,int,int,int ) ;
 int FUNC_4 (struct aio_context*,int ,struct sigevent*) ;
 int FUNC_5 (struct aio_context*,int ,struct sigevent*) ;
 int FUNC_6 (char*,int ) ;
 int FUNC_7 (int) ;
 int VAR_5 ;
 int FUNC_8 (int ,int) ;
 int FUNC_9 (int ,int) ;
 int FUNC_10 (int) ;

__attribute__((used)) static void
FUNC_11(completion VAR_6, struct sigevent *VAR_7)
{
 int VAR_8, VAR_9 = -1, VAR_10 = -1;
 struct aio_context VAR_11;

 FUNC_0("aio");
 FUNC_2();

 FUNC_1(FUNC_8(VAR_1, 0600) != -1,
     "mkfifo failed: %s", FUNC_10(VAR_5));

 VAR_9 = FUNC_9(VAR_1, VAR_3 | VAR_2);
 if (VAR_9 == -1) {
  VAR_8 = VAR_5;
  VAR_5 = VAR_8;
  FUNC_6("read_fd open failed: %s",
      FUNC_10(VAR_5));
 }

 VAR_10 = FUNC_9(VAR_1, VAR_4);
 if (VAR_10 == -1) {
  VAR_8 = VAR_5;
  VAR_5 = VAR_8;
  FUNC_6("write_fd open failed: %s",
      FUNC_10(VAR_5));
 }

 FUNC_3(&VAR_11, VAR_9, VAR_10, VAR_0);
 FUNC_5(&VAR_11, VAR_6, VAR_7);
 FUNC_4(&VAR_11, VAR_6, VAR_7);

 FUNC_7(VAR_9);
 FUNC_7(VAR_10);
}
