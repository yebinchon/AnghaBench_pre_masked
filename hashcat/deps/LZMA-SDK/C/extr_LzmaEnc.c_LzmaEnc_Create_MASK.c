
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int ISzAllocPtr ;
typedef void* CLzmaEncHandle ;
typedef int CLzmaEnc ;


 void* FUNC_0 (int ,int) ;
 int FUNC_1 (int *) ;

CLzmaEncHandle FUNC_2(ISzAllocPtr VAR_0)
{
  void *VAR_1;
  VAR_1 = FUNC_0(VAR_0, sizeof(CLzmaEnc));
  if (VAR_1)
    FUNC_1((CLzmaEnc *)VAR_1);
  return VAR_1;
}
