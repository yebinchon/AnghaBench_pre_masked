
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int buf ;
typedef int FILE ;


 int VAR_0 ;
 int VAR_1 ;
 scalar_t__ FUNC_0 (unsigned char*,char*) ;
 size_t FUNC_1 (unsigned char*,int,size_t,int *) ;
 int FUNC_2 (int *,long const,int ) ;
 scalar_t__ FUNC_3 (unsigned char) ;
 char* VAR_2 ;
 int VAR_3 ;
 int VAR_4 ;
 size_t FUNC_4 (unsigned char*,char*) ;
 int FUNC_5 (char*,char const*,int) ;
 int FUNC_6 (char*,unsigned char*,int) ;

__attribute__((used)) static char *
FUNC_7(const long *VAR_5, int VAR_6, FILE *VAR_7)
{
 unsigned char VAR_8[VAR_0];
 size_t VAR_9;
 int VAR_10 = VAR_3;
 const char *VAR_11 = ((void*)0);

 VAR_3 = VAR_6;
 while (VAR_6 > VAR_10) {
  FUNC_2(VAR_7, VAR_5[VAR_6 - 1], VAR_1);
  VAR_9 = VAR_5[VAR_6] - VAR_5[VAR_6 - 1];
  if (VAR_9 >= sizeof(VAR_8))
   VAR_9 = sizeof(VAR_8) - 1;
  VAR_9 = FUNC_1(VAR_8, 1, VAR_9, VAR_7);
  if (VAR_9 > 0) {
   VAR_8[VAR_9] = '\0';
   VAR_8[FUNC_4(VAR_8, "\n")] = '\0';
   if (FUNC_3(VAR_8[0]) || VAR_8[0] == '_' || VAR_8[0] == '$') {
    if (FUNC_0(VAR_8, "private:")) {
     if (!VAR_11)
      VAR_11 = " (private)";
    } else if (FUNC_0(VAR_8, "protected:")) {
     if (!VAR_11)
      VAR_11 = " (protected)";
    } else if (FUNC_0(VAR_8, "public:")) {
     if (!VAR_11)
      VAR_11 = " (public)";
    } else {
     FUNC_6(VAR_2, VAR_8, sizeof VAR_2);
     if (VAR_11)
      FUNC_5(VAR_2, VAR_11,
          sizeof VAR_2);
     VAR_4 = VAR_6;
     return VAR_2;
    }
   }
  }
  VAR_6--;
 }
 return VAR_4 > 0 ? VAR_2 : ((void*)0);
}
