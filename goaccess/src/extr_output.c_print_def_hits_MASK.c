
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_3__ TYPE_1__ ;


struct TYPE_3__ {char* datakey; char* datatype; char* metakey; char* cwidth; int lbl; } ;
typedef TYPE_1__ GDefMetric ;
typedef int FILE ;


 int VAR_0 ;
 int FUNC_0 (int *,TYPE_1__,int,int ) ;

__attribute__((used)) static void
FUNC_1 (FILE * VAR_1, int VAR_2)
{
  GDefMetric VAR_3 = {
    .datakey = "hits",
    .lbl = VAR_0,
    .datatype = "numeric",
    .metakey = "count",
    .cwidth = "12%",
  };
  FUNC_0 (VAR_1, VAR_3, VAR_2, 0);
}
