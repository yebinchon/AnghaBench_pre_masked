
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


struct mddev {TYPE_1__* bitmap; scalar_t__ degraded; } ;
typedef size_t ssize_t ;
struct TYPE_2__ {int need_sync; } ;


 size_t VAR_0 ;
 size_t VAR_1 ;
 size_t VAR_2 ;
 scalar_t__ FUNC_0 (char const*,char*,int) ;

__attribute__((used)) static ssize_t FUNC_1(struct mddev *VAR_3, const char *VAR_4, size_t VAR_5)
{
 if (VAR_3->bitmap == ((void*)0))
  return -VAR_2;
 if (FUNC_0(VAR_4, "false", 5) == 0)
  VAR_3->bitmap->need_sync = 1;
 else if (FUNC_0(VAR_4, "true", 4) == 0) {
  if (VAR_3->degraded)
   return -VAR_0;
  VAR_3->bitmap->need_sync = 0;
 } else
  return -VAR_1;
 return VAR_5;
}
