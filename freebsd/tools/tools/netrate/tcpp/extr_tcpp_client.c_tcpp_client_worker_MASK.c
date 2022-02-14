
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


struct kevent {int dummy; } ;
typedef int ncpus ;
typedef int intmax_t ;
typedef int cpu_set_t ;
struct TYPE_2__ {int sin_port; } ;


 int FUNC_0 (int,int *) ;
 int VAR_0 ;
 int FUNC_1 (int *) ;
 scalar_t__ VAR_1 ;
 int VAR_2 ;
 int FUNC_2 (struct kevent*,int) ;
 int FUNC_3 (int,char*,...) ;
 int FUNC_4 (int,char*,int,...) ;
 scalar_t__ VAR_3 ;
 int FUNC_5 (scalar_t__) ;
 int FUNC_6 (scalar_t__,int *,int ,struct kevent*,int,int *) ;
 scalar_t__ VAR_4 ;
 scalar_t__ FUNC_7 () ;
 struct kevent* FUNC_8 (int) ;
 int VAR_5 ;
 TYPE_1__ VAR_6 ;
 scalar_t__ VAR_7 ;
 scalar_t__ FUNC_9 (int ,int ,int *) ;
 int FUNC_10 (char*,int) ;
 scalar_t__ VAR_8 ;
 scalar_t__ FUNC_11 (int ,int*,size_t*,int *,int ) ;
 int FUNC_12 (struct kevent*) ;
 int FUNC_13 () ;
 scalar_t__ VAR_9 ;

__attribute__((used)) static void
FUNC_14(int VAR_10)
{
 struct kevent *VAR_11;
 int VAR_12, VAR_13, VAR_14;
 FUNC_10("tcpp_client %d", VAR_10);




 VAR_6.sin_port = FUNC_5(VAR_7 + VAR_10);

 VAR_14 = sizeof(*VAR_11) * VAR_5;
 VAR_11 = FUNC_8(VAR_14);
 if (VAR_11 == ((void*)0))
  FUNC_3(-1, "malloc");
 FUNC_2(VAR_11, VAR_14);

 VAR_4 = FUNC_7();
 if (VAR_4 < 0)
  FUNC_3(-1, "kqueue");

 while (VAR_3 < VAR_9) {
  while ((VAR_8 - VAR_3 < VAR_5) && (VAR_8 < VAR_9))
   (void)FUNC_13();
  VAR_13 = FUNC_6(VAR_4, ((void*)0), 0, VAR_11, VAR_5, ((void*)0));
  if (VAR_13 < 0)
   FUNC_3(-1, "kevent");
  if (VAR_13 > VAR_5)
   FUNC_4(-1, "kevent: %d", VAR_13);
  for (VAR_12 = 0; VAR_12 < VAR_13; VAR_12++)
   FUNC_12(&VAR_11[VAR_12]);
 }

}
