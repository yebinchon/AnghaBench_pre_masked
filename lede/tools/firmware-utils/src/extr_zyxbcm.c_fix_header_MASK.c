
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int uint8_t ;
typedef scalar_t__ uint64_t ;
typedef int uint32_t ;
struct zyxbcm_tag {int * headerCRC; int * fskernelCRC; int * flashImageEnd; int * reserved1; scalar_t__* information1; } ;
struct bcm_tag {int * fskernelCRC; int kernelLength; int flashRootLength; int flashImageStart; } ;


 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int VAR_3 ;
 int FUNC_0 (int ,void*,int) ;
 int FUNC_1 (int ) ;
 int FUNC_2 (int *,int *,int) ;
 int FUNC_3 (int *,int ,int) ;
 int FUNC_4 (int *,char*,scalar_t__) ;
 scalar_t__ FUNC_5 (int ,int *,int) ;

void FUNC_6(void *VAR_4)
{
 struct bcm_tag *VAR_5 = VAR_4;
 struct zyxbcm_tag *VAR_6 = VAR_4;
 uint8_t VAR_7[VAR_1];
 uint32_t VAR_8;
 uint64_t VAR_9, VAR_10, VAR_11;


 VAR_9 = FUNC_5(VAR_5->flashImageStart, ((void*)0), 10);
 VAR_10 = FUNC_5(VAR_5->flashRootLength, ((void*)0), 10);
 VAR_11 = FUNC_5(VAR_5->kernelLength, ((void*)0), 10);
 FUNC_2(VAR_7, VAR_5->fskernelCRC, VAR_1);


 VAR_6->information1[VAR_3 - 1] = 0;
 FUNC_3(VAR_6->flashImageEnd, 0, VAR_0);
 FUNC_3(VAR_6->fskernelCRC, 0, VAR_1);
 FUNC_3(VAR_6->reserved1, 0, 2);


 FUNC_4(VAR_6->flashImageEnd, "%lu", VAR_9 + VAR_10 + VAR_11);
 FUNC_2(VAR_6->fskernelCRC, VAR_7, VAR_1);


 VAR_8 = FUNC_1(FUNC_0(VAR_2, VAR_4, 236));
 FUNC_2(VAR_6->headerCRC, &VAR_8, 4);
}
