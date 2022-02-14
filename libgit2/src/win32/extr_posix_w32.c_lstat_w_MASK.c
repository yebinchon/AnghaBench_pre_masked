
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int wchar_t ;
struct stat {int dummy; } ;
typedef int WIN32_FILE_ATTRIBUTE_DATA ;
typedef int DWORD ;


 scalar_t__ VAR_0 ;
 scalar_t__ VAR_1 ;
 scalar_t__ VAR_2 ;

 int VAR_3 ;
 scalar_t__ FUNC_0 (int*,int ,int *) ;
 int FUNC_1 (int*) ;
 int VAR_4 ;
 int FUNC_2 () ;
 int VAR_5 ;
 int FUNC_3 (int) ;
 scalar_t__ VAR_6 ;
 int FUNC_4 (struct stat*,int *,int*) ;
 size_t FUNC_5 (int*) ;

__attribute__((used)) static int FUNC_6(
 wchar_t *VAR_7,
 struct stat *VAR_8,
 bool VAR_9)
{
 WIN32_FILE_ATTRIBUTE_DATA VAR_10;

 if (FUNC_0(VAR_7, VAR_4, &VAR_10)) {
  if (!VAR_8)
   return 0;

  return FUNC_4(VAR_8, &VAR_10, VAR_7);
 }

 switch (FUNC_2()) {
 case 128:
  VAR_6 = VAR_0;
  break;
 default:
  VAR_6 = VAR_1;
  break;
 }




 if (VAR_6 == VAR_1 && VAR_9) {
  size_t VAR_11 = FUNC_5(VAR_7);


  while (1) {
   DWORD VAR_12;


   for (VAR_11--; VAR_11 > 0 && !FUNC_3(VAR_7[VAR_11]); VAR_11--);

   if (VAR_11 <= 0)
    break;

   VAR_7[VAR_11] = L'\0';
   VAR_12 = FUNC_1(VAR_7);

   if (VAR_12 != VAR_5) {
    if (!(VAR_12 & VAR_3))
     VAR_6 = VAR_2;
    break;
   }
  }
 }

 return -1;
}
