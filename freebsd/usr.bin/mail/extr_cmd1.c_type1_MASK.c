
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct message {scalar_t__ m_lines; } ;
typedef int FILE ;


 int FUNC_0 (int *) ;
 int * FUNC_1 (char*,char*) ;
 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 char* VAR_3 ;
 int FUNC_2 (char*) ;
 int VAR_4 ;
 struct message* VAR_5 ;
 int FUNC_3 (int *,char*,int) ;
 int VAR_6 ;
 struct message* VAR_7 ;
 int VAR_8 ;
 int VAR_9 ;
 int VAR_10 ;
 int FUNC_4 (struct message*,int *,int ,int *) ;
 scalar_t__ FUNC_5 (int ) ;
 int FUNC_6 (int ,int ) ;
 int * VAR_11 ;
 int FUNC_7 (struct message*) ;
 char* FUNC_8 (char*) ;
 int FUNC_9 (char*,char*) ;

int
FUNC_10(int *VAR_12, int VAR_13, int VAR_14)
{
 int VAR_15, *VAR_16;
 struct message *VAR_17;
 char *VAR_18;
 FILE *VAR_19;

 VAR_19 = VAR_11;
 if (FUNC_5(VAR_9))
  goto close_pipe;
 if (FUNC_8("interactive") != ((void*)0) &&
     (VAR_14 || (VAR_18 = FUNC_8("crt")) != ((void*)0))) {
  VAR_15 = 0;
  if (!VAR_14) {
   for (VAR_16 = VAR_12; *VAR_16 && VAR_16-VAR_12 < VAR_8; VAR_16++)
    VAR_15 += VAR_7[*VAR_16 - 1].m_lines;
  }
  if (VAR_14 || VAR_15 > (*VAR_18 ? FUNC_2(VAR_18) : VAR_10)) {
   VAR_18 = FUNC_8("PAGER");
   if (VAR_18 == ((void*)0) || *VAR_18 == '\0')
    VAR_18 = VAR_3;
   VAR_19 = FUNC_1(VAR_18, "w");
   if (VAR_19 == ((void*)0)) {
    FUNC_9("%s", VAR_18);
    VAR_19 = VAR_11;
   } else
    (void)FUNC_6(VAR_0, VAR_4);
  }
 }





 for (VAR_16 = VAR_12; *VAR_16 && VAR_16 - VAR_12 < VAR_8; VAR_16++) {
  VAR_17 = &VAR_7[*VAR_16 - 1];
  FUNC_7(VAR_17);
  VAR_5 = VAR_17;
  if (FUNC_8("quiet") == ((void*)0))
   FUNC_3(VAR_19, "Message %d:\n", *VAR_16);
  (void)FUNC_4(VAR_17, VAR_19, VAR_13 ? VAR_6 : 0, ((void*)0));
 }

close_pipe:
 if (VAR_19 != VAR_11) {



  (void)FUNC_6(VAR_0, VAR_2);
  (void)FUNC_0(VAR_19);
  (void)FUNC_6(VAR_0, VAR_1);
 }
 return (0);
}
