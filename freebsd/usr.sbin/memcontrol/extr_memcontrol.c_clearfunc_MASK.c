
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct mem_range_op {struct mem_range_desc* mo_desc; void** mo_arg; } ;
struct mem_range_desc {scalar_t__ mr_base; scalar_t__ mr_len; int mr_flags; int mr_owner; } ;


 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 void* VAR_3 ;
 int FUNC_0 (int,char*) ;
 int FUNC_1 (int,char**,char*) ;
 int FUNC_2 (char*) ;
 scalar_t__ FUNC_3 (int,int ,struct mem_range_op*) ;
 struct mem_range_desc* FUNC_4 (int,int*) ;
 char* VAR_4 ;
 int FUNC_5 (char*,int ) ;
 char* FUNC_6 (char*) ;
 int FUNC_7 (char*) ;
 void* FUNC_8 (char*,char**,int ) ;
 int FUNC_9 (char*,char*) ;

__attribute__((used)) static void
FUNC_10(int VAR_5, int VAR_6, char *VAR_7[])
{
    struct mem_range_desc VAR_8, *VAR_9;
    struct mem_range_op VAR_10;
    int VAR_11, VAR_12;
    int VAR_13;
    char *VAR_14, *VAR_15;

    VAR_8.mr_base = 0;
    VAR_8.mr_len = 0;
    VAR_15 = ((void*)0);
    while ((VAR_13 = FUNC_1(VAR_6, VAR_7, "b:l:o:")) != -1)
 switch(VAR_13) {
 case 'b':
     VAR_8.mr_base = FUNC_8(VAR_4, &VAR_14, 0);
     if ((VAR_14 == VAR_4) || (*VAR_14 != 0))
  FUNC_2("clear");
     break;
 case 'l':
     VAR_8.mr_len = FUNC_8(VAR_4, &VAR_14, 0);
     if ((VAR_14 == VAR_4) || (*VAR_14 != 0))
  FUNC_2("clear");
     break;
 case 'o':
     if ((*VAR_4 == 0) || (FUNC_7(VAR_4) > 7))
  FUNC_2("clear");
     VAR_15 = FUNC_6(VAR_4);
     break;

 case '?':
 default:
     FUNC_2("clear");
 }

    if (VAR_15 != ((void*)0)) {

 if ((VAR_8.mr_base != 0) || (VAR_8.mr_len != 0))
     FUNC_2("clear");

 VAR_9 = FUNC_4(VAR_5, &VAR_12);
 VAR_10.mo_arg[0] = VAR_3;
 for (VAR_11 = 0; VAR_11 < VAR_12; VAR_11++) {
     if (!FUNC_5(VAR_15, VAR_9[VAR_11].mr_owner) &&
  (VAR_9[VAR_11].mr_flags & VAR_0) &&
  !(VAR_9[VAR_11].mr_flags & VAR_1)) {

  VAR_10.mo_desc = VAR_9 + VAR_11;
  if (FUNC_3(VAR_5, VAR_2, &VAR_10))
      FUNC_9("couldn't clear range owned by '%s'", VAR_15);
     }
 }
    } else if (VAR_8.mr_len != 0) {

 VAR_10.mo_arg[0] = VAR_3;
 VAR_10.mo_desc = &VAR_8;
 if (FUNC_3(VAR_5, VAR_2, &VAR_10))
     FUNC_0(1, "couldn't clear range");
    } else {
 FUNC_2("clear");
    }
}
