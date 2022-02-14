
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct sline {unsigned long flag; char* bol; int len; struct lline* lost; } ;
struct lline {unsigned long parent_map; char* line; struct lline* next; } ;


 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int VAR_3 ;
 int VAR_4 ;
 int VAR_5 ;
 char VAR_6 ;
 int VAR_7 ;
 char* FUNC_0 (int,int ) ;
 int FUNC_1 (char const*,int ) ;
 scalar_t__ FUNC_2 (char*) ;
 int FUNC_3 (int) ;
 int FUNC_4 (char*,...) ;
 int FUNC_5 (char const) ;
 int FUNC_6 (char*,int,char const*) ;
 int FUNC_7 (struct sline*,unsigned long,unsigned long,int,unsigned long) ;
 int VAR_8 ;

__attribute__((used)) static void FUNC_8(struct sline *VAR_9, const char *VAR_10,
         unsigned long VAR_11, int VAR_12,
         int VAR_13, int VAR_14)
{
 unsigned long VAR_15 = (1UL<<VAR_12);
 unsigned long VAR_16 = (2UL<<VAR_12);
 int VAR_17;
 unsigned long VAR_18 = 0;
 const char *VAR_19 = FUNC_0(VAR_13, VAR_3);
 const char *VAR_20 = FUNC_0(VAR_13, VAR_4);
 const char *VAR_21 = FUNC_0(VAR_13, VAR_1);
 const char *VAR_22 = FUNC_0(VAR_13, VAR_2);
 const char *VAR_23 = FUNC_0(VAR_13, VAR_0);
 const char *VAR_24 = FUNC_0(VAR_13, VAR_5);

 if (VAR_14)
  return;

 while (1) {
  unsigned long VAR_25;
  unsigned long VAR_26;
  const char *VAR_27 = ((void*)0);
  unsigned long VAR_28 = 0;

  while (VAR_18 <= VAR_11 && !(VAR_9[VAR_18].flag & VAR_15)) {
   if (FUNC_2(VAR_9[VAR_18].bol))
    VAR_27 = VAR_9[VAR_18].bol;
   VAR_18++;
  }
  if (VAR_11 < VAR_18)
   break;
  else {
   for (VAR_25 = VAR_18 + 1; VAR_25 <= VAR_11; VAR_25++)
    if (!(VAR_9[VAR_25].flag & VAR_15))
     break;
  }
  VAR_26 = VAR_25 - VAR_18;
  if (VAR_11 < VAR_25)
   VAR_26--;

  if (!VAR_7) {
   unsigned long VAR_29;
   for (VAR_29 = VAR_18; VAR_29 < VAR_25; VAR_29++)
    if (!(VAR_9[VAR_29].flag & (VAR_15-1)))
     VAR_28++;
   VAR_26 -= VAR_28;
  }

  FUNC_4("%s%s", VAR_10, VAR_19);
  for (VAR_17 = 0; VAR_17 <= VAR_12; VAR_17++) FUNC_5(VAR_6);
  for (VAR_17 = 0; VAR_17 < VAR_12; VAR_17++)
   FUNC_7(VAR_9, VAR_18, VAR_25, VAR_17, VAR_28);
  FUNC_4(" +%lu,%lu ", VAR_18+1, VAR_26);
  for (VAR_17 = 0; VAR_17 <= VAR_12; VAR_17++) FUNC_5(VAR_6);

  if (VAR_27) {
   int VAR_30 = 0;
   for (VAR_17 = 0; VAR_17 < 40; VAR_17++) {
    int VAR_31 = VAR_27[VAR_17] & 0xff;
    if (!VAR_31 || VAR_31 == '\n')
     break;
    if (!FUNC_3(VAR_31))
        VAR_30 = VAR_17;
   }
   if (VAR_30)
    FUNC_4("%s%s %s%s", VAR_24,
          VAR_23, VAR_24,
          VAR_20);
   for (VAR_17 = 0; VAR_17 < VAR_30; VAR_17++)
    FUNC_5(VAR_27[VAR_17]);
  }

  FUNC_4("%s\n", VAR_24);
  while (VAR_18 < VAR_25) {
   struct lline *VAR_32;
   int VAR_33;
   unsigned long VAR_34;
   struct sline *VAR_35 = &VAR_9[VAR_18++];
   VAR_32 = (VAR_35->flag & VAR_16) ? ((void*)0) : VAR_35->lost;
   while (VAR_32) {
    FUNC_4("%s%s", VAR_10, VAR_22);
    for (VAR_33 = 0; VAR_33 < VAR_12; VAR_33++) {
     if (VAR_32->parent_map & (1UL<<VAR_33))
      FUNC_5('-');
     else
      FUNC_5(' ');
    }
    FUNC_6(VAR_32->line, -1, VAR_24);
    VAR_32 = VAR_32->next;
   }
   if (VAR_11 < VAR_18)
    break;
   VAR_34 = 1;
   FUNC_1(VAR_10, VAR_8);
   if (!(VAR_35->flag & (VAR_15-1))) {




    if (!VAR_7)
     continue;
    FUNC_1(VAR_23, VAR_8);
   }
   else
    FUNC_1(VAR_21, VAR_8);
   for (VAR_33 = 0; VAR_33 < VAR_12; VAR_33++) {
    if (VAR_34 & VAR_35->flag)
     FUNC_5('+');
    else
     FUNC_5(' ');
    VAR_34 <<= 1;
   }
   FUNC_6(VAR_35->bol, VAR_35->len, VAR_24);
  }
 }
}
