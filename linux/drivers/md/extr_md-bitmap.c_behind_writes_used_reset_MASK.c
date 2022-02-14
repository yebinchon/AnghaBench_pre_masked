
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


struct mddev {TYPE_1__* bitmap; } ;
typedef size_t ssize_t ;
struct TYPE_2__ {scalar_t__ behind_writes_used; } ;



__attribute__((used)) static ssize_t
FUNC_0(struct mddev *VAR_0, const char *VAR_1, size_t VAR_2)
{
 if (VAR_0->bitmap)
  VAR_0->bitmap->behind_writes_used = 0;
 return VAR_2;
}
