
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct msc_iter {scalar_t__ block; scalar_t__ start_block; int wrap_count; size_t offset; scalar_t__ block_off; scalar_t__ eof; struct msc* msc; } ;
struct msc {int dummy; } ;
typedef size_t ssize_t ;


 unsigned long VAR_0 ;
 int VAR_1 ;
 unsigned long FUNC_0 (scalar_t__) ;
 scalar_t__ FUNC_1 (struct msc_iter*) ;
 scalar_t__ FUNC_2 (struct msc_iter*) ;
 scalar_t__ FUNC_3 (struct msc_iter*,struct msc*) ;

__attribute__((used)) static ssize_t
FUNC_4(struct msc_iter *VAR_2, size_t VAR_3, void *VAR_4,
     unsigned long (*VAR_5)(void *, void *, size_t))
{
 struct msc *VAR_6 = VAR_2->msc;
 size_t VAR_7 = VAR_3;
 unsigned int VAR_8;

 if (VAR_2->eof)
  return 0;


 if (FUNC_3(VAR_2, VAR_6))
  return 0;

 do {
  unsigned long VAR_9 = FUNC_0(FUNC_1(VAR_2));
  void *VAR_10 = (void *)FUNC_1(VAR_2) + VAR_1;
  size_t VAR_11 = VAR_9, VAR_12 = 0;
  size_t VAR_13 = 0;

  VAR_8 = 1;
  if (VAR_2->block == VAR_2->start_block && VAR_2->wrap_count == 2) {
   VAR_11 = VAR_0 - VAR_9;
   VAR_10 += VAR_9;
  }

  if (!VAR_11)
   goto next_block;

  VAR_11 -= VAR_2->block_off;
  VAR_10 += VAR_2->block_off;

  if (VAR_7 < VAR_11) {
   VAR_11 = VAR_7;
   VAR_8 = 0;
  }

  VAR_13 = VAR_5(VAR_4, VAR_10, VAR_11);

  if (VAR_13)
   VAR_8 = 0;

  VAR_12 = VAR_11 - VAR_13;
  VAR_7 -= VAR_12;
  VAR_2->block_off += VAR_12;
  VAR_2->offset += VAR_12;

  if (!VAR_8)
   break;

next_block:
  if (FUNC_2(VAR_2))
   break;

 } while (VAR_7);

 return VAR_3 - VAR_7;
}
