
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_5__ TYPE_2__ ;
typedef struct TYPE_4__ TYPE_1__ ;


struct TYPE_5__ {TYPE_1__* acc; } ;
typedef TYPE_2__ accentmap_t ;
struct TYPE_4__ {scalar_t__ accchar; int** map; } ;


 scalar_t__ FUNC_0 (void*) ;
 scalar_t__ VAR_0 ;
 scalar_t__ VAR_1 ;
 int VAR_2 ;


 int FUNC_1 (int,char*) ;
 void* VAR_3 ;
 void* VAR_4 ;
 char VAR_5 ;
 int FUNC_2 (char*) ;
 char FUNC_3 () ;

__attribute__((used)) static int
FUNC_4(accentmap_t *VAR_6)
{
 int VAR_7;
 int VAR_8, VAR_9;
 int VAR_10;

 if (FUNC_0(VAR_4) < VAR_0 || FUNC_0(VAR_4) > VAR_1)

  return -1;
 VAR_7 = VAR_4;
 if (VAR_6->acc[VAR_7].accchar != 0) {

  FUNC_1(1, "duplicated accent key definition");
 }

 switch ((VAR_5 = FUNC_3())) {
 case 129:
  VAR_6->acc[VAR_7].accchar = VAR_3;
  break;
 case 128:
  VAR_6->acc[VAR_7].accchar = VAR_4;
  break;
 default:
  return -1;
 }

 for (VAR_10 = 0; (VAR_5 = FUNC_3()) == '(';) {
  switch ((VAR_5 = FUNC_3())) {
  case 129:
   VAR_8 = VAR_3;
   break;
  case 128:
   VAR_8 = VAR_4;
   break;
  default:
   return -1;
  }
  switch ((VAR_5 = FUNC_3())) {
  case 129:
   VAR_9 = VAR_3;
   break;
  case 128:
   VAR_9 = VAR_4;
   break;
  default:
   return -1;
  }
  if ((VAR_5 = FUNC_3()) != ')')
   return -1;
  if (VAR_10 >= VAR_2) {
   FUNC_2("too many accented characters, ignored");
   continue;
  }
  VAR_6->acc[VAR_7].map[VAR_10][0] = VAR_8;
  VAR_6->acc[VAR_7].map[VAR_10][1] = VAR_9;
  ++VAR_10;
 }
 return (VAR_7 + 1);
}
