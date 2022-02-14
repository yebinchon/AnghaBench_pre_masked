
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct mddev {unsigned long long recovery_cp; int sb_flags; scalar_t__ pers; int recovery; } ;
typedef int ssize_t ;
typedef unsigned long long sector_t ;


 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int VAR_3 ;
 unsigned long long VAR_4 ;
 scalar_t__ FUNC_0 (char const*,char*) ;
 int FUNC_1 (char const*,int,unsigned long long*) ;
 int FUNC_2 (struct mddev*) ;
 int FUNC_3 (struct mddev*) ;
 int FUNC_4 (int ,int *) ;
 int FUNC_5 (int ,int *) ;

__attribute__((used)) static ssize_t
FUNC_6(struct mddev *VAR_5, const char *VAR_6, size_t VAR_7)
{
 unsigned long long VAR_8;
 int VAR_9;

 if (FUNC_0(VAR_6, "none"))
  VAR_8 = VAR_4;
 else {
  VAR_9 = FUNC_1(VAR_6, 10, &VAR_8);
  if (VAR_9 < 0)
   return VAR_9;
  if (VAR_8 != (sector_t)VAR_8)
   return -VAR_1;
 }

 VAR_9 = FUNC_2(VAR_5);
 if (VAR_9)
  return VAR_9;
 if (VAR_5->pers && !FUNC_5(VAR_2, &VAR_5->recovery))
  VAR_9 = -VAR_0;

 if (!VAR_9) {
  VAR_5->recovery_cp = VAR_8;
  if (VAR_5->pers)
   FUNC_4(VAR_3, &VAR_5->sb_flags);
 }
 FUNC_3(VAR_5);
 return VAR_9 ?: VAR_7;
}
