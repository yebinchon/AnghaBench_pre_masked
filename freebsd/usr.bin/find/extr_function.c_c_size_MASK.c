
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_10__ TYPE_2__ ;
typedef struct TYPE_9__ TYPE_1__ ;


typedef int off_t ;
struct TYPE_10__ {int name; } ;
struct TYPE_9__ {int o_data; } ;
typedef TYPE_1__ PLAN ;
typedef TYPE_2__ OPTION ;


 int VAR_0 ;
 int VAR_1 ;
 scalar_t__ VAR_2 ;
 int FUNC_0 (int,char*,int ,char*) ;
 int FUNC_1 (TYPE_1__*,int ,char*,char*) ;
 int VAR_3 ;
 char* FUNC_2 (TYPE_2__*,char***) ;
 TYPE_1__* FUNC_3 (TYPE_2__*) ;

PLAN *
FUNC_4(OPTION *VAR_4, char ***VAR_5)
{
 char *VAR_6;
 PLAN *VAR_7;
 char VAR_8;
 off_t VAR_9;

 VAR_6 = FUNC_2(VAR_4, VAR_5);
 VAR_3 &= ~VAR_0;

 VAR_7 = FUNC_3(VAR_4);
 VAR_8 = 'c';
 VAR_7->o_data = FUNC_1(VAR_7, VAR_4->name, VAR_6, &VAR_8);
 if (VAR_8 != '\0') {
  VAR_2 = 0;

  switch (VAR_8) {
  case 'c':
   VAR_9 = 0x1LL;
   break;
  case 'k':
   VAR_9 = 0x400LL;
   break;
  case 'M':
   VAR_9 = 0x100000LL;
   break;
  case 'G':
   VAR_9 = 0x40000000LL;
   break;
  case 'T':
   VAR_9 = 0x10000000000LL;
   break;
  case 'P':
   VAR_9 = 0x4000000000000LL;
   break;
  default:
   FUNC_0(1, "%s: %s: illegal trailing character",
    VAR_4->name, VAR_6);
   break;
  }
  if (VAR_7->o_data > VAR_1 / VAR_9)
   FUNC_0(1, "%s: %s: value too large",
    VAR_4->name, VAR_6);
  VAR_7->o_data *= VAR_9;
 }
 return VAR_7;
}
