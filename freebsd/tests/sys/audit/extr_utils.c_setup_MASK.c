
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct pollfd {int fd; int events; } ;
typedef int au_mask_t ;
typedef int FILE ;


 int FUNC_0 (int) ;
 int FUNC_1 (int ,int ) ;
 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 scalar_t__ FUNC_2 (char*) ;
 int FUNC_3 (struct pollfd*,char*,int *) ;
 int * FUNC_4 (int,char*) ;
 int FUNC_5 (char const*) ;
 int FUNC_6 (char*,int ) ;
 int FUNC_7 (int,int *) ;
 int FUNC_8 (int *,int *,int ,int ) ;
 int FUNC_9 (char*) ;

FILE
*FUNC_10(struct pollfd VAR_3[], const char *VAR_4)
{
 au_mask_t VAR_5, VAR_6;
 VAR_5 = FUNC_5(VAR_4);
 VAR_6 = FUNC_5("no");
 FILE *VAR_7;

 FUNC_0((VAR_3[0].fd = FUNC_6("/dev/auditpipe", VAR_0)) != -1);
 FUNC_0((VAR_7 = FUNC_4(VAR_3[0].fd, "r")) != ((void*)0));
 VAR_3[0].events = VAR_1;







 FUNC_1(0, FUNC_8(VAR_7, ((void*)0), VAR_2, 0));


 FUNC_7(VAR_3[0].fd, &VAR_6);
 FUNC_1(0, FUNC_9("service auditd onestatus || 	{ service auditd onestart && touch started_auditd ; }"));



 if (FUNC_2("started_auditd"))
  FUNC_3(VAR_3, "audit startup", VAR_7);


 FUNC_7(VAR_3[0].fd, &VAR_5);
 return (VAR_7);
}
