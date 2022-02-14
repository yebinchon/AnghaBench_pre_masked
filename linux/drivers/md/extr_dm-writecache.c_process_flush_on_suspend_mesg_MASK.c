
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct dm_writecache {int flush_on_suspend; } ;


 int VAR_0 ;
 int FUNC_0 (struct dm_writecache*) ;
 int FUNC_1 (struct dm_writecache*) ;

__attribute__((used)) static int FUNC_2(unsigned VAR_1, char **VAR_2, struct dm_writecache *VAR_3)
{
 if (VAR_1 != 1)
  return -VAR_0;

 FUNC_0(VAR_3);
 VAR_3->flush_on_suspend = 1;
 FUNC_1(VAR_3);

 return 0;
}
