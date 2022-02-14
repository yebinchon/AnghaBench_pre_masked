
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


typedef int errorbuf ;
struct TYPE_2__ {int name; int expr; int type; } ;


 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int VAR_3 ;
 int FUNC_0 (int ,char*,int ,char const*,...) ;
 int VAR_4 ;
 int VAR_5 ;
 int VAR_6 ;
 int VAR_7 ;
 TYPE_1__* VAR_8 ;
 int FUNC_1 (int *,char const*,int) ;
 int FUNC_2 (int,int *,char*,int) ;
 int FUNC_3 (int *) ;

__attribute__((used)) static void
FUNC_4(const char *VAR_9, int VAR_10)
{
 int VAR_11;
 char VAR_12[VAR_1];

 switch (VAR_9[0]) {
 case 'a':
  VAR_8[VAR_10].type = VAR_4;
  break;
 case 'n':
  VAR_8[VAR_10].type = VAR_5;
  break;
 case 't':
  VAR_8[VAR_10].type = VAR_6;
  break;
 case 'p':

  if (VAR_8[VAR_10].type == VAR_7)
   FUNC_3(&VAR_8[VAR_10].expr);
  else
   VAR_8[VAR_10].type = VAR_7;


  if ((VAR_11 = FUNC_1(&VAR_8[VAR_10].expr,
      &VAR_9[1], VAR_2|VAR_3)) != 0) {
   (void)FUNC_2(VAR_11,
       &VAR_8[VAR_10].expr,
       VAR_12, sizeof (VAR_12));
   FUNC_0(VAR_0,
       "%s expr: %s -- %s",
       VAR_8[VAR_10].name, VAR_12,
       &VAR_9[1]);
  }
  break;
 default:
  FUNC_0(VAR_0,
      "illegal %s line numbering type -- %s",
      VAR_8[VAR_10].name, VAR_9);
 }
}
