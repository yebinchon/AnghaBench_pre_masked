
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct attr_state {int attr; int setto; } ;


 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int FUNC_0 (char const*,int) ;
 int VAR_3 ;
 int FUNC_1 (char const*,int) ;
 int FUNC_2 (char const*,int,char const*,int) ;
 char* FUNC_3 (char const*,char) ;
 int FUNC_4 (char const*,int ) ;
 int FUNC_5 (char const*,int ) ;
 int FUNC_6 (char const*,int) ;

__attribute__((used)) static const char *FUNC_7(const char *VAR_4, int VAR_5, const char *VAR_6,
         struct attr_state *VAR_7)
{
 const char *VAR_8, *VAR_9;
 int VAR_10;

 VAR_8 = VAR_6 + FUNC_4(VAR_6, VAR_3);
 VAR_9 = FUNC_3(VAR_6, '=');
 if (VAR_9 && VAR_8 < VAR_9)
  VAR_9 = ((void*)0);
 if (VAR_9)
  VAR_10 = VAR_9 - VAR_6;
 else
  VAR_10 = VAR_8 - VAR_6;
 if (!VAR_7) {
  if (*VAR_6 == '-' || *VAR_6 == '!') {
   VAR_6++;
   VAR_10--;
  }
  if (!FUNC_0(VAR_6, VAR_10)) {
   FUNC_2(VAR_6, VAR_10, VAR_4, VAR_5);
   return ((void*)0);
  }
 } else {






  if (*VAR_6 == '-' || *VAR_6 == '!') {
   VAR_7->setto = (*VAR_6 == '-') ? VAR_0 : VAR_2;
   VAR_6++;
   VAR_10--;
  }
  else if (!VAR_9)
   VAR_7->setto = VAR_1;
  else {
   VAR_7->setto = FUNC_6(VAR_9 + 1, VAR_8 - VAR_9 - 1);
  }
  VAR_7->attr = FUNC_1(VAR_6, VAR_10);
 }
 return VAR_8 + FUNC_5(VAR_8, VAR_3);
}
