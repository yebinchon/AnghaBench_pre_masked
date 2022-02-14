
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_3__ TYPE_1__ ;


struct TYPE_3__ {int c_oflag; } ;


 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 char VAR_3 ;
 int VAR_4 ;
 int VAR_5 ;
 int VAR_6 ;
 int FUNC_0 (char*) ;
 int FUNC_1 (int ) ;
 scalar_t__ VAR_7 ;
 TYPE_1__ VAR_8 ;
 int VAR_9 ;
 int FUNC_2 (char,int ) ;
 int FUNC_3 () ;
 int FUNC_4 (int) ;
 int VAR_10 ;
 int FUNC_5 (int ,int ,TYPE_1__*) ;
 scalar_t__ FUNC_6 (char*,char**) ;
 int FUNC_7 (char*,int ,int ) ;

void
FUNC_8(void)
{
 char *VAR_11, VAR_12[1024];
 int VAR_13;

 VAR_11 = VAR_12;
 if (FUNC_6("pc", &VAR_11) != 0)
  VAR_3 = VAR_12[0];







 VAR_13 = FUNC_3();

 if (VAR_7) {
  VAR_11 = VAR_12;
  if (FUNC_6("rs", &VAR_11) != 0 || FUNC_6("is", &VAR_11) != 0) {
   FUNC_7(VAR_12, 0, VAR_9);
   VAR_13 = 1;
  }
  VAR_11 = VAR_12;
  if (FUNC_6("rf", &VAR_11) != 0 || FUNC_6("if", &VAR_11) != 0) {
   FUNC_0(VAR_12);
   VAR_13 = 1;
  }
 }

 if (VAR_13) {
  (void)FUNC_2('\r', VAR_10);
  (void)FUNC_1(VAR_10);
  (void)FUNC_4(1);
 }
}
