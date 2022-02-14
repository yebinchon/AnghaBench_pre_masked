
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct mddev {unsigned int sync_speed_max; } ;
typedef int ssize_t ;


 int VAR_0 ;
 int FUNC_0 (char const*,int,unsigned int*) ;
 scalar_t__ FUNC_1 (char const*,char*,int) ;

__attribute__((used)) static ssize_t
FUNC_2(struct mddev *VAR_1, const char *VAR_2, size_t VAR_3)
{
 unsigned int VAR_4;
 int VAR_5;

 if (FUNC_1(VAR_2, "system", 6)==0) {
  VAR_4 = 0;
 } else {
  VAR_5 = FUNC_0(VAR_2, 10, &VAR_4);
  if (VAR_5 < 0)
   return VAR_5;
  if (VAR_4 == 0)
   return -VAR_0;
 }
 VAR_1->sync_speed_max = VAR_4;
 return VAR_3;
}
