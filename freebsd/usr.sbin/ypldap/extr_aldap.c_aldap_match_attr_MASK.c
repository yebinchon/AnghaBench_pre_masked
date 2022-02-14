
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_4__ TYPE_2__ ;
typedef struct TYPE_3__ TYPE_1__ ;


struct ber_element {struct ber_element* be_next; } ;
struct TYPE_3__ {struct ber_element* attrs; } ;
struct TYPE_4__ {TYPE_1__ search; } ;
struct aldap_message {TYPE_2__ body; } ;


 int FUNC_0 (char*,struct ber_element*) ;
 char** FUNC_1 (struct ber_element*) ;
 scalar_t__ FUNC_2 (struct ber_element*) ;
 scalar_t__ FUNC_3 (struct ber_element*,char*,char**,struct ber_element**) ;
 scalar_t__ FUNC_4 (char*,char*) ;

int
FUNC_5(struct aldap_message *VAR_0, char *VAR_1, char ***VAR_2)
{
 struct ber_element *VAR_3, *VAR_4;
 char *VAR_5 = ((void*)0);
 char **VAR_6;

 if (VAR_0->body.search.attrs == ((void*)0))
  goto fail;

 FUNC_0("attr", VAR_0->body.search.attrs);

 for (VAR_3 = VAR_0->body.search.attrs;;) {
  if (VAR_3 == ((void*)0))
   goto notfound;
  if (FUNC_2(VAR_3) == 0)
   goto notfound;
  if (FUNC_3(VAR_3, "{s(e", &VAR_5, &VAR_4) != 0)
   goto fail;
  if (FUNC_4(VAR_5, VAR_1) == 0)
   goto attrfound;
  VAR_3 = VAR_3->be_next;
 }

attrfound:
 if ((VAR_6 = FUNC_1(VAR_4)) == ((void*)0))
  goto fail;

 (*VAR_2) = VAR_6;

 return (1);
fail:
notfound:
 (*VAR_2) = ((void*)0);
 return (-1);
}
