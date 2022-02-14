
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;
 char* VAR_0 ;
 int * VAR_1 ;
 void* VAR_2 ;
 void* VAR_3 ;
 void* VAR_4 ;
 void* VAR_5 ;
 void* VAR_6 ;
 void* VAR_7 ;
 void* VAR_8 ;
 void* VAR_9 ;
 void* VAR_10 ;
 void* VAR_11 ;
 int VAR_12 ;
 scalar_t__ FUNC_0 (char*) ;
 void* FUNC_1 (char*,char**) ;

__attribute__((used)) static void
FUNC_2(void)
{
 static char VAR_13[512];
 char *VAR_14 = VAR_13;


 VAR_2 = FUNC_1("up", &VAR_14);
 VAR_1 = FUNC_1("ri", &VAR_14);
 if (VAR_1 == ((void*)0))
  VAR_1 = FUNC_1("nd", &VAR_14);
 VAR_0 = FUNC_1("le", &VAR_14);
 if (VAR_0 == ((void*)0))
  VAR_0 = FUNC_1("bc", &VAR_14);
 if (VAR_0 == ((void*)0) && FUNC_0("bs"))
  VAR_0 = "\b";

 VAR_6 = FUNC_1("so", &VAR_14);
 VAR_9 = FUNC_1("se", &VAR_14);
 VAR_7 = FUNC_1("us", &VAR_14);
 VAR_10 = FUNC_1("ue", &VAR_14);
 VAR_4 = FUNC_1("mh", &VAR_14);
 VAR_3 = FUNC_1("md", &VAR_14);
 VAR_5 = FUNC_1("mr", &VAR_14);
 VAR_8 = FUNC_1("me", &VAR_14);

 if (!VAR_3 && VAR_5)
  VAR_3 = VAR_5;
 if (!VAR_3 && VAR_6)
  VAR_3 = VAR_6;
 if (!VAR_7 && VAR_6) {
  VAR_7 = VAR_6;
  VAR_10 = VAR_9;
 }
 if (!VAR_4 && VAR_6)
  VAR_4 = VAR_6;
 if (!VAR_5 && VAR_6)
  VAR_5 = VAR_6;
 if (!VAR_8 && VAR_9)
  VAR_8 = VAR_9;
 VAR_11 = FUNC_1("uc", &VAR_14);
 VAR_12 = (VAR_11 && !VAR_7);
}
