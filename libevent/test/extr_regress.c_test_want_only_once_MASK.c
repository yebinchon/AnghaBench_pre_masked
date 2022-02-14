
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct timeval {int tv_usec; } ;
struct event {int dummy; } ;


 int VAR_0 ;
 int VAR_1 ;
 int FUNC_0 () ;
 int FUNC_1 (struct event*,int *) ;
 int FUNC_2 () ;
 int FUNC_3 (struct timeval*) ;
 int FUNC_4 (struct event*,int ,int ,int ,struct event*) ;
 int FUNC_5 (struct timeval*) ;
 int FUNC_6 (int) ;
 int * VAR_2 ;
 int VAR_3 ;
 int FUNC_7 (char*) ;
 scalar_t__ FUNC_8 (int ) ;
 int FUNC_9 (char*) ;
 scalar_t__ FUNC_10 (int ,int ,scalar_t__) ;

__attribute__((used)) static void
FUNC_11(void)
{
 struct event VAR_4;
 struct timeval VAR_5;


 FUNC_7("Want read only once: ");

 if (FUNC_10(VAR_2[0], VAR_1, FUNC_8(VAR_1)+1) < 0) {
  FUNC_9("write");
 }


 FUNC_5(&VAR_5);
 VAR_5.tv_usec = 300*1000;
 FUNC_3(&VAR_5);

 FUNC_4(&VAR_4, VAR_2[1], VAR_0, VAR_3, &VAR_4);
 if (FUNC_1(&VAR_4, ((void*)0)) == -1)
  FUNC_6(1);
 FUNC_2();

 FUNC_0();
}
