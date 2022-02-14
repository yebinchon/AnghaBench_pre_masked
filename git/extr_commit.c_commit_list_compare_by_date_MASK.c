
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


typedef scalar_t__ timestamp_t ;
struct commit_list {TYPE_1__* item; } ;
struct TYPE_2__ {scalar_t__ date; } ;



__attribute__((used)) static int FUNC_0(const void *VAR_0, const void *VAR_1)
{
 timestamp_t VAR_2 = ((const struct commit_list *)VAR_0)->item->date;
 timestamp_t VAR_3 = ((const struct commit_list *)VAR_1)->item->date;
 if (VAR_2 < VAR_3)
  return 1;
 if (VAR_2 > VAR_3)
  return -1;
 return 0;
}
