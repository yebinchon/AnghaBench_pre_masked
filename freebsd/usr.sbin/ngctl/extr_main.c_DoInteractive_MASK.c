
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


typedef int tv ;
struct timeval {int dummy; } ;
typedef int fd_set ;
typedef int buf ;
struct TYPE_2__ {int (* func ) (int ,int *) ;} ;


 scalar_t__ VAR_0 ;
 scalar_t__ FUNC_0 (char*) ;
 int VAR_1 ;
 scalar_t__ FUNC_1 (int ,int *) ;
 int FUNC_2 (int ,int *) ;
 int FUNC_3 (int *) ;
 int VAR_2 ;
 int FUNC_4 (int ,int ) ;
 char* VAR_3 ;
 int FUNC_5 (int *) ;
 int VAR_4 ;
 int VAR_5 ;
 int FUNC_6 (int ,char*) ;
 int FUNC_7 (int ) ;
 int * FUNC_8 (char*,int,int ) ;
 TYPE_1__ VAR_6 ;
 int FUNC_9 (struct timeval*,int ,int) ;
 int FUNC_10 (char*,...) ;
 scalar_t__ FUNC_11 (int const,int *,int *,int *,struct timeval*) ;
 int VAR_7 ;
 int VAR_8 ;
 int FUNC_12 (int ,int *) ;

__attribute__((used)) static int
FUNC_13(void)
{
 const int VAR_9 = FUNC_4(VAR_4, VAR_5) + 1;

 (*VAR_6.func)(0, ((void*)0));
 while (1) {
  struct timeval VAR_10;
  fd_set VAR_11;


  FUNC_3(&VAR_11);
  FUNC_2(VAR_4, &VAR_11);
  FUNC_2(VAR_5, &VAR_11);
  FUNC_9(&VAR_10, 0, sizeof(VAR_10));
  if (FUNC_11(VAR_9, &VAR_11, ((void*)0), ((void*)0), &VAR_10) <= 0) {


   FUNC_10("%s", VAR_3);
   FUNC_7(VAR_8);
   FUNC_3(&VAR_11);
   FUNC_2(0, &VAR_11);
   FUNC_2(VAR_4, &VAR_11);
   FUNC_2(VAR_5, &VAR_11);
   if (FUNC_11(VAR_9, &VAR_11, ((void*)0), ((void*)0), ((void*)0)) < 0)
    FUNC_6(VAR_1, "select");


   if (!FUNC_1(0, &VAR_11))
    FUNC_10("\n");
  }

  FUNC_5(&VAR_11);


  if (FUNC_1(0, &VAR_11)) {
   char VAR_12[VAR_2];

   if (FUNC_8(VAR_12, sizeof(VAR_12), VAR_7) == ((void*)0)) {
    FUNC_10("\n");
    break;
   }
   if (FUNC_0(VAR_12) == VAR_0)
    break;
  }
 }
 return (VAR_0);
}
