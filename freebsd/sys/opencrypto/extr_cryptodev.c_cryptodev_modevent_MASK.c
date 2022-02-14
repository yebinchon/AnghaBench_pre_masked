
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int module_t ;


 int VAR_0 ;
 int VAR_1 ;


 int VAR_2 ;
 int VAR_3 ;
 int VAR_4 ;
 int VAR_5 ;
 int FUNC_0 (int ) ;
 int FUNC_1 (int *,int ,int ,int ,int,char*) ;
 int FUNC_2 (char*) ;

__attribute__((used)) static int
FUNC_3(module_t VAR_6, int VAR_7, void *VAR_8)
{
 switch (VAR_7) {
 case 129:
  if (VAR_3)
   FUNC_2("crypto: <crypto device>\n");
  VAR_5 = FUNC_1(&VAR_4, 0,
          VAR_2, VAR_1, 0666,
          "crypto");
  return 0;
 case 128:

  FUNC_0(VAR_5);
  return 0;
 }
 return VAR_0;
}
