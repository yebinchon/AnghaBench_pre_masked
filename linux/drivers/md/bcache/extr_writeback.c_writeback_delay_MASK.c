
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


struct TYPE_2__ {int flags; } ;
struct cached_dev {int writeback_rate; int writeback_percent; TYPE_1__ disk; } ;


 int VAR_0 ;
 unsigned int FUNC_0 (int *,unsigned int) ;
 scalar_t__ FUNC_1 (int ,int *) ;

__attribute__((used)) static unsigned int FUNC_2(struct cached_dev *VAR_1,
        unsigned int VAR_2)
{
 if (FUNC_1(VAR_0, &VAR_1->disk.flags) ||
     !VAR_1->writeback_percent)
  return 0;

 return FUNC_0(&VAR_1->writeback_rate, VAR_2);
}
