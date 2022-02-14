
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int module_t ;


 int VAR_0 ;
 int VAR_1 ;


 int VAR_2 ;
 int * VAR_3 ;
 int * VAR_4 ;
 int * VAR_5 ;
 int * VAR_6 ;
 int VAR_7 ;
 int FUNC_0 (int ,int ) ;
 int FUNC_1 (int ) ;

__attribute__((used)) static int
FUNC_2(module_t VAR_8, int VAR_9, void *VAR_10)
{
 int VAR_11 = 0;

 switch (VAR_9) {
 case 129:
  VAR_11 = FUNC_0(VAR_7,
      VAR_2);
  break;

 case 128:
  if (VAR_6 != ((void*)0) || VAR_4 != ((void*)0)
      || VAR_3 != ((void*)0) || VAR_5 != ((void*)0)) {
   VAR_11 = VAR_0;
   break;
  }
  FUNC_1(VAR_7);
  break;
 default:
  VAR_11 = VAR_1;
  break;
 }
 return VAR_11;
}
