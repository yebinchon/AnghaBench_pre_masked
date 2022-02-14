
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


typedef int uint64_t ;
struct TYPE_2__ {scalar_t__ json_pretty_print; int serve_usecs; } ;
typedef int GModule ;
typedef int GJSON ;


 TYPE_1__ VAR_0 ;
 int FUNC_0 (int ,char*) ;
 int FUNC_1 (int *,int,int ) ;
 int FUNC_2 (int *,char*,int) ;
 int FUNC_3 (int *,char*,int,int,int) ;

__attribute__((used)) static void
FUNC_4 (GJSON * VAR_1, GModule VAR_2, int VAR_3)
{
  int VAR_4 = 0;
  uint64_t VAR_5 = 0, VAR_6 = 0, VAR_7 = 0;

  if (!VAR_0.serve_usecs)
    return;


  if (VAR_0.json_pretty_print)
    VAR_4 = VAR_3 + 1;

  VAR_7 = FUNC_0 (VAR_2, "cumts");
  VAR_6 = FUNC_0 (VAR_2, "hits");
  if (VAR_6 > 0)
    VAR_5 = VAR_7 / VAR_6;

  FUNC_2 (VAR_1, "avgts", VAR_3);
  FUNC_3 (VAR_1, "avg", VAR_5, VAR_4, 1);
  FUNC_1 (VAR_1, VAR_3, 0);
}
