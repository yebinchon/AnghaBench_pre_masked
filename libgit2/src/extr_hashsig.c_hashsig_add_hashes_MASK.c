
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_6__ TYPE_2__ ;
typedef struct TYPE_5__ TYPE_1__ ;


typedef char uint8_t ;
typedef int hashsig_t ;
typedef scalar_t__ hashsig_state ;
struct TYPE_5__ {int use_ignores; } ;
typedef TYPE_1__ hashsig_in_progress ;
struct TYPE_6__ {int opt; int maxs; int mins; int lines; } ;
typedef TYPE_2__ git_hashsig ;


 int VAR_0 ;
 int VAR_1 ;
 int FUNC_0 (scalar_t__,char) ;
 scalar_t__ VAR_2 ;
 int VAR_3 ;
 scalar_t__ FUNC_1 (char) ;
 int FUNC_2 (int *,int ) ;

__attribute__((used)) static int FUNC_3(
 git_hashsig *VAR_4,
 const uint8_t *VAR_5,
 size_t VAR_6,
 hashsig_in_progress *VAR_7)
{
 const uint8_t *VAR_8 = VAR_5, *VAR_9 = VAR_5 + VAR_6;
 hashsig_state VAR_10 = VAR_2;
 int VAR_11 = VAR_7->use_ignores, VAR_12;
 uint8_t VAR_13;

 while (VAR_8 < VAR_9) {
  VAR_10 = VAR_2;

  for (VAR_12 = 0; VAR_8 < VAR_9 && VAR_12 < VAR_3; ) {
   VAR_13 = *VAR_8;

   if (VAR_11)
    for (; VAR_8 < VAR_9 && FUNC_1(VAR_13); VAR_13 = *VAR_8)
     ++VAR_8;
   else if (VAR_4->opt &
      (VAR_0 | VAR_1))
    for (; VAR_8 < VAR_9 && VAR_13 == '\r'; VAR_13 = *VAR_8)
     ++VAR_8;


   if (VAR_4->opt & VAR_1)
    VAR_11 = (VAR_13 == '\n');

   if (VAR_8 >= VAR_9)
    break;
   ++VAR_8;


   if (VAR_13 == '\n' || VAR_13 == '\0') {
    VAR_4->lines++;
    break;
   }

   ++VAR_12;
   FUNC_0(VAR_10, VAR_13);
  }

  if (VAR_12 > 0) {
   FUNC_2(&VAR_4->mins, (hashsig_t)VAR_10);
   FUNC_2(&VAR_4->maxs, (hashsig_t)VAR_10);

   while (VAR_8 < VAR_9 && (*VAR_8 == '\n' || !*VAR_8))
    ++VAR_8;
  }
 }

 VAR_7->use_ignores = VAR_11;

 return 0;
}
