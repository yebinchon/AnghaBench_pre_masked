
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;
 int FUNC_0 (char*) ;
 int VAR_0 ;
 int VAR_1 ;
 int FUNC_1 (char*,char const*,size_t) ;
 size_t FUNC_2 (char const*) ;

int FUNC_3(char* VAR_2, size_t* VAR_3) {
  const char* VAR_4;
  size_t VAR_5;

  if (VAR_2 == ((void*)0) || VAR_3 == ((void*)0) || *VAR_3 == 0)
    return VAR_0;
  do { VAR_4 = FUNC_0("TMPDIR"); if (VAR_4 != ((void*)0)) goto return_buffer; } while (0);
  do { VAR_4 = FUNC_0("TMP"); if (VAR_4 != ((void*)0)) goto return_buffer; } while (0);
  do { VAR_4 = FUNC_0("TEMP"); if (VAR_4 != ((void*)0)) goto return_buffer; } while (0);
  do { VAR_4 = FUNC_0("TEMPDIR"); if (VAR_4 != ((void*)0)) goto return_buffer; } while (0);







    VAR_4 = "/tmp";


return_buffer:
  VAR_5 = FUNC_2(VAR_4);

  if (VAR_5 >= *VAR_3) {
    *VAR_3 = VAR_5 + 1;
    return VAR_1;
  }


  if (VAR_5 > 1 && VAR_4[VAR_5 - 1] == '/') {
    VAR_5--;
  }

  FUNC_1(VAR_2, VAR_4, VAR_5 + 1);
  VAR_2[VAR_5] = '\0';
  *VAR_3 = VAR_5;

  return 0;
}
