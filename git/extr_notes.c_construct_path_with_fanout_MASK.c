
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


struct TYPE_2__ {unsigned char rawsz; } ;


 scalar_t__ VAR_0 ;
 int FUNC_0 (int) ;
 char* FUNC_1 (unsigned char const*) ;
 TYPE_1__* VAR_1 ;
 int FUNC_2 (char*,scalar_t__,char*,char const*) ;

__attribute__((used)) static void FUNC_3(const unsigned char *VAR_2,
  unsigned char VAR_3, char *VAR_4)
{
 unsigned int VAR_5 = 0, VAR_6 = 0;
 const char *VAR_7 = FUNC_1(VAR_2);
 FUNC_0(VAR_3 < VAR_1->rawsz);
 while (VAR_3) {
  VAR_4[VAR_5++] = VAR_7[VAR_6++];
  VAR_4[VAR_5++] = VAR_7[VAR_6++];
  VAR_4[VAR_5++] = '/';
  VAR_3--;
 }
 FUNC_2(VAR_4 + VAR_5, VAR_0 - VAR_5, "%s", VAR_7 + VAR_6);
}
