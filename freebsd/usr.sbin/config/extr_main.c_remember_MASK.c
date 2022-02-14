
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct hdr_list {char* h_name; struct hdr_list* h_next; } ;


 int VAR_0 ;
 struct hdr_list* FUNC_0 (int,int) ;
 scalar_t__ FUNC_1 (char*,char*) ;
 int FUNC_2 (int ,char*) ;
 int FUNC_3 (char*) ;
 struct hdr_list* VAR_1 ;
 char* FUNC_4 (char const*) ;
 scalar_t__ FUNC_5 (char*,char) ;
 scalar_t__ FUNC_6 (char*,char*,int) ;
 char* FUNC_7 (char const*,char) ;

void
FUNC_8(const char *VAR_2)
{
 char *VAR_3;
 struct hdr_list *VAR_4;

 if ((VAR_3 = FUNC_7(VAR_2, '/')) != ((void*)0))
  VAR_3 = FUNC_4(VAR_3 + 1);
 else
  VAR_3 = FUNC_4(VAR_2);

 if (FUNC_5(VAR_3, '_') && FUNC_6(VAR_3, "opt_", 4) != 0) {
  FUNC_3(VAR_3);
  return;
 }
 for (VAR_4 = VAR_1; VAR_4 != ((void*)0); VAR_4 = VAR_4->h_next) {
  if (FUNC_1(VAR_3, VAR_4->h_name)) {
   FUNC_3(VAR_3);
   return;
  }
 }
 VAR_4 = FUNC_0(1, sizeof(*VAR_4));
 if (VAR_4 == ((void*)0))
  FUNC_2(VAR_0, "calloc");
 VAR_4->h_name = VAR_3;
 VAR_4->h_next = VAR_1;
 VAR_1 = VAR_4;
}
