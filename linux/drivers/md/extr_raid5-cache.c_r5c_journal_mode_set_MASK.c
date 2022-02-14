
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


struct r5conf {TYPE_1__* log; } ;
struct mddev {struct r5conf* private; } ;
struct TYPE_2__ {int r5c_journal_mode; } ;


 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int VAR_3 ;
 int FUNC_0 (struct mddev*) ;
 int FUNC_1 (struct mddev*) ;
 int FUNC_2 (struct mddev*) ;
 int FUNC_3 (char*,int ,int,int ) ;
 int * VAR_4 ;
 scalar_t__ FUNC_4 (struct r5conf*) ;

int FUNC_5(struct mddev *VAR_5, int VAR_6)
{
 struct r5conf *VAR_7;

 if (VAR_6 < VAR_3 ||
     VAR_6 > VAR_2)
  return -VAR_0;

 VAR_7 = VAR_5->private;
 if (!VAR_7 || !VAR_7->log)
  return -VAR_1;

 if (FUNC_4(VAR_7) > 0 &&
     VAR_6 == VAR_2)
  return -VAR_0;

 FUNC_1(VAR_5);
 VAR_7->log->r5c_journal_mode = VAR_6;
 FUNC_0(VAR_5);

 FUNC_3("md/raid:%s: setting r5c cache mode to %d: %s\n",
   FUNC_2(VAR_5), VAR_6, VAR_4[VAR_6]);
 return 0;
}
