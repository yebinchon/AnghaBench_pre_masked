
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


struct dnslabel_table {scalar_t__ n_labels; TYPE_1__* labels; } ;
typedef int off_t ;
struct TYPE_2__ {char* v; int pos; } ;


 scalar_t__ VAR_0 ;
 char* FUNC_0 (char const*) ;

__attribute__((used)) static int
FUNC_1(struct dnslabel_table *VAR_1, const char *VAR_2, off_t VAR_3)
{
 char *VAR_4;
 int VAR_5;
 if (VAR_1->n_labels == VAR_0)
  return (-1);
 VAR_4 = FUNC_0(VAR_2);
 if (VAR_4 == ((void*)0))
  return (-1);
 VAR_5 = VAR_1->n_labels++;
 VAR_1->labels[VAR_5].v = VAR_4;
 VAR_1->labels[VAR_5].pos = VAR_3;

 return (0);
}
