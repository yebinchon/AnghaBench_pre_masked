
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int u64 ;
struct badblocks {int count; scalar_t__ unacked_exist; int * page; } ;


 int FUNC_0 (int ) ;

__attribute__((used)) static void FUNC_1(struct badblocks *VAR_0)
{
 u64 *VAR_1 = VAR_0->page;
 int VAR_2;
 bool VAR_3 = 0;

 if (!VAR_0->unacked_exist)
  return;

 for (VAR_2 = 0; VAR_2 < VAR_0->count ; VAR_2++) {
  if (!FUNC_0(VAR_1[VAR_2])) {
   VAR_3 = 1;
   break;
  }
 }

 if (!VAR_3)
  VAR_0->unacked_exist = 0;
}
