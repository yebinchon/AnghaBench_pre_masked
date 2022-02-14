
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_3__ TYPE_1__ ;


struct statfs {int f_fstypename; } ;
struct sigaction {scalar_t__ sa_flags; int sa_mask; int sa_handler; } ;
struct TYPE_3__ {int num; int (* testfn ) (int,int,char const**) ;scalar_t__ intr; } ;


 int VAR_0 ;
 int FUNC_0 (int,char*) ;
 int FUNC_1 (int,struct statfs*) ;
 int VAR_1 ;
 int FUNC_2 (char const*,int) ;
 unsigned int FUNC_3 (TYPE_1__*) ;
 int FUNC_4 (int ,struct sigaction*,int ) ;
 int FUNC_5 (int *) ;
 int FUNC_6 (int ,char*) ;
 int FUNC_7 (char const*,int *,int ) ;
 int FUNC_8 (int,int,char const**) ;
 TYPE_1__* VAR_2 ;

int
FUNC_9(int VAR_3, const char *VAR_4[])
{
 int VAR_5;
 int VAR_6;
 int VAR_7;
 unsigned VAR_8;
 struct sigaction VAR_9;
 int VAR_10;
 const char **VAR_11;

 if (VAR_3 < 2) {
  FUNC_0(1, "usage: flock <directory> [test number] ...");
 }

 VAR_6 = FUNC_2(VAR_4[1], 1024);
 if (VAR_3 >= 3) {
  VAR_5 = FUNC_7(VAR_4[2], ((void*)0), 0);
  VAR_10 = VAR_3 - 2;
  VAR_11 = VAR_4 + 2;
 } else {
  VAR_5 = 0;
  VAR_10 = 0;
  VAR_11 = ((void*)0);
 }

 VAR_9.sa_handler = VAR_1;
 FUNC_5(&VAR_9.sa_mask);
 VAR_9.sa_flags = 0;
 FUNC_4(VAR_0, &VAR_9, 0);

 VAR_7 = 0;
 for (VAR_8 = 0; VAR_8 < FUNC_3(VAR_2); VAR_8++) {
  if (VAR_2[VAR_8].intr && VAR_7)
   continue;
  if (!VAR_5 || VAR_2[VAR_8].num == VAR_5)
   VAR_2[VAR_8].testfn(VAR_6, VAR_10, VAR_11);
 }

 return 0;
}
