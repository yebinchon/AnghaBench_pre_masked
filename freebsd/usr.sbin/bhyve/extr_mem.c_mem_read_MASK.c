
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int uint64_t ;
struct mem_range {int (* handler ) (void*,int,int ,int ,int,int *,int ,int ) ;int arg2; int arg1; } ;


 int VAR_0 ;
 int FUNC_0 (void*,int,int ,int ,int,int *,int ,int ) ;

__attribute__((used)) static int
FUNC_1(void *VAR_1, int VAR_2, uint64_t VAR_3, uint64_t *VAR_4, int VAR_5, void *VAR_6)
{
 int VAR_7;
 struct mem_range *VAR_8 = VAR_6;

 VAR_7 = (*VAR_8->handler)(VAR_1, VAR_2, VAR_0, VAR_3, VAR_5,
          VAR_4, VAR_8->arg1, VAR_8->arg2);
 return (VAR_7);
}
