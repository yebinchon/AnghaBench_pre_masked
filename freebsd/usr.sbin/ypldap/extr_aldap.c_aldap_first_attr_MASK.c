
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_6__ TYPE_3__ ;
typedef struct TYPE_5__ TYPE_2__ ;
typedef struct TYPE_4__ TYPE_1__ ;


struct ber_element {int dummy; } ;
struct TYPE_4__ {TYPE_3__* attrs; int iter; } ;
struct TYPE_5__ {TYPE_1__ search; } ;
struct aldap_message {TYPE_2__ body; } ;
struct TYPE_6__ {int be_next; } ;


 char** FUNC_0 (struct ber_element*) ;
 scalar_t__ FUNC_1 (TYPE_3__*,char*,char**,struct ber_element**,struct ber_element**) ;
 char* FUNC_2 (char*) ;

int
FUNC_3(struct aldap_message *VAR_0, char **VAR_1, char ***VAR_2)
{
 struct ber_element *VAR_3, *VAR_4;
 char *VAR_5;
 char **VAR_6;

 if (VAR_0->body.search.attrs == ((void*)0))
  goto fail;

 if (FUNC_1(VAR_0->body.search.attrs, "{s(e)}e",
     &VAR_5, &VAR_3, &VAR_4) != 0)
  goto fail;

 VAR_0->body.search.iter = VAR_0->body.search.attrs->be_next;

 if ((VAR_6 = FUNC_0(VAR_3)) == ((void*)0))
  goto fail;

 (*VAR_2) = VAR_6;
 (*VAR_1) = FUNC_2(VAR_5);

 return (1);
fail:
 (*VAR_1) = ((void*)0);
 (*VAR_2) = ((void*)0);
 return (-1);
}
