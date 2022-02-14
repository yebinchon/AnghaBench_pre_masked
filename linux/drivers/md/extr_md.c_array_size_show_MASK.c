
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct mddev {scalar_t__ array_sectors; scalar_t__ external_size; } ;
typedef int ssize_t ;


 int FUNC_0 (char*,char*,...) ;

__attribute__((used)) static ssize_t
FUNC_1(struct mddev *VAR_0, char *VAR_1)
{
 if (VAR_0->external_size)
  return FUNC_0(VAR_1, "%llu\n",
          (unsigned long long)VAR_0->array_sectors/2);
 else
  return FUNC_0(VAR_1, "default\n");
}
