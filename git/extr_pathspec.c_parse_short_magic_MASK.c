
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_3__ TYPE_1__ ;


struct TYPE_3__ {char mnemonic; unsigned int bit; } ;


 int FUNC_0 (TYPE_1__*) ;
 unsigned int VAR_0 ;
 int FUNC_1 (char*) ;
 int FUNC_2 (int ,char,char const*) ;
 int FUNC_3 (char) ;
 TYPE_1__* VAR_1 ;

__attribute__((used)) static const char *FUNC_4(unsigned *VAR_2, const char *VAR_3)
{
 const char *VAR_4;

 for (VAR_4 = VAR_3 + 1; *VAR_4 && *VAR_4 != ':'; VAR_4++) {
  char VAR_5 = *VAR_4;
  int VAR_6;


  if (VAR_5 == '^') {
   *VAR_2 |= VAR_0;
   continue;
  }

  if (!FUNC_3(VAR_5))
   break;

  for (VAR_6 = 0; VAR_6 < FUNC_0(VAR_1); VAR_6++) {
   if (VAR_1[VAR_6].mnemonic == VAR_5) {
    *VAR_2 |= VAR_1[VAR_6].bit;
    break;
   }
  }

  if (FUNC_0(VAR_1) <= VAR_6)
   FUNC_2(FUNC_1("Unimplemented pathspec magic '%c' in '%s'"),
       VAR_5, VAR_3);
 }

 if (*VAR_4 == ':')
  VAR_4++;

 return VAR_4;
}
