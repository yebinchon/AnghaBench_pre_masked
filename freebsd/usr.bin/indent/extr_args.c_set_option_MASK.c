
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


struct pro {char* p_name; int p_type; int p_special; int* p_obj; } ;
struct TYPE_2__ {int case_indent; } ;




 char* VAR_0 ;


 int VAR_1 ;





 int FUNC_0 (char const*) ;
 int FUNC_1 (char const*) ;
 int FUNC_2 (char const*) ;
 int FUNC_3 (char const*) ;
 char* FUNC_4 (char*,char*) ;
 int FUNC_5 (int,char*,int,...) ;
 int FUNC_6 (int ) ;
 int * VAR_2 ;
 int FUNC_7 (unsigned char) ;
 TYPE_1__ VAR_3 ;
 int VAR_4 ;
 int * VAR_5 ;
 int FUNC_8 (char*,char*) ;
 struct pro* VAR_6 ;
 int * VAR_7 ;
 int * VAR_8 ;

void
FUNC_9(char *VAR_9)
{
    struct pro *VAR_10;
    const char *VAR_11;

    VAR_9++;
    for (VAR_10 = VAR_6; VAR_10->p_name; VAR_10++)
 if (*VAR_10->p_name == *VAR_9 && (VAR_11 = FUNC_4(VAR_10->p_name, VAR_9)) != ((void*)0))
     goto found;
    FUNC_5(1, "%s: unknown parameter \"%s\"", VAR_4, VAR_9 - 1);
found:
    switch (VAR_10->p_type) {

    case 130:
 switch (VAR_10->p_special) {

 case 135:
     break;

 case 136:
     if (*VAR_11 == 0)
  goto need_param;
     VAR_3.case_indent = FUNC_2(VAR_11);
     break;

 case 129:
     if (VAR_2 == ((void*)0))
  VAR_2 = VAR_7;
     if (VAR_5 == ((void*)0))
  VAR_5 = VAR_8;
     break;

 case 134:
     if (*VAR_11 == 0)
  goto need_param;
     FUNC_1(VAR_11);
     break;

 case 133:
     if (*VAR_11 == 0)
  goto need_param;
     FUNC_0(VAR_11);
     break;

 case 128:
     FUNC_8("FreeBSD indent %s\n", VAR_0);
     FUNC_6(0);

 default:
     FUNC_5(1, "set_option: internal error: p_special %d", VAR_10->p_special);
 }
 break;

    case 132:
 if (VAR_10->p_special == VAR_1)
     *VAR_10->p_obj = 0;
 else
     *VAR_10->p_obj = 1;
 break;

    case 131:
 if (!FUNC_7((unsigned char)*VAR_11)) {
    need_param:
     FUNC_5(1, "%s: ``%s'' requires a parameter", VAR_4, VAR_10->p_name);
 }
 *VAR_10->p_obj = FUNC_3(VAR_11);
 break;

    default:
 FUNC_5(1, "set_option: internal error: p_type %d", VAR_10->p_type);
    }
}
