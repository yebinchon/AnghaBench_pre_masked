
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef scalar_t__ uint64_t ;
typedef scalar_t__ uint32_t ;
struct _qs {int cur_len; int cur_drop; } ;
struct _cfg {int* d; scalar_t__* arg; } ;


 int VAR_0 ;
 int FUNC_0 (int,char*,int,int) ;
 scalar_t__ FUNC_1 () ;

__attribute__((used)) static int
FUNC_2(struct _qs *VAR_1, struct _cfg *VAR_2)
{
 int VAR_3 = VAR_1->cur_len;
 uint64_t VAR_4 = FUNC_1();
 uint32_t *VAR_5 = VAR_2->arg;

 if (VAR_3 >= VAR_0) {
  FUNC_0(5, "pkt len %d too large, trim to %d", VAR_3, VAR_0-1);
  VAR_3 = VAR_0-1;
 }
 VAR_1->cur_drop = VAR_4 < VAR_5[VAR_3];

 VAR_2->d[1] += VAR_3 * 8;
 VAR_2->d[2] += VAR_1->cur_drop;

 return 0;
}
