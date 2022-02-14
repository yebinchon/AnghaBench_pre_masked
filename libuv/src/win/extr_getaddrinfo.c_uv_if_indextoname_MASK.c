
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int wchar_t ;
typedef int NET_LUID ;
typedef size_t DWORD ;


 int FUNC_0 (int *) ;
 int VAR_0 ;
 int FUNC_1 (unsigned int,int *) ;
 int FUNC_2 (int *,int *,int ) ;
 int FUNC_3 () ;
 int VAR_1 ;
 int VAR_2 ;
 int VAR_3 ;
 size_t FUNC_4 (int ,int ,int *,int,char*,size_t,int *,int *) ;
 int FUNC_5 (int) ;

int FUNC_6(unsigned int VAR_4, char* VAR_5, size_t* VAR_6) {
  NET_LUID VAR_7;
  wchar_t VAR_8[VAR_1 + 1];
  DWORD VAR_9;
  int VAR_10;

  if (VAR_5 == ((void*)0) || VAR_6 == ((void*)0) || *VAR_6 == 0)
    return VAR_2;

  VAR_10 = FUNC_1(VAR_4, &VAR_7);

  if (VAR_10 != 0)
    return FUNC_5(VAR_10);

  VAR_10 = FUNC_2(&VAR_7, VAR_8, FUNC_0(VAR_8));

  if (VAR_10 != 0)
    return FUNC_5(VAR_10);


  VAR_9 = FUNC_4(VAR_0, 0, VAR_8, -1, ((void*)0), 0, ((void*)0), ((void*)0));

  if (VAR_9 == 0) {
    return FUNC_5(FUNC_3());
  } else if (VAR_9 > *VAR_6) {
    *VAR_6 = VAR_9;
    return VAR_3;
  }


  VAR_9 = FUNC_4(VAR_0,
                                0,
                                VAR_8,
                                -1,
                                VAR_5,
                                *VAR_6,
                                ((void*)0),
                                ((void*)0));

  if (VAR_9 == 0)
    return FUNC_5(FUNC_3());

  *VAR_6 = VAR_9 - 1;
  return 0;
}
