
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;
 unsigned int FUNC_0 (void**) ;
 scalar_t__ VAR_0 ;
 scalar_t__ VAR_1 ;
 scalar_t__ VAR_2 ;
 void* FUNC_1 (scalar_t__) ;
 void** VAR_3 ;
 int FUNC_2 (void**,unsigned int) ;
 void** VAR_4 ;
 void* VAR_5 ;
 void** VAR_6 ;

__attribute__((used)) static int FUNC_3(void)
{
 unsigned int VAR_7;

 for (VAR_7 = 0; VAR_7 < FUNC_0(VAR_6); VAR_7++)
  VAR_6[VAR_7] = FUNC_1(VAR_2 + (VAR_7*4));

 for (VAR_7 = 0; VAR_7 < FUNC_0(VAR_4); VAR_7++)
  VAR_4[VAR_7] = FUNC_1(VAR_0 + (VAR_7*4));

 FUNC_2(VAR_3, FUNC_0(VAR_3));
 VAR_5 = FUNC_1(VAR_1);

 return 0;
}
