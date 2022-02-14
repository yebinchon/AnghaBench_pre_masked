
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;
 void* VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int VAR_3 ;
 int VAR_4 ;
 void* FUNC_0 (char*,int,int,int,int,int ) ;
 int VAR_5 ;
 int FUNC_1 (char*) ;

int FUNC_2(char** VAR_6,int VAR_7,int VAR_8)
{
  void* VAR_9;
  char *VAR_10;

  VAR_9 = FUNC_0(((void*)0),VAR_5*2, VAR_3 | VAR_4 , VAR_2, VAR_7, 0);
  if (VAR_9 == VAR_0)
    {
      FUNC_1("Mmap failed");
      return 1;
    }

  VAR_10 = VAR_9;
  VAR_9 = FUNC_0(VAR_10 + VAR_5,VAR_5, VAR_3 | VAR_4 , VAR_1 |
VAR_2, VAR_8, 0);

  if (VAR_9 == VAR_0)
    {
      FUNC_1("Mmap2 failed");
      return 1;
    }
  *VAR_6 = VAR_10;
  return 0;
}
