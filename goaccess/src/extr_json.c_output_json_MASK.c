
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_6__ TYPE_4__ ;
typedef struct TYPE_5__ TYPE_1__ ;


struct TYPE_6__ {scalar_t__ json_pretty_print; } ;
struct TYPE_5__ {scalar_t__ size; char* buf; } ;
typedef int GLog ;
typedef TYPE_1__ GJSON ;
typedef int GHolder ;
typedef int FILE ;


 int FUNC_0 (char*,int ) ;
 TYPE_4__ VAR_0 ;
 int VAR_1 ;
 int FUNC_1 (int *) ;
 int * FUNC_2 (char const*,char*) ;
 int FUNC_3 (int *,char*,char*) ;
 int FUNC_4 (TYPE_1__*) ;
 TYPE_1__* FUNC_5 (int *,int *) ;
 int VAR_2 ;
 int * VAR_3 ;
 int FUNC_6 (int ) ;

void
FUNC_7 (GLog * VAR_4, GHolder * VAR_5, const char *VAR_6)
{
  GJSON *VAR_7 = ((void*)0);
  FILE *VAR_8;

  if (VAR_6 != ((void*)0))
    VAR_8 = FUNC_2 (VAR_6, "w");
  else
    VAR_8 = VAR_3;

  if (!VAR_8)
    FUNC_0 ("Unable to open JSON file: %s.", FUNC_6 (VAR_1));


  if (VAR_0.json_pretty_print)
    VAR_2 = 1;


  if ((VAR_7 = FUNC_5 (VAR_4, VAR_5)) && VAR_7->size > 0) {
    FUNC_3 (VAR_8, "%s", VAR_7->buf);
    FUNC_4 (VAR_7);
  }

  FUNC_1 (VAR_8);
}
