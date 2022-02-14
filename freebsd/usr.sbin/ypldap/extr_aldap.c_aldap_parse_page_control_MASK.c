
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


struct ber_element {TYPE_1__* be_next; struct ber_element* be_sub; } ;
struct ber {int fd; int * br_wbuf; } ;
struct aldap_page_control {char* size; int cookie_len; int * cookie; } ;
struct TYPE_2__ {int be_len; } ;


 int FUNC_0 (struct ber*) ;
 int FUNC_1 (struct ber_element*) ;
 struct ber_element* FUNC_2 (struct ber*,int *) ;
 int FUNC_3 (struct ber_element*,char*,char**,char**) ;
 int FUNC_4 (struct ber*,char*,int) ;
 int FUNC_5 (struct aldap_page_control*) ;
 void* FUNC_6 (int) ;
 int FUNC_7 (int *,char*,int) ;

struct aldap_page_control *
FUNC_8(struct ber_element *VAR_0, size_t VAR_1)
{
 char *VAR_2, *VAR_3;
 char *VAR_4;
 struct ber VAR_5;
 struct ber_element *VAR_6;
 struct aldap_page_control *VAR_7;

 VAR_5.br_wbuf = ((void*)0);
 VAR_5.fd = -1;
 FUNC_3(VAR_0, "ss", &VAR_2, &VAR_4);
 FUNC_4(&VAR_5, VAR_4, VAR_0->be_next->be_len);
 VAR_6 = FUNC_2(&VAR_5, ((void*)0));

 if ((VAR_7 = FUNC_6(sizeof(struct aldap_page_control))) == ((void*)0)) {
  if (VAR_6 != ((void*)0))
   FUNC_1(VAR_6);
  FUNC_0(&VAR_5);
  return ((void*)0);
 }

 FUNC_3(VAR_6->be_sub, "is", &VAR_7->size, &VAR_3);
 VAR_7->cookie_len = VAR_6->be_sub->be_next->be_len;

 if ((VAR_7->cookie = FUNC_6(VAR_7->cookie_len)) == ((void*)0)) {
  if (VAR_6 != ((void*)0))
   FUNC_1(VAR_6);
  FUNC_0(&VAR_5);
  FUNC_5(VAR_7);
  return ((void*)0);
 }
 FUNC_7(VAR_7->cookie, VAR_3, VAR_7->cookie_len);

 FUNC_1(VAR_6);
 FUNC_0(&VAR_5);
 return VAR_7;
}
