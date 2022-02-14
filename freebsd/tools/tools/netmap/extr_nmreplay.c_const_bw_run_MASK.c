
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int uint64_t ;
struct _qs {unsigned long long cur_tt; unsigned long long cur_len; } ;
struct _cfg {int* d; } ;


 unsigned long long VAR_0 ;

__attribute__((used)) static int
FUNC_0(struct _qs *VAR_1, struct _cfg *VAR_2)
{
 uint64_t VAR_3 = VAR_2->d[0];
 VAR_1->cur_tt = VAR_3 ? 8ULL* VAR_0 * VAR_1->cur_len / VAR_3 : 0 ;
 return 0;
}
