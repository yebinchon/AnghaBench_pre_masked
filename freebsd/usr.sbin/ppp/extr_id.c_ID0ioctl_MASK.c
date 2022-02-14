
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;
 int FUNC_0 () ;
 int FUNC_1 () ;
 int VAR_0 ;
 int FUNC_2 (int,unsigned long,void*) ;
 int FUNC_3 (int ,char*,int,int,unsigned long,void*) ;

int
FUNC_4(int VAR_1, unsigned long VAR_2, void *VAR_3)
{
  int VAR_4;

  FUNC_0();
  VAR_4 = FUNC_2(VAR_1, VAR_2, VAR_3);
  FUNC_3(VAR_0, "%d = ioctl(%d, %lu, %p)\n", VAR_4, VAR_1, VAR_2, VAR_3);
  FUNC_1();
  return VAR_4;
}
