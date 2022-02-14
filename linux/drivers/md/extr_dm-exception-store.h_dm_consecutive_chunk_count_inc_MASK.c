
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct dm_exception {unsigned long long new_chunk; } ;


 int FUNC_0 (int) ;
 unsigned long long VAR_0 ;
 int FUNC_1 (struct dm_exception*) ;

__attribute__((used)) static inline void FUNC_2(struct dm_exception *VAR_1)
{
 VAR_1->new_chunk += (1ULL << VAR_0);

 FUNC_0(!FUNC_1(VAR_1));
}
