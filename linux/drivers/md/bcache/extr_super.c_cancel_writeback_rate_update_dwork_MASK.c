
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


struct TYPE_2__ {int flags; } ;
struct cached_dev {int writeback_rate_update; TYPE_1__ disk; } ;


 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int FUNC_0 (int *) ;
 int FUNC_1 (char*) ;
 int FUNC_2 (int) ;
 int FUNC_3 (int ,int *) ;

__attribute__((used)) static void FUNC_4(struct cached_dev *VAR_3)
{
 int VAR_4 = VAR_2 * VAR_1;

 do {
  if (!FUNC_3(VAR_0,
         &VAR_3->disk.flags))
   break;
  VAR_4--;
  FUNC_2(1);
 } while (VAR_4 > 0);

 if (VAR_4 == 0)
  FUNC_1("give up waiting for dc->writeback_write_update to quit");

 FUNC_0(&VAR_3->writeback_rate_update);
}
