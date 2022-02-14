
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct show_data {char const* pattern; int format; } ;


 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int FUNC_0 (char*) ;
 int FUNC_1 (int ,char const*) ;
 int FUNC_2 (int ,int ,void*) ;
 int VAR_3 ;
 int FUNC_3 (char const*,char*) ;
 int VAR_4 ;

__attribute__((used)) static int FUNC_4(const char *VAR_5, const char *VAR_6)
{
 struct show_data VAR_7;

 if (VAR_5 == ((void*)0))
  VAR_5 = "*";
 VAR_7.pattern = VAR_5;

 if (VAR_6 == ((void*)0) || *VAR_6 == '\0' || !FUNC_3(VAR_6, "short"))
  VAR_7.format = VAR_2;
 else if (!FUNC_3(VAR_6, "medium"))
  VAR_7.format = VAR_1;
 else if (!FUNC_3(VAR_6, "long"))
  VAR_7.format = VAR_0;




 else
  return FUNC_1(FUNC_0("invalid replace format '%s'\n"
          "valid formats are 'short', 'medium' and 'long'"),
        VAR_6);

 FUNC_2(VAR_4, VAR_3, (void *)&VAR_7);

 return 0;
}
