
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_8__ TYPE_3__ ;
typedef struct TYPE_7__ TYPE_2__ ;
typedef struct TYPE_6__ TYPE_1__ ;


struct ber_element {int dummy; } ;
struct TYPE_6__ {TYPE_3__* iter; } ;
struct TYPE_7__ {TYPE_1__ search; } ;
struct aldap_message {TYPE_2__ body; } ;
struct TYPE_8__ {struct TYPE_8__* be_next; } ;


 int FUNC_0 (char*,TYPE_3__*) ;
 char** FUNC_1 (struct ber_element*) ;
 scalar_t__ FUNC_2 (TYPE_3__*) ;
 scalar_t__ FUNC_3 (TYPE_3__*,char*,char**,struct ber_element**,struct ber_element**) ;
 char* FUNC_4 (char*) ;

int
FUNC_5(struct aldap_message *VAR_0, char **VAR_1, char ***VAR_2)
{
 struct ber_element *VAR_3, *VAR_4;
 char *VAR_5;
 char **VAR_6;

 if (VAR_0->body.search.iter == ((void*)0))
  goto notfound;

 FUNC_0("attr", VAR_0->body.search.iter);

 if (FUNC_2(VAR_0->body.search.iter) == 0)
  goto notfound;

 if (FUNC_3(VAR_0->body.search.iter, "{s(e)}e", &VAR_5, &VAR_3, &VAR_4)
     != 0)
  goto fail;

 VAR_0->body.search.iter = VAR_0->body.search.iter->be_next;

 if ((VAR_6 = FUNC_1(VAR_3)) == ((void*)0))
  goto fail;

 (*VAR_2) = VAR_6;
 (*VAR_1) = FUNC_4(VAR_5);

 return (1);
fail:
notfound:
 (*VAR_1) = ((void*)0);
 (*VAR_2) = ((void*)0);
 return (-1);
}
