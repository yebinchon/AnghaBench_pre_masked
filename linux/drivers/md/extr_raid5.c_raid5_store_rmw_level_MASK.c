
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


struct r5conf {unsigned long rmw_level; } ;
struct mddev {struct r5conf* private; } ;
typedef size_t ssize_t ;
struct TYPE_2__ {int xor_syndrome; } ;


 size_t VAR_0 ;
 size_t VAR_1 ;
 size_t VAR_2 ;
 unsigned long VAR_3 ;
 unsigned long VAR_4 ;
 unsigned long VAR_5 ;
 scalar_t__ FUNC_0 (char const*,int,unsigned long*) ;
 TYPE_1__ VAR_6 ;

__attribute__((used)) static ssize_t
FUNC_1(struct mddev *VAR_7, const char *VAR_8, size_t VAR_9)
{
 struct r5conf *VAR_10 = VAR_7->private;
 unsigned long VAR_11;

 if (!VAR_10)
  return -VAR_1;

 if (VAR_9 >= VAR_2)
  return -VAR_0;

 if (FUNC_0(VAR_8, 10, &VAR_11))
  return -VAR_0;

 if (VAR_11 != VAR_3 && !VAR_6.xor_syndrome)
  return -VAR_0;

 if (VAR_11 != VAR_3 &&
     VAR_11 != VAR_4 &&
     VAR_11 != VAR_5)
  return -VAR_0;

 VAR_10->rmw_level = VAR_11;
 return VAR_9;
}
