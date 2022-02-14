
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct strings {char* s_topFree; int s_nleft; char* s_nextFree; } ;


 size_t VAR_0 ;
 int VAR_1 ;
 int FUNC_0 (int,char*,int) ;
 int FUNC_1 (int,char*) ;
 char* FUNC_2 (int) ;
 struct strings* VAR_2 ;

char *
FUNC_3(int VAR_3)
{
 char *VAR_4;
 int VAR_5, VAR_6;
 struct strings *VAR_7;

 VAR_5 = VAR_3;
 VAR_5 += (sizeof(char *) - 1);
 VAR_5 &= ~(sizeof(char *) - 1);
 VAR_6 = 0;
 for (VAR_7 = &VAR_2[0]; VAR_7 < &VAR_2[VAR_0]; VAR_7++) {
  if (VAR_7->s_topFree == ((void*)0) && (VAR_1 << VAR_6) >= VAR_5)
   break;
  if (VAR_7->s_nleft >= VAR_5)
   break;
  VAR_6++;
 }
 if (VAR_7 >= &VAR_2[VAR_0])
  FUNC_1(1, "String too large");
 if (VAR_7->s_topFree == ((void*)0)) {
  VAR_6 = VAR_7 - &VAR_2[0];
  if ((VAR_7->s_topFree = FUNC_2(VAR_1 << VAR_6)) == ((void*)0))
   FUNC_0(1, "No room for space %d", VAR_6);
  VAR_7->s_nextFree = VAR_7->s_topFree;
  VAR_7->s_nleft = VAR_1 << VAR_6;
 }
 VAR_7->s_nleft -= VAR_5;
 VAR_4 = VAR_7->s_nextFree;
 VAR_7->s_nextFree += VAR_5;
 return (VAR_4);
}
