
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int uuid ;
struct uv__sysctl_args {int* name; char* oldval; size_t* oldlenp; int nlen; } ;
typedef int args ;


 int FUNC_0 (int*) ;
 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int FUNC_1 (int ) ;
 int VAR_3 ;
 int FUNC_2 (char*,char*,size_t) ;
 int FUNC_3 (struct uv__sysctl_args*,int ,int) ;
 int FUNC_4 (int ,struct uv__sysctl_args*) ;

int FUNC_5(void* VAR_4, size_t VAR_5) {
  static int VAR_6[] = {1 , 40 , 6 };
  struct uv__sysctl_args VAR_7;
  char VAR_8[16];
  char* VAR_9;
  char* VAR_10;
  size_t VAR_11;

  VAR_9 = VAR_4;
  VAR_10 = VAR_9 + VAR_5;

  while (VAR_9 < VAR_10) {
    FUNC_3(&VAR_7, 0, sizeof(VAR_7));

    VAR_7.name = VAR_6;
    VAR_7.nlen = FUNC_0(VAR_6);
    VAR_7.oldval = VAR_8;
    VAR_7.oldlenp = &VAR_11;
    VAR_11 = sizeof(VAR_8);
    {
      (void) &VAR_7;
      return VAR_2;
    }


    if (VAR_11 != sizeof(VAR_8))
      return VAR_1;





    VAR_8[6] = VAR_8[14];
    VAR_8[8] = VAR_8[15];

    VAR_11 = VAR_10 - VAR_9;
    if (VAR_11 > 14)
      VAR_11 = 14;

    FUNC_2(VAR_9, VAR_8, VAR_11);
    VAR_9 += VAR_11;
  }

  return 0;
}
