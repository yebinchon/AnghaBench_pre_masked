
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


struct mem_range_op {scalar_t__* mo_arg; struct mem_range_desc* mo_desc; } ;
struct mem_range_desc {scalar_t__ mr_len; int mr_flags; int mr_owner; void* mr_base; } ;
struct TYPE_2__ {int kind; int * name; int val; } ;


 int VAR_0 ;
 int VAR_1 ;
 TYPE_1__* VAR_2 ;
 int FUNC_0 (int,char*) ;
 int FUNC_1 (int,char**,char*) ;
 int FUNC_2 (char*) ;
 scalar_t__ FUNC_3 (int,int ,struct mem_range_op*) ;
 char* VAR_3 ;
 scalar_t__ VAR_4 ;
 int FUNC_4 (int *,char*) ;
 int FUNC_5 (int ,char*) ;
 int FUNC_6 (char*) ;
 void* FUNC_7 (char*,char**,int ) ;

__attribute__((used)) static void
FUNC_8(int VAR_5, int VAR_6, char *VAR_7[])
{
    struct mem_range_desc VAR_8;
    struct mem_range_op VAR_9;
    int VAR_10;
    int VAR_11;
    char *VAR_12;

    VAR_8.mr_base = 0;
    VAR_8.mr_len = 0;
    VAR_8.mr_flags = 0;
    FUNC_5(VAR_8.mr_owner, "user");
    while ((VAR_11 = FUNC_1(VAR_6, VAR_7, "b:l:o:")) != -1)
 switch(VAR_11) {
 case 'b':
     VAR_8.mr_base = FUNC_7(VAR_3, &VAR_12, 0);
     if ((VAR_12 == VAR_3) || (*VAR_12 != 0))
  FUNC_2("set");
     break;
 case 'l':
     VAR_8.mr_len = FUNC_7(VAR_3, &VAR_12, 0);
     if ((VAR_12 == VAR_3) || (*VAR_12 != 0))
  FUNC_2("set");
     break;
 case 'o':
     if ((*VAR_3 == 0) || (FUNC_6(VAR_3) > 7))
  FUNC_2("set");
     FUNC_5(VAR_8.mr_owner, VAR_3);
     break;

 case '?':
 default:
     FUNC_2("set");
 }

    if (VAR_8.mr_len == 0)
 FUNC_2("set");

    VAR_6 -= VAR_4;
    VAR_7 += VAR_4;

    while(VAR_6--) {
 for (VAR_10 = 0; VAR_2[VAR_10].name != ((void*)0); VAR_10++) {
     if (!FUNC_4(VAR_2[VAR_10].name, VAR_7[0])) {
  if (!(VAR_2[VAR_10].kind & VAR_0))
      FUNC_2("flags");
  VAR_8.mr_flags |= VAR_2[VAR_10].val;
  break;
     }
 }
 if (VAR_2[VAR_10].name == ((void*)0))
     FUNC_2("flags");
 VAR_7++;
    }

    VAR_9.mo_desc = &VAR_8;
    VAR_9.mo_arg[0] = 0;
    if (FUNC_3(VAR_5, VAR_1, &VAR_9))
 FUNC_0(1, "can't set range");
}
