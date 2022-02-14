
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


struct TYPE_2__ {unsigned int pcci_cache_size; unsigned int pcci_assoc; int pcci_line_size; } ;
struct cache_info {TYPE_1__ cci; } ;
typedef int ssize_t ;


 int FUNC_0 (char*,char*,unsigned int) ;

__attribute__((used)) static ssize_t FUNC_1(struct cache_info *VAR_0, char *VAR_1)
{
 unsigned VAR_2 = VAR_0->cci.pcci_cache_size;
 VAR_2 /= VAR_0->cci.pcci_assoc;
 VAR_2 /= 1 << VAR_0->cci.pcci_line_size;

 return FUNC_0(VAR_1, "%u\n", VAR_2);
}
