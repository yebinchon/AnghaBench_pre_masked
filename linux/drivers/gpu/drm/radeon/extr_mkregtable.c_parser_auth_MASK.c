
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_3__ TYPE_1__ ;


struct table {unsigned int offset_max; int gpu_prefix; } ;
struct offset {int dummy; } ;
struct TYPE_3__ {size_t rm_eo; size_t rm_so; } ;
typedef TYPE_1__ regmatch_t ;
typedef int regex_t ;
typedef int FILE ;


 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int VAR_3 ;
 int FUNC_0 (int *) ;
 int * FUNC_1 (char*,int,int *) ;
 int * FUNC_2 (char const*,char*) ;
 int FUNC_3 (int ,char*,...) ;
 int FUNC_4 (int *,int ,int ) ;
 size_t FUNC_5 (int *) ;
 int VAR_4 ;
 struct offset* FUNC_6 (unsigned int) ;
 scalar_t__ FUNC_7 (int *,char*,int ) ;
 int FUNC_8 (int *,char*,int,TYPE_1__*,int ) ;
 int FUNC_9 (char*,char*,int ,char*) ;
 int VAR_5 ;
 int FUNC_10 (char*) ;
 void* FUNC_11 (char*,int *,int) ;
 int FUNC_12 (struct table*) ;
 int FUNC_13 (struct table*,struct offset*) ;

__attribute__((used)) static int FUNC_14(struct table *VAR_6, const char *VAR_7)
{
 FILE *VAR_8;
 regex_t VAR_9;
 regmatch_t VAR_10[4];
 char VAR_11[1024];
 size_t VAR_12;
 int VAR_13;
 int VAR_14 = 0;
 int VAR_15;
 unsigned VAR_16;
 struct offset *VAR_17;
 char VAR_18[10];
 int VAR_19;

 if (FUNC_7
     (&VAR_9, "(0x[0-9a-fA-F]*) *([_a-zA-Z0-9]*)", VAR_0)) {
  FUNC_3(VAR_5, "Failed to compile regular expression\n");
  return -1;
 }
 VAR_8 = FUNC_2(VAR_7, "r");
 if (VAR_8 == ((void*)0)) {
  FUNC_3(VAR_5, "Failed to open: %s\n", VAR_7);
  return -1;
 }
 FUNC_4(VAR_8, 0, VAR_2);
 VAR_12 = FUNC_5(VAR_8);
 FUNC_4(VAR_8, 0, VAR_3);


 if (FUNC_1(VAR_11, 1024, VAR_8) == ((void*)0)) {
  FUNC_0(VAR_8);
  return -1;
 }



 FUNC_9(VAR_11, "%9s %9s", VAR_4, VAR_18);
 VAR_6->gpu_prefix = VAR_4;
 VAR_19 = FUNC_11(VAR_18, ((void*)0), 16);

 do {
  if (FUNC_1(VAR_11, 1024, VAR_8) == ((void*)0)) {
   FUNC_0(VAR_8);
   return -1;
  }
  VAR_13 = FUNC_10(VAR_11);
  if (FUNC_5(VAR_8) == VAR_12)
   VAR_14 = 1;
  if (VAR_13) {
   VAR_15 = FUNC_8(&VAR_9, VAR_11, 4, VAR_10, 0);
   if (VAR_15 == VAR_1) {
   } else if (VAR_15) {
    FUNC_3(VAR_5,
     "Error matching regular expression %d in %s\n",
     VAR_15, VAR_7);
    FUNC_0(VAR_8);
    return -1;
   } else {
    VAR_11[VAR_10[0].rm_eo] = 0;
    VAR_11[VAR_10[1].rm_eo] = 0;
    VAR_11[VAR_10[2].rm_eo] = 0;
    VAR_16 = FUNC_11(&VAR_11[VAR_10[1].rm_so], ((void*)0), 16);
    VAR_17 = FUNC_6(VAR_16);
    FUNC_13(VAR_6, VAR_17);
    if (VAR_16 > VAR_6->offset_max)
     VAR_6->offset_max = VAR_16;
   }
  }
 } while (!VAR_14);
 FUNC_0(VAR_8);
 if (VAR_6->offset_max < VAR_19)
  VAR_6->offset_max = VAR_19;
 return FUNC_12(VAR_6);
}
