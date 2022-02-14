
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;
 int VAR_0 ;
 void* VAR_1 ;
 int VAR_2 ;
 int VAR_3 ;
 int VAR_4 ;
 int VAR_5 ;
 int VAR_6 ;
 int VAR_7 ;
 int VAR_8 ;
 int VAR_9 ;
 int VAR_10 ;
 int FUNC_0 (int) ;
 void* FUNC_1 (int *,int ,int,int ,int,int ) ;
 int FUNC_2 (void*,int ,int) ;
 int FUNC_3 (void*,int ) ;
 int FUNC_4 (char*,int,int ) ;
 int FUNC_5 (char*) ;
 int VAR_11 ;
 int FUNC_6 (int,int ,int ) ;

int FUNC_7(char* VAR_12,int* VAR_13)
{
  int VAR_14;
  int VAR_15;
  int VAR_16;
  void *VAR_17;

  VAR_14 = FUNC_4(VAR_12,VAR_5 | VAR_7 | VAR_6,VAR_10);
  if (VAR_14 == -1)
    {
      FUNC_5("Creating file");
      return VAR_14;
    }

  VAR_15 = FUNC_6(VAR_14,VAR_11,VAR_0);
  if (VAR_15 < 0)
    {
      FUNC_5("Write failed");
      return 1;
    }

  VAR_16 = FUNC_0(VAR_14);
   if (VAR_16 != 0)
    {
        FUNC_5("fsync failed");
 return 1;
    }

  VAR_17 = FUNC_1(((void*)0),VAR_0, VAR_8 | VAR_9 , VAR_2, VAR_14, 0);
  if (VAR_17 == VAR_1)
    {
      FUNC_5("Mmap failed");
      return 1;
    }

  VAR_16 = FUNC_2(VAR_17,VAR_0,VAR_3 | VAR_4);
  if (VAR_16 != 0)
    {
        FUNC_5("Msync failed");
 return 1;
    }

  FUNC_3(VAR_17,VAR_0);

  *VAR_13 = VAR_14;
  return 0;
}
