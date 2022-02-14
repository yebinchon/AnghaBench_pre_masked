
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


typedef int uint64_t ;
struct cache {int cache_dev_name; TYPE_1__* set; int io_errors; int io_count; } ;
typedef scalar_t__ blk_status_t ;
struct TYPE_2__ {unsigned int error_decay; unsigned int error_limit; } ;


 int VAR_0 ;
 unsigned int FUNC_0 (int,int *) ;
 unsigned int FUNC_1 (int *,unsigned int,unsigned int) ;
 unsigned int FUNC_2 (int *) ;
 unsigned int FUNC_3 (int *) ;
 int FUNC_4 (TYPE_1__*,char*,int ,char const*) ;
 int FUNC_5 (char*,int ,char const*,char*) ;

void FUNC_6(struct cache *VAR_1,
    blk_status_t VAR_2,
    int VAR_3,
    const char *VAR_4)
{





 if (VAR_1->set->error_decay) {
  unsigned int VAR_5 = FUNC_2(&VAR_1->io_count);

  while (VAR_5 > VAR_1->set->error_decay) {
   unsigned int VAR_6;
   unsigned int VAR_7 = VAR_5;
   unsigned int VAR_8 = VAR_5 - VAR_1->set->error_decay;






   VAR_5 = FUNC_1(&VAR_1->io_count, VAR_7, VAR_8);

   if (VAR_5 == VAR_7) {
    VAR_5 = VAR_8;

    VAR_6 = FUNC_3(&VAR_1->io_errors);
    do {
     VAR_7 = VAR_6;
     VAR_8 = ((uint64_t) VAR_6 * 127) / 128;
     VAR_6 = FUNC_1(&VAR_1->io_errors,
        VAR_7, VAR_8);
    } while (VAR_7 != VAR_6);
   }
  }
 }

 if (VAR_2) {
  unsigned int VAR_9 = FUNC_0(1 << VAR_0,
          &VAR_1->io_errors);
  VAR_9 >>= VAR_0;

  if (VAR_9 < VAR_1->set->error_limit)
   FUNC_5("%s: IO error on %s%s",
          VAR_1->cache_dev_name, VAR_4,
          VAR_3 ? ", recovering." : ".");
  else
   FUNC_4(VAR_1->set,
         "%s: too many IO errors %s",
         VAR_1->cache_dev_name, VAR_4);
 }
}
