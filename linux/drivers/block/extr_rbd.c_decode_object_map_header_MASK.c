
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int u8 ;
typedef int u64 ;
typedef int u32 ;


 int VAR_0 ;
 int FUNC_0 (void**,void*,int,int ) ;
 int FUNC_1 (void**,void*,int ,int ) ;
 int FUNC_2 (void**,void*,int,char*,int *,int*) ;
 int VAR_1 ;

__attribute__((used)) static int FUNC_3(void **VAR_2, void *VAR_3, u64 *VAR_4)
{
 u8 VAR_5;
 u32 VAR_6;
 u32 VAR_7;
 void *VAR_8;
 int VAR_9;

 FUNC_0(VAR_2, VAR_3, VAR_7, VAR_1);
 VAR_8 = *VAR_2 + VAR_7;

 VAR_9 = FUNC_2(VAR_2, VAR_3, 1, "BitVector header", &VAR_5,
      &VAR_6);
 if (VAR_9)
  return VAR_9;

 FUNC_1(VAR_2, VAR_3, *VAR_4, VAR_1);

 *VAR_2 = VAR_8;
 return 0;

e_inval:
 return -VAR_0;
}
