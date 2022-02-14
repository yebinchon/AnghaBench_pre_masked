
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int u64 ;
struct badblocks {scalar_t__ shift; int count; int lock; scalar_t__ unacked_exist; int * page; } ;
typedef size_t ssize_t ;
typedef scalar_t__ sector_t ;


 int FUNC_0 (int ) ;
 unsigned int FUNC_1 (int ) ;
 scalar_t__ FUNC_2 (int ) ;
 size_t VAR_0 ;
 unsigned int FUNC_3 (int *) ;
 scalar_t__ FUNC_4 (int *,unsigned int) ;
 scalar_t__ FUNC_5 (char*,size_t,char*,unsigned long long,unsigned int) ;

ssize_t FUNC_6(struct badblocks *VAR_1, char *VAR_2, int VAR_3)
{
 size_t VAR_4;
 int VAR_5;
 u64 *VAR_6 = VAR_1->page;
 unsigned VAR_7;

 if (VAR_1->shift < 0)
  return 0;

retry:
 VAR_7 = FUNC_3(&VAR_1->lock);

 VAR_4 = 0;
 VAR_5 = 0;

 while (VAR_4 < VAR_0 && VAR_5 < VAR_1->count) {
  sector_t VAR_8 = FUNC_2(VAR_6[VAR_5]);
  unsigned int VAR_9 = FUNC_1(VAR_6[VAR_5]);
  int VAR_10 = FUNC_0(VAR_6[VAR_5]);

  VAR_5++;

  if (VAR_3 && VAR_10)
   continue;

  VAR_4 += FUNC_5(VAR_2+VAR_4, VAR_0-VAR_4, "%llu %u\n",
    (unsigned long long)VAR_8 << VAR_1->shift,
    VAR_9 << VAR_1->shift);
 }
 if (VAR_3 && VAR_4 == 0)
  VAR_1->unacked_exist = 0;

 if (FUNC_4(&VAR_1->lock, VAR_7))
  goto retry;

 return VAR_4;
}
