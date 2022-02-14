
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct repository {int dummy; } ;
struct object_id {int dummy; } ;


 unsigned int VAR_0 ;
 unsigned int VAR_1 ;
 int FUNC_0 (struct repository*,char const*,int,struct object_id*,unsigned int) ;
 int FUNC_1 (char) ;

__attribute__((used)) static int FUNC_2(struct repository *VAR_2,
        const char *VAR_3, int VAR_4,
        struct object_id *VAR_5)
{
 const char *VAR_6;
 unsigned VAR_7 = VAR_1 | VAR_0;

 for (VAR_6 = VAR_3 + VAR_4 - 1; VAR_3 + 2 <= VAR_6; VAR_6--) {
  char VAR_8 = *VAR_6;
  if (!FUNC_1(VAR_8)) {



   if (VAR_8 == 'g' && VAR_6[-1] == '-') {
    VAR_6++;
    VAR_4 -= VAR_6 - VAR_3;
    return FUNC_0(VAR_2,
           VAR_6, VAR_4, VAR_5, VAR_7);
   }
  }
 }
 return -1;
}
