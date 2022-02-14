
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int FILE ;




 int VAR_0 ;
 int VAR_1 ;
 int FUNC_0 (int *,char const*) ;
 int FUNC_1 (int *,char const*) ;
 int FUNC_2 (char const*) ;
 int FUNC_3 (int,char*,char const*) ;
 int FUNC_4 (char const*,int *) ;
 scalar_t__ FUNC_5 (int *) ;
 scalar_t__ FUNC_6 (int *) ;
 int FUNC_7 (int *) ;
 int * FUNC_8 (char const*,char*) ;
 scalar_t__ FUNC_9 (char const*) ;
 int FUNC_10 (char const*,int *,int ) ;
 int * VAR_2 ;
 int FUNC_11 (int,int *) ;
 int FUNC_12 (char*,char const*) ;

__attribute__((used)) static int
FUNC_13(const char *VAR_3, int VAR_4)
{
    FILE *VAR_5;
    int VAR_6, VAR_7;

    if (FUNC_9(VAR_3)) {
 VAR_3 = "(stdin)";
 VAR_5 = VAR_2;
    } else if ((VAR_5 = FUNC_8(VAR_3, "r")) == ((void*)0))
 return FUNC_4(VAR_3, ((void*)0));
    if (!VAR_4) {
 if (VAR_5 != VAR_2)
     VAR_4 = FUNC_2(VAR_3);
 if (!VAR_4)
     if ((VAR_7 = FUNC_7(VAR_5)) != VAR_0) {
  VAR_4 = VAR_7 == 'M' ? 128 : VAR_7 == 'P' ? 129 : 0;
  (void)FUNC_11(VAR_7, VAR_5);
     }
    }
    switch (VAR_4) {
    case 128:
 VAR_6 = FUNC_1(VAR_5, VAR_3);
 break;
    case 129:
 VAR_6 = FUNC_0(VAR_5, VAR_3);
 break;
    default:
 VAR_6 = FUNC_10(VAR_3, ((void*)0), VAR_1);
    }
    if (FUNC_6(VAR_5))
 FUNC_12("%s", VAR_3);
    if (VAR_5 != VAR_2 && FUNC_5(VAR_5))
 FUNC_3(2, "%s", VAR_3);
    return VAR_6;
}
