
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_3__ TYPE_1__ ;


struct TYPE_3__ {char* cname; char* cwidth; char* datakey; char* datatype; char* metakey; char* metalbl; char* metatype; int lbl; } ;
typedef int GModule ;
typedef TYPE_1__ GDefMetric ;
typedef int FILE ;


 int VAR_0 ;
 int VAR_1 ;
 int FUNC_0 (int *,TYPE_1__,int,int) ;

__attribute__((used)) static void
FUNC_1 (FILE * VAR_2, GModule VAR_3, int VAR_4)
{
  GDefMetric VAR_5 = {
    .cname = "trunc",
    .cwidth = "100%",
    .datakey = "data",
    .datatype = VAR_3 == VAR_1 ? "date" : "string",
    .lbl = VAR_0,
    .metakey = "unique",
    .metalbl = "Total",
    .metatype = "numeric",
  };

  FUNC_0 (VAR_2, VAR_5, VAR_4, 1);
}
