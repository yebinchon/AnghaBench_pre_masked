
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_5__ TYPE_3__ ;
typedef struct TYPE_4__ TYPE_1__ ;


struct TYPE_5__ {int enable_html_resolver; } ;
struct TYPE_4__ {char* datakey; char* datatype; char* cname; int lbl; } ;
typedef TYPE_1__ GDefMetric ;
typedef int FILE ;


 int VAR_0 ;
 TYPE_3__ VAR_1 ;
 int FUNC_0 (int *,TYPE_1__,int,int ) ;

__attribute__((used)) static void
FUNC_1 (FILE * VAR_2, int VAR_3)
{
  GDefMetric VAR_4 = {
    .datakey = "hostname",
    .lbl = VAR_0,
    .datatype = "string",
    .cname = "light",
  };

  if (!VAR_1.enable_html_resolver)
    return;

  FUNC_0 (VAR_2, VAR_4, VAR_3, 0);
}
