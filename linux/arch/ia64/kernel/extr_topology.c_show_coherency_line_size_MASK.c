
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


struct TYPE_2__ {int pcci_line_size; } ;
struct cache_info {TYPE_1__ cci; } ;
typedef int ssize_t ;


 int FUNC_0 (char*,char*,int) ;

__attribute__((used)) static ssize_t FUNC_1(struct cache_info *VAR_0,
     char *VAR_1)
{
 return FUNC_0(VAR_1, "%u\n", 1 << VAR_0->cci.pcci_line_size);
}
