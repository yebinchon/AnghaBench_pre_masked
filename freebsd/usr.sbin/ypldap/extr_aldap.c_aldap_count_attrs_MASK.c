
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


 scalar_t__ FUNC_0 (struct ber_element*) ;

int
FUNC_1(struct aldap_message *VAR_0)
{
 int VAR_1;
 struct ber_element *VAR_2;

 if (VAR_0->body.search.attrs == ((void*)0))
  return (-1);

 for (VAR_1 = 0, VAR_2 = VAR_0->body.search.attrs;
     VAR_2 != ((void*)0) && FUNC_0(VAR_2) != 0;
     VAR_1++, VAR_2 = VAR_2->be_next)
  ;

 return VAR_1;
}
