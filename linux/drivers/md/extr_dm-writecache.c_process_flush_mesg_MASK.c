
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct dm_writecache {int writeback_all; int writeback_wq; int writeback_work; int ti; } ;


 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 scalar_t__ FUNC_0 (int ) ;
 int FUNC_1 (int ) ;
 int FUNC_2 (int ,int *) ;
 int FUNC_3 (struct dm_writecache*) ;
 int FUNC_4 (struct dm_writecache*) ;
 int FUNC_5 (struct dm_writecache*) ;
 scalar_t__ FUNC_6 (struct dm_writecache*) ;

__attribute__((used)) static int FUNC_7(unsigned VAR_3, char **VAR_4, struct dm_writecache *VAR_5)
{
 if (VAR_3 != 1)
  return -VAR_1;

 FUNC_3(VAR_5);
 if (FUNC_0(VAR_5->ti)) {
  FUNC_4(VAR_5);
  return -VAR_0;
 }
 if (FUNC_6(VAR_5)) {
  FUNC_4(VAR_5);
  return -VAR_2;
 }

 FUNC_5(VAR_5);
 VAR_5->writeback_all++;
 FUNC_2(VAR_5->writeback_wq, &VAR_5->writeback_work);
 FUNC_4(VAR_5);

 FUNC_1(VAR_5->writeback_wq);

 FUNC_3(VAR_5);
 VAR_5->writeback_all--;
 if (FUNC_6(VAR_5)) {
  FUNC_4(VAR_5);
  return -VAR_2;
 }
 FUNC_4(VAR_5);

 return 0;
}
