
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int u8 ;


 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int VAR_3 ;
 int FUNC_0 (int *,void (*) (struct dmi_header const*,void*),void*) ;
 int VAR_4 ;
 int * FUNC_1 (int ,int ) ;
 int FUNC_2 (int *) ;

int FUNC_3(void (*VAR_5)(const struct dmi_header *, void *),
      void *VAR_6)
{
 u8 *VAR_7;

 if (!VAR_2)
  return -VAR_1;

 VAR_7 = FUNC_1(VAR_3, VAR_4);
 if (VAR_7 == ((void*)0))
  return -VAR_0;

 FUNC_0(VAR_7, VAR_5, VAR_6);

 FUNC_2(VAR_7);
 return 0;
}
