
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct printer {double price100; int * acct_file; } ;





 int * VAR_0 ;
 scalar_t__ FUNC_0 (int,scalar_t__) ;
 int FUNC_1 (int,char*,...) ;
 int FUNC_2 (int) ;
 int FUNC_3 (struct printer*,char*,char*) ;
 int FUNC_4 (char const*,struct printer*) ;
 int FUNC_5 (struct printer*) ;
 char* FUNC_6 (int) ;
 int VAR_1 ;
 double VAR_2 ;
 int FUNC_7 (char*,char*) ;
 int FUNC_8 (char*,char*) ;
 int FUNC_9 (char*,int *) ;
 scalar_t__ FUNC_10 (int *) ;
 char* VAR_3 ;

__attribute__((used)) static int
FUNC_11(const char *VAR_4)
{
 int VAR_5;
 struct printer VAR_6, *VAR_7 = &VAR_6;

 FUNC_5(&VAR_6);
 VAR_5 = FUNC_4(VAR_4, VAR_7);
 switch(VAR_5) {
 case 129:
  FUNC_7("pac: getprintcap: %s\n", FUNC_6(VAR_5));
  FUNC_2(3);
 case 130:
  return 0;
 case 128:
  FUNC_3(VAR_7, "%s", FUNC_6(VAR_5));
 }
 if ((VAR_0 = VAR_7->acct_file) == ((void*)0))
  FUNC_1(3, "accounting not enabled for printer %s", VAR_4);
 if (!VAR_1 && VAR_7->price100)
  VAR_2 = VAR_7->price100/10000.0;
 VAR_3 = (char *) FUNC_0(sizeof(char), FUNC_10(VAR_0)+5);
 if (VAR_3 == ((void*)0))
  FUNC_1(1, "calloc failed");
 FUNC_9(VAR_3, VAR_0);
 FUNC_8(VAR_3, "_sum");
 return(1);
}
