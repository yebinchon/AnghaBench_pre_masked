
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct text_stat {int nonprintable; int printable; int nul; int lonelf; int lonecr; int crlf; } ;


 int FUNC_0 (struct text_stat*,int ,int) ;

__attribute__((used)) static void FUNC_1(const char *VAR_0, unsigned long VAR_1, struct text_stat *VAR_2)
{
 unsigned long VAR_3;

 FUNC_0(VAR_2, 0, sizeof(*VAR_2));

 for (VAR_3 = 0; VAR_3 < VAR_1; VAR_3++) {
  unsigned char VAR_4 = VAR_0[VAR_3];
  if (VAR_4 == '\r') {
   if (VAR_3+1 < VAR_1 && VAR_0[VAR_3+1] == '\n') {
    VAR_2->crlf++;
    VAR_3++;
   } else
    VAR_2->lonecr++;
   continue;
  }
  if (VAR_4 == '\n') {
   VAR_2->lonelf++;
   continue;
  }
  if (VAR_4 == 127)

   VAR_2->nonprintable++;
  else if (VAR_4 < 32) {
   switch (VAR_4) {

   case '\b': case '\t': case '\033': case '\014':
    VAR_2->printable++;
    break;
   case 0:
    VAR_2->nul++;

   default:
    VAR_2->nonprintable++;
   }
  }
  else
   VAR_2->printable++;
 }


 if (VAR_1 >= 1 && VAR_0[VAR_1-1] == '\032')
  VAR_2->nonprintable--;
}
