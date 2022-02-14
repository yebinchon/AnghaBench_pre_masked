
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_3__ TYPE_1__ ;


typedef int u64 ;
struct TYPE_3__ {int event; } ;
typedef TYPE_1__ pm_message_t ;
typedef int ktime_t ;


 int VAR_0 ;
 int VAR_1 ;
 int FUNC_0 (int,int ) ;
 int FUNC_1 () ;
 int FUNC_2 (int ,int ) ;
 int FUNC_3 (int ) ;
 int FUNC_4 (char*,char*,char*,int ,char*,int,int) ;
 int FUNC_5 (int ) ;

__attribute__((used)) static void FUNC_6(ktime_t VAR_2, pm_message_t VAR_3, int VAR_4,
     const char *VAR_5)
{
 ktime_t VAR_6;
 u64 VAR_7;
 int VAR_8;

 VAR_6 = FUNC_1();
 VAR_7 = FUNC_3(FUNC_2(VAR_6, VAR_2));
 FUNC_0(VAR_7, VAR_0);
 VAR_8 = VAR_7;
 if (VAR_8 == 0)
  VAR_8 = 1;

 FUNC_4("%s%s%s of devices %s after %ld.%03ld msecs\n",
    VAR_5 ?: "", VAR_5 ? " " : "", FUNC_5(VAR_3.event),
    VAR_4 ? "aborted" : "complete",
    VAR_8 / VAR_1, VAR_8 % VAR_1);
}
