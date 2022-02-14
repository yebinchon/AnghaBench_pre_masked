
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


struct TYPE_2__ {int pcci_unified; } ;
struct cache_info {int type; TYPE_1__ cci; } ;
typedef int ssize_t ;


 char** VAR_0 ;
 int FUNC_0 (char*,char*,char*) ;

__attribute__((used)) static ssize_t FUNC_1(struct cache_info *VAR_1, char *VAR_2)
{
 int VAR_3 = VAR_1->type + VAR_1->cci.pcci_unified;
 return FUNC_0(VAR_2, "%s\n", VAR_0[VAR_3]);
}
