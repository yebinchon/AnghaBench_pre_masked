
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int ifname_buf ;


 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int FUNC_0 (int ) ;
 int VAR_3 ;
 int * FUNC_1 (unsigned int,char*) ;
 int FUNC_2 (char*,char*,size_t) ;
 size_t FUNC_3 (char*,int) ;

int FUNC_4(unsigned int VAR_4, char* VAR_5, size_t* VAR_6) {
  char VAR_7[VAR_2];
  size_t VAR_8;

  if (VAR_5 == ((void*)0) || VAR_6 == ((void*)0) || *VAR_6 == 0)
    return VAR_0;

  if (FUNC_1(VAR_4, VAR_7) == ((void*)0))
    return FUNC_0(VAR_3);

  VAR_8 = FUNC_3(VAR_7, sizeof(VAR_7));

  if (*VAR_6 <= VAR_8) {
    *VAR_6 = VAR_8 + 1;
    return VAR_1;
  }

  FUNC_2(VAR_5, VAR_7, VAR_8);
  VAR_5[VAR_8] = '\0';
  *VAR_6 = VAR_8;

  return 0;
}
