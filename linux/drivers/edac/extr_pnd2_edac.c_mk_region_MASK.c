
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef void* u64 ;
struct region {int enabled; void* limit; void* base; } ;


 int FUNC_0 (int,char*,char*,void*,void*) ;

__attribute__((used)) static void FUNC_1(char *VAR_0, struct region *VAR_1, u64 VAR_2, u64 VAR_3)
{
 VAR_1->enabled = 1;
 VAR_1->base = VAR_2;
 VAR_1->limit = VAR_3;
 FUNC_0(2, "Region:%s [%llx, %llx]\n", VAR_0, VAR_2, VAR_3);
}
