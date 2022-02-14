
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct ber_oid {scalar_t__ bo_n; int * bo_id; } ;
typedef int str ;


 scalar_t__ VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int FUNC_0 (struct ber_oid*,int) ;
 int FUNC_1 (char*,char const*,int) ;
 char* FUNC_2 (char*,char*) ;
 int FUNC_3 (char*,int ,int ,char const**) ;

int
FUNC_4(const char *VAR_3, struct ber_oid *VAR_4)
{
 char *VAR_5, *VAR_6, VAR_7[VAR_1];
 const char *VAR_8;

 if (FUNC_1(VAR_7, VAR_3, sizeof(VAR_7)) >= sizeof(VAR_7))
  return (-1);
 FUNC_0(VAR_4, sizeof(*VAR_4));


 for (VAR_6 = VAR_5 = VAR_7; VAR_6 != ((void*)0); VAR_5 = VAR_6) {
  if ((VAR_6 = FUNC_2(VAR_6, "._-")) != ((void*)0))
   *VAR_6++ = '\0';
  VAR_4->bo_id[VAR_4->bo_n++] = FUNC_3(VAR_5, 0, VAR_2, &VAR_8);
  if (VAR_8 || VAR_4->bo_n > VAR_0)
   return (-1);
 }

 return (0);
}
