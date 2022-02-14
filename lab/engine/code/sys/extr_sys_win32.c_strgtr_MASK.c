
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int qboolean ;


 int VAR_0 ;
 int VAR_1 ;
 int FUNC_0 (char const*) ;

__attribute__((used)) static qboolean FUNC_1(const char *VAR_2, const char *VAR_3)
{
 int VAR_4, VAR_5, VAR_6;

 VAR_4 = FUNC_0(VAR_2);
 VAR_5 = FUNC_0(VAR_3);

 if (VAR_5<VAR_4) {
  VAR_4 = VAR_5;
 }

 for(VAR_6=0;VAR_6<VAR_4;VAR_6++) {
  if (VAR_3[VAR_6] > VAR_2[VAR_6]) {
   return VAR_1;
  }
  if (VAR_3[VAR_6] < VAR_2[VAR_6]) {
   return VAR_0;
  }
 }
 return VAR_0;
}
