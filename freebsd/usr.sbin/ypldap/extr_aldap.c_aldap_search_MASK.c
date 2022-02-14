
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct ber_element {int dummy; } ;
struct aldap_page_control {int dummy; } ;
struct aldap {int msgid; void* err; int ber; } ;
typedef enum scope { ____Placeholder_scope } scope ;


 void* VAR_0 ;
 void* VAR_1 ;
 int VAR_2 ;
 int FUNC_0 (char*,struct ber_element*) ;
 scalar_t__ VAR_3 ;
 scalar_t__ VAR_4 ;
 int FUNC_1 (struct ber_element*,int,struct aldap_page_control*) ;
 struct ber_element* FUNC_2 (struct ber_element*) ;
 struct ber_element* FUNC_3 (struct ber_element*,char*) ;
 int FUNC_4 (struct ber_element*) ;
 struct ber_element* FUNC_5 (struct ber_element*,char*,...) ;
 int FUNC_6 (int *,struct ber_element*) ;
 struct ber_element* FUNC_7 (struct ber_element*,char*) ;

int
FUNC_8(struct aldap *VAR_5, char *VAR_6, enum scope VAR_7, char *VAR_8,
    char **VAR_9, int VAR_10, int VAR_11, int VAR_12,
    struct aldap_page_control *VAR_13)
{
 struct ber_element *VAR_14 = ((void*)0), *VAR_15, *VAR_16;
 int VAR_17, VAR_18;

 if ((VAR_14 = FUNC_2(((void*)0))) == ((void*)0))
  goto fail;

 VAR_15 = FUNC_5(VAR_14, "d{t", ++VAR_5->msgid, VAR_2,
     (unsigned long) VAR_4);
 if (VAR_15 == ((void*)0)) {
  VAR_5->err = VAR_0;
  goto fail;
 }

 VAR_16 = VAR_15;
 VAR_15 = FUNC_5(VAR_15, "sEEddb", VAR_6, (long long)VAR_7,
                          (long long)VAR_3, VAR_11,
     VAR_12, VAR_10);
 if (VAR_15 == ((void*)0)) {
  VAR_5->err = VAR_0;
  goto fail;
 }

 if ((VAR_15 = FUNC_7(VAR_15, VAR_8)) == ((void*)0)) {
  VAR_5->err = VAR_1;
  goto fail;
 }

 if ((VAR_15 = FUNC_2(VAR_15)) == ((void*)0))
  goto fail;
 if (VAR_9 != ((void*)0))
  for (VAR_17 = 0; VAR_9[VAR_17] != ((void*)0); VAR_17++) {
   if ((VAR_15 = FUNC_3(VAR_15, VAR_9[VAR_17])) == ((void*)0))
    goto fail;
  }

 FUNC_1(VAR_16, 100, VAR_13);

 FUNC_0("aldap_search", VAR_14);

 VAR_18 = FUNC_6(&VAR_5->ber, VAR_14);
 FUNC_4(VAR_14);
 VAR_14 = ((void*)0);
 if (VAR_18 == -1) {
  VAR_5->err = VAR_0;
  goto fail;
 }

 return (VAR_5->msgid);

fail:
 if (VAR_14 != ((void*)0))
  FUNC_4(VAR_14);

 return (-1);
}
