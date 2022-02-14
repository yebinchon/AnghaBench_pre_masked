
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef scalar_t__ uint64_t ;
typedef int uint32_t ;
typedef scalar_t__ int64_t ;


 scalar_t__ VAR_0 ;
 scalar_t__ FUNC_0 (scalar_t__,int ) ;
 int VAR_1 ;
 scalar_t__ FUNC_1 (scalar_t__,scalar_t__,scalar_t__,scalar_t__,char*,int ) ;
 scalar_t__ FUNC_2 (char*,int ) ;
 void* FUNC_3 (scalar_t__) ;
 int FUNC_4 (void*,int ,scalar_t__) ;

void *FUNC_5(uint64_t VAR_2, uint64_t VAR_3,
       uint64_t VAR_4, uint64_t VAR_5,
       char *VAR_6,
       void (*VAR_7) (void *))
{
 int64_t VAR_8;
 void *VAR_9;
 uint64_t VAR_10;

 VAR_10 = (uint64_t)
  FUNC_2(VAR_6,
        (uint32_t)VAR_0);

 if (VAR_10) {
  VAR_8 = FUNC_0(VAR_10,
          VAR_1);
  return FUNC_3(VAR_8);
 }

 VAR_8 = FUNC_1(VAR_2, VAR_3, VAR_4,
        VAR_5, VAR_6,
        (uint32_t)VAR_0);

 if (VAR_8 < 0)
  return ((void*)0);
 VAR_9 = FUNC_3(VAR_8);

 if (VAR_7)
  VAR_7(VAR_9);
 else
  FUNC_4(VAR_9, 0, VAR_2);

 return VAR_9;
}
