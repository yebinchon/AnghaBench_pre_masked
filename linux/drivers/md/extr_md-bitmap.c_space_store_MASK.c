
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_6__ TYPE_3__ ;
typedef struct TYPE_5__ TYPE_2__ ;
typedef struct TYPE_4__ TYPE_1__ ;


struct TYPE_6__ {unsigned long space; } ;
struct mddev {TYPE_3__ bitmap_info; TYPE_2__* bitmap; } ;
typedef int ssize_t ;
struct TYPE_4__ {int bytes; } ;
struct TYPE_5__ {TYPE_1__ storage; } ;


 int VAR_0 ;
 int VAR_1 ;
 int FUNC_0 (char const*,int,unsigned long*) ;

__attribute__((used)) static ssize_t
FUNC_1(struct mddev *VAR_2, const char *VAR_3, size_t VAR_4)
{
 unsigned long VAR_5;
 int VAR_6;

 VAR_6 = FUNC_0(VAR_3, 10, &VAR_5);
 if (VAR_6)
  return VAR_6;

 if (VAR_5 == 0)
  return -VAR_1;

 if (VAR_2->bitmap &&
     VAR_5 < (VAR_2->bitmap->storage.bytes + 511) >> 9)
  return -VAR_0;




 VAR_2->bitmap_info.space = VAR_5;
 return VAR_4;
}
