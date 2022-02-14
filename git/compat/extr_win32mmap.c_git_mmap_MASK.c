
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_3__ TYPE_1__ ;


typedef int uint64_t ;
typedef int uint32_t ;
typedef scalar_t__ off_t ;
struct TYPE_3__ {scalar_t__ QuadPart; } ;
typedef TYPE_1__ LARGE_INTEGER ;
typedef scalar_t__ HANDLE ;


 int FUNC_0 (scalar_t__) ;
 scalar_t__ FUNC_1 (scalar_t__,int *,int ,int ,int ,int *) ;
 int VAR_0 ;
 int VAR_1 ;
 scalar_t__ VAR_2 ;
 int VAR_3 ;
 int VAR_4 ;
 int FUNC_2 (scalar_t__,TYPE_1__*) ;
 scalar_t__ FUNC_3 () ;
 void* VAR_5 ;
 int VAR_6 ;
 void* FUNC_4 (scalar_t__,int ,int,int,size_t,void*) ;
 int VAR_7 ;
 int VAR_8 ;
 int VAR_9 ;
 scalar_t__ FUNC_5 (int) ;
 int FUNC_6 (char*) ;
 int VAR_10 ;
 int FUNC_7 (char*) ;
 size_t FUNC_8 (scalar_t__) ;

void *FUNC_9(void *VAR_11, size_t VAR_12, int VAR_13, int VAR_14, int VAR_15, off_t VAR_16)
{
 HANDLE VAR_17, VAR_18;
 void *VAR_19;
 LARGE_INTEGER VAR_20;
 uint64_t VAR_21 = VAR_16;
 uint32_t VAR_22 = VAR_21 & 0xFFFFFFFF;
 uint32_t VAR_23 = (VAR_21 >> 32) & 0xFFFFFFFF;

 VAR_17 = (HANDLE)FUNC_5(VAR_15);
 if (!FUNC_2(VAR_17, &VAR_20))
  FUNC_6("mmap: could not determine filesize");

 if ((VAR_12 + VAR_16) > VAR_20.QuadPart)
  VAR_12 = FUNC_8(VAR_20.QuadPart - VAR_16);

 if (!(VAR_14 & VAR_6))
  FUNC_6("Invalid usage of mmap when built with USE_WIN32_MMAP");

 VAR_18 = FUNC_1(VAR_17, ((void*)0),
  VAR_13 == VAR_9 ? VAR_7 : VAR_8, 0, 0, ((void*)0));

 if (!VAR_18) {
  VAR_10 = VAR_1;
  return VAR_5;
 }

 VAR_19 = FUNC_4(VAR_18, VAR_13 == VAR_9 ?
   VAR_4 : VAR_3, VAR_23, VAR_22, VAR_12, VAR_11);

 if (!FUNC_0(VAR_18))
  FUNC_7("unable to close file mapping handle");

 if (VAR_19)
  return VAR_19;

 VAR_10 = FUNC_3() == VAR_2 ? VAR_0 : VAR_1;
 return VAR_5;
}
