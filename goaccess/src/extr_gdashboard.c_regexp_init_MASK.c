
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


typedef int regex_t ;
typedef int buf ;
struct TYPE_2__ {scalar_t__ icase; } ;


 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int VAR_3 ;
 int FUNC_0 (int ,char*,char*,int,int ,int,int ) ;
 TYPE_1__ VAR_4 ;
 int FUNC_1 (int ,int,int) ;
 int FUNC_2 () ;
 int FUNC_3 (int *,char const*,int) ;
 int FUNC_4 (int,int *,char*,int) ;
 int VAR_5 ;

__attribute__((used)) static int
FUNC_5 (regex_t * VAR_6, const char *VAR_7)
{
  int VAR_8, VAR_9, VAR_10;
  char VAR_11[VAR_0];

  FUNC_1 (VAR_5, VAR_8, VAR_9);
  VAR_10 = FUNC_3 (VAR_6, VAR_7, VAR_1 | (VAR_4.icase ? VAR_2 : 0));

  if (VAR_10 != 0) {
    FUNC_4 (VAR_10, VAR_6, VAR_11, sizeof (VAR_11));
    FUNC_0 (VAR_5, VAR_11, "%s", VAR_8 - 1, 0, VAR_9, VAR_3);
    FUNC_2 ();
    return 1;
  }
  return 0;
}
