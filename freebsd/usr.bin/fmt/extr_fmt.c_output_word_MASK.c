
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef char wchar_t ;


 scalar_t__ VAR_0 ;
 size_t VAR_1 ;
 size_t VAR_2 ;
 char const* VAR_3 ;
 size_t VAR_4 ;
 int VAR_5 ;
 int FUNC_0 (size_t) ;
 size_t VAR_6 ;
 int FUNC_1 (char) ;
 int VAR_7 ;
 scalar_t__ FUNC_2 (int ,char const) ;
 int FUNC_3 (char const) ;
 int FUNC_4 (char const*,char const*,size_t) ;
 int FUNC_5 (char const*,int,size_t) ;
 int FUNC_6 (char*,int,char const*) ;
 size_t VAR_8 ;
 size_t VAR_9 ;

__attribute__((used)) static void
FUNC_7(size_t VAR_10, size_t VAR_11, const wchar_t *VAR_12, size_t VAR_13, size_t VAR_14)
{
 size_t VAR_15;
 size_t VAR_16 = VAR_5 ? VAR_11 : VAR_10;
 size_t VAR_17;
 const wchar_t *VAR_18;
 int VAR_19;

 for (VAR_18 = VAR_12, VAR_17 = 0; VAR_18 < &VAR_12[VAR_13]; VAR_18++)
  VAR_17 += (VAR_19 = FUNC_3(*VAR_18)) > 0 ? VAR_19 : 1;

 VAR_15 = VAR_8 + VAR_6 + VAR_17;







 if (VAR_0 || VAR_14 == 0)
  VAR_14 = FUNC_2(VAR_7, VAR_12[VAR_13 - 1]) ? 2 : 1;

 if (VAR_15 <= VAR_1) {





  FUNC_5(VAR_3 + VAR_4, L' ',
      VAR_6);
  VAR_9 += VAR_6;
  VAR_8 += VAR_6;
  VAR_4 += VAR_6;
  FUNC_4(VAR_3 + VAR_4, VAR_12, VAR_13);
  VAR_9 += VAR_17;
  VAR_8 += VAR_17;
  VAR_4 += VAR_13;
  VAR_6 = VAR_14;
 } else {
  if (VAR_16 > 0)
   FUNC_0(VAR_16);
  FUNC_6(L"%.*ls", (int)VAR_4, VAR_3);
  if (VAR_9 == 0 || (VAR_15 <= VAR_2 &&
      VAR_15 - VAR_1 <= VAR_1 - VAR_8)) {
   FUNC_6(L"%*ls", (int)VAR_6, L"");
   goto write_out_word;
  } else {




   if (VAR_16 + VAR_17 > VAR_2) {
    FUNC_1('\n');
    if (VAR_16 > 0)
     FUNC_0(VAR_16);
  write_out_word:
    FUNC_6(L"%.*ls", (int)VAR_13, VAR_12);
    VAR_9 = 0;
    VAR_8 = VAR_11;
    VAR_6 = 0;
    VAR_4 = 0;
   } else {
    FUNC_4(VAR_3, VAR_12, VAR_13);
    VAR_9 = VAR_17;
    VAR_8 = VAR_17 + VAR_11;
    VAR_6 = VAR_14;
    VAR_4 = VAR_13;
   }
  }
  FUNC_1('\n');
  VAR_5 = 1;
 }
}
