
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;
 int FUNC_0 () ;
 int FUNC_1 () ;
 int VAR_0 ;
 int FUNC_2 (int ,char*,int,int,long) ;
 int FUNC_3 (int,void const*,size_t) ;

int
FUNC_4(int VAR_1, const void *VAR_2, size_t VAR_3)
{
  int VAR_4;

  FUNC_0();
  VAR_4 = FUNC_3(VAR_1, VAR_2, VAR_3);
  FUNC_2(VAR_0, "%d = write(%d, data, %ld)\n", VAR_4, VAR_1, (long)VAR_3);
  FUNC_1();
  return VAR_4;
}
