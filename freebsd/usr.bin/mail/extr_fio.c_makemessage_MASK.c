
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct message {scalar_t__ m_lines; scalar_t__ m_size; } ;
typedef int off_t ;
typedef int FILE ;


 int FUNC_0 (int *) ;
 struct message* VAR_0 ;
 int FUNC_1 (int,char*,...) ;
 int FUNC_2 (int *) ;
 int FUNC_3 (int *) ;
 int FUNC_4 (int ,int ,int ) ;
 struct message* VAR_1 ;
 int VAR_2 ;
 size_t FUNC_5 (int ,void*,size_t) ;
 scalar_t__ FUNC_6 (struct message*,size_t) ;

void
FUNC_7(FILE *VAR_3, int VAR_4)
{
 size_t VAR_5;
 struct message *VAR_6;

 VAR_5 = (VAR_2 + 1) * sizeof(struct message);
 VAR_6 = (struct message *)FUNC_6(VAR_1, VAR_5);
 if (VAR_6 == ((void*)0))
  FUNC_1(1, "Insufficient memory for %d messages\n",
      VAR_2);
 if (VAR_4 == 0 || VAR_1 == ((void*)0))
  VAR_0 = VAR_6;
 else
  VAR_0 = VAR_6 + (VAR_0 - VAR_1);
 VAR_1 = VAR_6;
 VAR_5 -= (VAR_4 + 1) * sizeof(struct message);
 (void)FUNC_2(VAR_3);
 (void)FUNC_4(FUNC_3(VAR_3), (off_t)sizeof(*VAR_1), 0);
 if (FUNC_5(FUNC_3(VAR_3), (void *)&VAR_1[VAR_4], VAR_5) != VAR_5)
  FUNC_1(1, "Message temporary file corrupted");
 VAR_1[VAR_2].m_size = 0;
 VAR_1[VAR_2].m_lines = 0;
 (void)FUNC_0(VAR_3);
}
