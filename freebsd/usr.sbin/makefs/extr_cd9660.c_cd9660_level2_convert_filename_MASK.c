
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_3__ TYPE_1__ ;


struct TYPE_3__ {int omit_trailing_period; scalar_t__ allow_multidot; scalar_t__ archimedes_enabled; } ;
typedef TYPE_1__ iso9660_disk ;


 scalar_t__ FUNC_0 (unsigned char) ;
 scalar_t__ FUNC_1 (unsigned char) ;
 scalar_t__ FUNC_2 (unsigned char) ;
 int FUNC_3 (char*,char*,int) ;
 int FUNC_4 (char const*) ;
 int FUNC_5 (unsigned char) ;

__attribute__((used)) static int
FUNC_6(iso9660_disk *VAR_0, const char *VAR_1,
    char *VAR_2, int VAR_3)
{
 int VAR_4 = 0;
 int VAR_5 = 0;
 int VAR_6 = 0;

 while (*VAR_1 != '\0' && VAR_4 + VAR_5 < 30) {

  if (*VAR_1 == '.') {
   if (VAR_6) {
    if (VAR_0->allow_multidot) {
     *VAR_2++ = '.';
    } else {
     *VAR_2++ = '_';
    }
    VAR_5 ++;
   }
   else {
    *VAR_2++ = '.';
    VAR_6 = 1;
   }
  } else {

   if (VAR_0->archimedes_enabled &&
       *VAR_1 == ',' && FUNC_4(VAR_1) == 4)
    break;

    if (FUNC_1((unsigned char)*VAR_1))
    *VAR_2++ = FUNC_5((unsigned char)*VAR_1);
   else if (FUNC_2((unsigned char)*VAR_1) ||
       FUNC_0((unsigned char)*VAR_1))
    *VAR_2++ = *VAR_1;
   else if (VAR_0->allow_multidot &&
       *VAR_1 == '.') {
        *VAR_2++ = '.';
   } else {
    *VAR_2++ = '_';
   }

   if (VAR_6)
    VAR_5++;
   else
    VAR_4++;
  }
  VAR_1 ++;
 }
 if (VAR_3) {
  if (!VAR_6 && !VAR_0->omit_trailing_period)
   *VAR_2++ = '.';

  FUNC_3(VAR_2, ";%i", 1);
 }
 return VAR_4 + VAR_5 + VAR_6;
}
