
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;
 size_t FUNC_0 (char*) ;
 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int VAR_3 ;
 int VAR_4 ;
 int FUNC_1 (int ) ;
 int VAR_5 ;
 size_t FUNC_2 (char*) ;
 scalar_t__ FUNC_3 (int*,int,char*,size_t*,int *,int ) ;
 int FUNC_4 (char*,char*,size_t) ;

int FUNC_5(char* VAR_6, size_t* VAR_7) {




  char VAR_8[VAR_3];
  size_t VAR_9;
  int VAR_10[4];

  if (VAR_6 == ((void*)0) || VAR_7 == ((void*)0) || *VAR_7 == 0)
    return VAR_4;

  VAR_10[0] = VAR_0;
  VAR_10[1] = VAR_1;
  VAR_10[2] = -1;
  VAR_10[3] = VAR_2;
  VAR_9 = FUNC_0(VAR_8);

  if (FUNC_3(VAR_10, 4, VAR_8, &VAR_9, ((void*)0), 0))
    return FUNC_1(VAR_5);





  FUNC_4(VAR_6, VAR_8, *VAR_7);


  *VAR_7 = FUNC_2(VAR_6);

  return 0;
}
