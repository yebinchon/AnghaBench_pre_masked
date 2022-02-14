
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct message {long m_size; scalar_t__ m_lines; int m_flag; int m_offset; int m_block; } ;
typedef int sig_t ;
typedef int off_t ;
typedef int buf ;
typedef int FILE ;


 int VAR_0 ;
 int FUNC_0 (int *) ;
 int VAR_1 ;
 int VAR_2 ;
 int VAR_3 ;
 int VAR_4 ;
 int FUNC_1 (int ) ;
 int FUNC_2 (int ) ;
 struct message* VAR_5 ;
 scalar_t__ FUNC_3 (int ) ;
 int * FUNC_4 (char*,int,int ) ;
 int FUNC_5 (int ,int ,int ) ;
 scalar_t__ FUNC_6 (int *) ;
 int FUNC_7 (int ) ;
 int FUNC_8 (int *) ;
 struct message* VAR_6 ;
 int VAR_7 ;
 int VAR_8 ;
 int FUNC_9 (char*,int) ;
 int FUNC_10 (int,int ) ;
 int VAR_9 ;
 int FUNC_11 (int *) ;
 int * FUNC_12 (int ,long,int,int ) ;
 int FUNC_13 (struct message*) ;
 int FUNC_14 (int ,int ) ;
 int VAR_10 ;
 int FUNC_15 (struct message*) ;
 int FUNC_16 (char*) ;

int
FUNC_17(int *VAR_11, int VAR_12)
{
 int VAR_13, VAR_14;
 FILE *VAR_15;
 struct message *VAR_16;
 off_t VAR_17;




 for (VAR_14 = 0; VAR_14 < VAR_7 && VAR_11[VAR_14]; VAR_14++) {
  sig_t VAR_18;

  if (VAR_14 > 0) {
   char VAR_19[100];
   char *VAR_20;

   FUNC_9("Edit message %d [ynq]? ", VAR_11[VAR_14]);
   if (FUNC_4(VAR_19, sizeof(VAR_19), VAR_10) == ((void*)0))
    break;
   for (VAR_20 = VAR_19; *VAR_20 == ' ' || *VAR_20 == '\t'; VAR_20++)
    ;
   if (*VAR_20 == 'q')
    break;
   if (*VAR_20 == 'n')
    continue;
  }
  VAR_5 = VAR_16 = &VAR_6[VAR_11[VAR_14] - 1];
  FUNC_15(VAR_16);
  VAR_18 = FUNC_14(VAR_3, VAR_4);
  VAR_15 = FUNC_12(FUNC_13(VAR_16), VAR_16->m_size, VAR_12, VAR_9);
  if (VAR_15 != ((void*)0)) {
   (void)FUNC_5(VAR_8, (off_t)0, VAR_2);
   VAR_17 = FUNC_7(VAR_8);
   VAR_16->m_block = FUNC_1(VAR_17);
   VAR_16->m_offset = FUNC_2(VAR_17);
   VAR_16->m_size = (long)FUNC_6(VAR_15);
   VAR_16->m_lines = 0;
   VAR_16->m_flag |= VAR_1;
   FUNC_11(VAR_15);
   while ((VAR_13 = FUNC_8(VAR_15)) != VAR_0) {
    if (VAR_13 == '\n')
     VAR_16->m_lines++;
    if (FUNC_10(VAR_13, VAR_8) == VAR_0)
     break;
   }
   if (FUNC_3(VAR_8))
    FUNC_16("/tmp");
   (void)FUNC_0(VAR_15);
  }
  (void)FUNC_14(VAR_3, VAR_18);
 }
 return (0);
}
