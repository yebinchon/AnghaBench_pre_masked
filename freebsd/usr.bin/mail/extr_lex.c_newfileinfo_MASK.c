
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int zname ;
struct message {int m_flag; } ;
typedef int fname ;


 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int VAR_3 ;
 int VAR_4 ;
 scalar_t__ FUNC_0 (char*,int) ;
 char* VAR_5 ;
 struct message* VAR_6 ;
 size_t VAR_7 ;
 int FUNC_1 (char*,...) ;
 scalar_t__ VAR_8 ;
 int FUNC_2 (char*,int,char*,char*) ;
 int FUNC_3 (char*,char*) ;
 int FUNC_4 (char*) ;
 scalar_t__ FUNC_5 (char*,char*,int) ;

int
FUNC_6(int VAR_9)
{
 struct message *VAR_10;
 int VAR_11, VAR_12, VAR_13, VAR_14, VAR_15;
 char VAR_16[VAR_4+1], VAR_17[VAR_4+1], *VAR_18;

 for (VAR_10 = &VAR_6[VAR_9]; VAR_10 < &VAR_6[VAR_7]; VAR_10++)
  if (VAR_10->m_flag & VAR_1)
   break;
 if (VAR_10 >= &VAR_6[VAR_7])
  for (VAR_10 = &VAR_6[VAR_9]; VAR_10 < &VAR_6[VAR_7]; VAR_10++)
   if ((VAR_10->m_flag & VAR_2) == 0)
    break;
 if (VAR_10 < &VAR_6[VAR_7])
  VAR_13 = VAR_10 - &VAR_6[0] + 1;
 else
  VAR_13 = VAR_9 + 1;
 VAR_15 = VAR_14 = 0;
 for (VAR_10 = &VAR_6[0], VAR_12 = 0, VAR_11 = 0; VAR_10 < &VAR_6[VAR_7]; VAR_10++) {
  if (VAR_10->m_flag & VAR_1)
   VAR_12++;
  if ((VAR_10->m_flag & VAR_2) == 0)
   VAR_11++;
  if (VAR_10->m_flag & VAR_0)
   VAR_14++;
  if (VAR_10->m_flag & VAR_3)
   VAR_15++;
 }
 VAR_18 = VAR_5;
 if (FUNC_0(VAR_16, sizeof(VAR_16) - 1) >= 0) {
  FUNC_3(VAR_16, "/");
  if (FUNC_5(VAR_16, VAR_5, FUNC_4(VAR_16)) == 0) {
   (void)FUNC_2(VAR_17, sizeof(VAR_17), "+%s",
       VAR_5 + FUNC_4(VAR_16));
   VAR_18 = VAR_17;
  }
 }
 FUNC_1("\"%s\": ", VAR_18);
 if (VAR_7 == 1)
  FUNC_1("1 message");
 else
  FUNC_1("%d messages", VAR_7);
 if (VAR_12 > 0)
  FUNC_1(" %d new", VAR_12);
 if (VAR_11-VAR_12 > 0)
  FUNC_1(" %d unread", VAR_11);
 if (VAR_14 > 0)
  FUNC_1(" %d deleted", VAR_14);
 if (VAR_15 > 0)
  FUNC_1(" %d saved", VAR_15);
 if (VAR_8)
  FUNC_1(" [Read only]");
 FUNC_1("\n");
 return (VAR_13);
}
