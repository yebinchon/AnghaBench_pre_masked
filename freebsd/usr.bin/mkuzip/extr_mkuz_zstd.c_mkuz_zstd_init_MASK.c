
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef void ZSTD_CCtx ;


 int VAR_0 ;
 size_t FUNC_0 (void*,int ,int) ;
 int VAR_1 ;
 int VAR_2 ;
 void* FUNC_1 () ;
 int FUNC_2 (size_t) ;
 scalar_t__ FUNC_3 (size_t) ;
 int FUNC_4 () ;
 int FUNC_5 () ;
 int FUNC_6 (int,char*,...) ;

void *
FUNC_7(int *VAR_3)
{
 ZSTD_CCtx *VAR_4;
 size_t VAR_5;


 if (*VAR_3 == VAR_0)
  *VAR_3 = 9;
 if (*VAR_3 < FUNC_5() || *VAR_3 == 0 ||
     *VAR_3 > FUNC_4())
  FUNC_6(1, "provided compression level %d is invalid",
      *VAR_3);

 VAR_4 = FUNC_1();
 if (VAR_4 == ((void*)0))
  FUNC_6(1, "could not allocate Zstd context");

 VAR_5 = FUNC_0(VAR_4, VAR_2,
     *VAR_3);
 if (FUNC_3(VAR_5))
  FUNC_6(1, "Could not set zstd compression level %d: %s",
      *VAR_3, FUNC_2(VAR_5));

 VAR_5 = FUNC_0(VAR_4, VAR_1, 1);
 if (FUNC_3(VAR_5))
  FUNC_6(1, "Could not enable zstd checksum: %s",
      FUNC_2(VAR_5));

 return (VAR_4);
}
