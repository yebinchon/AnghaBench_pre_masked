
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct poly1305_kat {int vector_name; } ;
typedef int hbyte ;


 int FUNC_0 (size_t,size_t,char*,...) ;
 int FUNC_1 (int,char*,int ) ;
 int FUNC_2 (char*,char const*,int) ;
 int FUNC_3 (char*,int ,int) ;
 int FUNC_4 (char*,char*,char*) ;
 size_t FUNC_5 (char const*) ;
 char* FUNC_6 (char const*,char*) ;

__attribute__((used)) static void
FUNC_7(const struct poly1305_kat *VAR_0, const char *VAR_1, void *VAR_2,
    size_t VAR_3)
{



 const char *VAR_4, *VAR_5;
 size_t VAR_6, VAR_7;
 char VAR_8[3], *VAR_9;
 int VAR_10;

 VAR_9 = VAR_2;
 FUNC_3(VAR_8, 0, sizeof(VAR_8));

 VAR_5 = VAR_1;
 VAR_7 = 0;
 while (1) {
  VAR_4 = FUNC_6(VAR_5, " :");
  if (VAR_4 == ((void*)0))
   VAR_6 = FUNC_5(VAR_5);
  else
   VAR_6 = VAR_4 - VAR_5;

  FUNC_0(VAR_6, 2,
      "invalid hex byte '%.*s' in vector %s", (int)VAR_6, VAR_5,
      VAR_0->vector_name);

  FUNC_2(VAR_8, VAR_5, 2);
  VAR_10 = FUNC_4(VAR_8, "%hhx", &VAR_9[VAR_7]);
  FUNC_0(VAR_10, 1,
      "invalid hex byte '%s' in vector %s", VAR_8,
      VAR_0->vector_name);

  VAR_7++;
  FUNC_1(VAR_7 <= VAR_3,
      "got longer than expected value at %s", VAR_0->vector_name);

  if (VAR_4 == ((void*)0))
   break;
  VAR_5 = VAR_4;
  while (*VAR_5 == ' ' || *VAR_5 == ':')
   VAR_5++;
  if (*VAR_5 == 0)
   break;
 }

 FUNC_0(VAR_7, VAR_3, "got short value at %s",
     VAR_0->vector_name);
}
