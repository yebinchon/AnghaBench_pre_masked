
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int uint64_t ;
typedef int GModule ;


 int VAR_0 ;
 void* FUNC_0 (int ,int ) ;
 int FUNC_1 (void*,int) ;
 int FUNC_2 (void*,int,int ) ;

int
FUNC_3 (GModule VAR_1, int VAR_2, uint64_t VAR_3)
{
  uint64_t VAR_4 = 0;
  void *VAR_5 = FUNC_0 (VAR_1, VAR_0);

  if (!VAR_5)
    return -1;

  if ((VAR_4 = FUNC_1 (VAR_5, VAR_2)) < VAR_3)
    FUNC_2 (VAR_5, VAR_2, VAR_3);

  return 0;
}
