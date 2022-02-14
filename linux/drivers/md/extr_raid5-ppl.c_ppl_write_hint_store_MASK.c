
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct r5conf {struct ppl_conf* log_private; } ;
struct ppl_conf {unsigned short write_hint; } ;
struct mddev {struct r5conf* private; } ;
typedef int ssize_t ;


 int VAR_0 ;
 int VAR_1 ;
 size_t VAR_2 ;
 scalar_t__ FUNC_0 (char const*,int,unsigned short*) ;
 int FUNC_1 (struct mddev*) ;
 int FUNC_2 (struct mddev*) ;
 scalar_t__ FUNC_3 (struct r5conf*) ;

__attribute__((used)) static ssize_t
FUNC_4(struct mddev *VAR_3, const char *VAR_4, size_t VAR_5)
{
 struct r5conf *VAR_6;
 struct ppl_conf *VAR_7;
 int VAR_8 = 0;
 unsigned short VAR_9;

 if (VAR_5 >= VAR_2)
  return -VAR_0;
 if (FUNC_0(VAR_4, 10, &VAR_9))
  return -VAR_0;

 VAR_8 = FUNC_1(VAR_3);
 if (VAR_8)
  return VAR_8;

 VAR_6 = VAR_3->private;
 if (!VAR_6) {
  VAR_8 = -VAR_1;
 } else if (FUNC_3(VAR_6)) {
  VAR_7 = VAR_6->log_private;
  if (!VAR_7)
   VAR_8 = -VAR_0;
  else
   VAR_7->write_hint = VAR_9;
 } else {
  VAR_8 = -VAR_0;
 }

 FUNC_2(VAR_3);

 return VAR_8 ?: VAR_5;
}
