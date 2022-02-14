
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


struct r5conf {TYPE_1__* log; } ;
struct mddev {struct r5conf* private; } ;
typedef int ssize_t ;
struct TYPE_2__ {int r5c_journal_mode; } ;


 int VAR_0 ;


 int FUNC_0 (struct mddev*) ;
 int FUNC_1 (struct mddev*) ;
 char** VAR_1 ;
 int FUNC_2 (char*,int ,char*,char*,char*) ;

__attribute__((used)) static ssize_t FUNC_3(struct mddev *VAR_2, char *VAR_3)
{
 struct r5conf *VAR_4;
 int VAR_5;

 VAR_5 = FUNC_0(VAR_2);
 if (VAR_5)
  return VAR_5;

 VAR_4 = VAR_2->private;
 if (!VAR_4 || !VAR_4->log) {
  FUNC_1(VAR_2);
  return 0;
 }

 switch (VAR_4->log->r5c_journal_mode) {
 case 128:
  VAR_5 = FUNC_2(
   VAR_3, VAR_0, "[%s] %s\n",
   VAR_1[128],
   VAR_1[129]);
  break;
 case 129:
  VAR_5 = FUNC_2(
   VAR_3, VAR_0, "%s [%s]\n",
   VAR_1[128],
   VAR_1[129]);
  break;
 default:
  VAR_5 = 0;
 }
 FUNC_1(VAR_2);
 return VAR_5;
}
