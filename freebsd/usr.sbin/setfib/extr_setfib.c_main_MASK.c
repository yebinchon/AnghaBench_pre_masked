
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;
 scalar_t__ VAR_0 ;
 scalar_t__ FUNC_0 (char**,char*,char*) ;
 int FUNC_1 (int,char*,...) ;
 scalar_t__ VAR_1 ;
 int FUNC_2 (int,char*,...) ;
 int FUNC_3 (char*,char**) ;
 int FUNC_4 (int,char**,char*) ;
 scalar_t__ FUNC_5 (unsigned char) ;
 char* VAR_2 ;
 scalar_t__ VAR_3 ;
 scalar_t__ FUNC_6 (int) ;
 long FUNC_7 (char*,char**,int) ;
 int FUNC_8 (char*,int*,size_t*,int *,int ) ;
 int FUNC_9 () ;
 int FUNC_10 (char*) ;

int
FUNC_11(int VAR_4, char *VAR_5[])
{
 long VAR_6 = 0;
 int VAR_7;
 char *VAR_8;
 int VAR_9;
 size_t VAR_10 = sizeof(int);

        if (FUNC_8("net.fibs", &VAR_9, &VAR_10, ((void*)0), 0) == -1)
  FUNC_2(1, "Multiple FIBS not supported");
 if (VAR_4 < 2)
  FUNC_9();
 VAR_8 = VAR_5[1];



 if (VAR_8[0]== '-' && FUNC_5((unsigned char)VAR_8[1]))
  VAR_8++;
 if (FUNC_5((unsigned char)*VAR_8))
               if (FUNC_0(&VAR_5[1], "-F%s", VAR_8) < 0)
                        FUNC_1(1, "asprintf");

 while ((VAR_7 = FUNC_4(VAR_4, VAR_5, "F:")) != -1) {
  switch (VAR_7) {
  case 'F':
   VAR_1 = 0;
   VAR_6 = FUNC_7(VAR_2, &VAR_8, 10);
   if (VAR_8 == VAR_2 || *VAR_8 != '\0' || VAR_1 ||
       VAR_6 < 0 || VAR_6 >= VAR_9)
    FUNC_2(1, "%s: invalid FIB (max %d)",
        VAR_2, VAR_9 - 1);
   break;
  default:
   FUNC_9();
  }
 }
 VAR_4 -= VAR_3;
 VAR_5 += VAR_3;

 if (VAR_4 == 0)
  FUNC_9();

 VAR_1 = 0;
 if (FUNC_6((int)VAR_6))
  FUNC_10("setfib");
 FUNC_3(*VAR_5, VAR_5);
 FUNC_1(VAR_1 == VAR_0 ? 127 : 126, "%s", *VAR_5);
}
