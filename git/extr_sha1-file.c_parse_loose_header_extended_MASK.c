
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct object_info {int* typep; unsigned long* sizep; scalar_t__ type_name; } ;


 unsigned int VAR_0 ;
 int FUNC_0 (char*) ;
 int FUNC_1 (int ) ;
 int FUNC_2 (scalar_t__,char const*,int) ;
 int FUNC_3 (char const*,int,int) ;

__attribute__((used)) static int FUNC_4(const char *VAR_1, struct object_info *VAR_2,
           unsigned int VAR_3)
{
 const char *VAR_4 = VAR_1;
 unsigned long VAR_5;
 int VAR_6, VAR_7 = 0;





 for (;;) {
  char VAR_8 = *VAR_1++;
  if (!VAR_8)
   return -1;
  if (VAR_8 == ' ')
   break;
  VAR_7++;
 }

 VAR_6 = FUNC_3(VAR_4, VAR_7, 1);
 if (VAR_2->type_name)
  FUNC_2(VAR_2->type_name, VAR_4, VAR_7);





 if ((VAR_3 & VAR_0) && (VAR_6 < 0))
  VAR_6 = 0;
 else if (VAR_6 < 0)
  FUNC_1(FUNC_0("invalid object type"));
 if (VAR_2->typep)
  *VAR_2->typep = VAR_6;





 VAR_5 = *VAR_1++ - '0';
 if (VAR_5 > 9)
  return -1;
 if (VAR_5) {
  for (;;) {
   unsigned long VAR_9 = *VAR_1 - '0';
   if (VAR_9 > 9)
    break;
   VAR_1++;
   VAR_5 = VAR_5 * 10 + VAR_9;
  }
 }

 if (VAR_2->sizep)
  *VAR_2->sizep = VAR_5;




 return *VAR_1 ? -1 : VAR_6;
}
