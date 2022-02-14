
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int wchar_t ;
typedef int mbstate_t ;
typedef int mbs ;


 int VAR_0 ;
 scalar_t__** VAR_1 ;
 int FUNC_0 (int*,scalar_t__*,int ,int *) ;
 int FUNC_1 (int *,int ,int) ;

__attribute__((used)) static int
FUNC_2(void)
{
 int VAR_2;
 wchar_t VAR_3;
 mbstate_t VAR_4;

 VAR_2 = (unsigned char)**VAR_1;
 if (VAR_2 == '\'' || VAR_2 == '"') {
  FUNC_1(&VAR_4, 0, sizeof(VAR_4));
  switch (FUNC_0(&VAR_3, *VAR_1 + 1, VAR_0, &VAR_4)) {
  case (size_t)-2:
  case (size_t)-1:
   VAR_3 = (unsigned char)VAR_1[0][1];
   break;
  case 0:
   VAR_3 = 0;
   break;
  }
  VAR_2 = VAR_3;
 }
 ++VAR_1;
 return (VAR_2);
}
