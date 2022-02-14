
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


typedef int uint32_t ;
struct TYPE_2__ {char type; int size; } ;


 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int FUNC_0 (int) ;
 int VAR_3 ;
 int FUNC_1 (int ,char*) ;
 scalar_t__ FUNC_2 (int,int) ;
 int FUNC_3 (int,char**,char*) ;
 scalar_t__ VAR_4 ;
 int VAR_5 ;
 int VAR_6 ;
 scalar_t__ VAR_7 ;
 TYPE_1__* VAR_8 ;
 scalar_t__ VAR_9 ;
 int VAR_10 ;
 int FUNC_4 (int ,int *,int) ;
 int FUNC_5 (int ) ;
 int FUNC_6 (char*) ;
 int VAR_11 ;

int FUNC_7 (int VAR_12, char **VAR_13)
{
 char VAR_14 = 0x83;
 int VAR_15;
 int VAR_16 = 0;
 uint32_t VAR_17 = 0x5452574F;

 while ((VAR_15 = FUNC_3(VAR_12, VAR_13, "h:s:p:a:t:o:vl:S:")) != -1) {
  switch (VAR_15) {
  case 'o':
   VAR_3 = VAR_6;
   break;
  case 'v':
   VAR_11++;
   break;
  case 'h':
   VAR_4 = (int)FUNC_4(VAR_6, ((void*)0), 0);
   break;
  case 's':
   VAR_9 = (int)FUNC_4(VAR_6, ((void*)0), 0);
   break;
  case 'p':
   if (VAR_16 > 3) {
    FUNC_1(VAR_10, "Too many partitions\n");
    FUNC_0(VAR_0);
   }
   VAR_8[VAR_16].size = FUNC_5(VAR_6);
   VAR_8[VAR_16++].type = VAR_14;
   break;
  case 't':
   VAR_14 = (char)FUNC_4(VAR_6, ((void*)0), 16);
   break;
  case 'a':
   VAR_2 = (int)FUNC_4(VAR_6, ((void*)0), 0);
   if ((VAR_2 < 0) || (VAR_2 > 4))
    VAR_2 = 0;
   break;
  case 'l':
   VAR_5 = (int)FUNC_4(VAR_6, ((void*)0), 0) * 2;
   break;
  case 'S':
   VAR_17 = FUNC_4(VAR_6, ((void*)0), 0);
   break;
  case '?':
  default:
   FUNC_6(VAR_13[0]);
  }
 }
 VAR_12 -= VAR_7;
 if (VAR_12 || (VAR_4 <= 0) || (VAR_9 <= 0) || !VAR_3)
  FUNC_6(VAR_13[0]);

 return FUNC_2(VAR_17, VAR_16) ? VAR_0 : VAR_1;
}
