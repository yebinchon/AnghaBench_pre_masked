
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;
 char* VAR_0 ;
 char* VAR_1 ;
 scalar_t__ VAR_2 ;
 int VAR_3 ;
 int VAR_4 ;
 char* FUNC_0 (char const*,int) ;
 scalar_t__ FUNC_1 (char* const,char*) ;

int FUNC_2(int VAR_5, char* const VAR_6[], const char* VAR_7) {
  int VAR_8 = -1;
  const char* VAR_9 = ((void*)0);

  VAR_0 = ((void*)0);
  VAR_2 = 0;
  VAR_4 = 0;


  if (VAR_3 >= VAR_5)
    goto no_more_optchars;



  if (VAR_6[VAR_3] == ((void*)0))
    goto no_more_optchars;



  if (*VAR_6[VAR_3] != '-')
    goto no_more_optchars;



  if (FUNC_1(VAR_6[VAR_3], "-") == 0)
    goto no_more_optchars;



  if (FUNC_1(VAR_6[VAR_3], "--") == 0) {
    ++VAR_3;
    goto no_more_optchars;
  }

  if (VAR_1 == ((void*)0) || *VAR_1 == '\0')
    VAR_1 = VAR_6[VAR_3] + 1;

  VAR_8 = *VAR_1;



  VAR_4 = VAR_8;




  VAR_9 = FUNC_0(VAR_7, VAR_8);
  if (VAR_9) {


    if (VAR_9[1] == ':') {
      VAR_0 = ++VAR_1;
      if (*VAR_0 == '\0') {





        if (VAR_9[2] != ':') {
          if (++VAR_3 < VAR_5) {
            VAR_0 = VAR_6[VAR_3];
          } else {




            VAR_0 = ((void*)0);
            VAR_8 = (VAR_7[0] == ':') ? ':' : '?';
          }
        } else {
          VAR_0 = ((void*)0);
        }
      }

      VAR_1 = ((void*)0);
    }
  } else {


    VAR_8 = '?';
  }

  if (VAR_1 == ((void*)0) || *++VAR_1 == '\0')
    ++VAR_3;

  return VAR_8;

no_more_optchars:
  VAR_1 = ((void*)0);
  return -1;
}
