
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_4__ TYPE_1__ ;


typedef char wchar_t ;
typedef int WIN32_FIND_DATAW ;
struct TYPE_4__ {int dd_dir; scalar_t__ dd_stat; scalar_t__ dd_handle; } ;
typedef scalar_t__ HANDLE ;
typedef scalar_t__ DWORD ;
typedef TYPE_1__ DIR ;


 int VAR_0 ;
 scalar_t__ VAR_1 ;
 scalar_t__ FUNC_0 (char*,int *) ;
 scalar_t__ FUNC_1 () ;
 scalar_t__ VAR_2 ;
 int VAR_3 ;
 int FUNC_2 (scalar_t__) ;
 int VAR_4 ;
 int FUNC_3 (int *,int *) ;
 int FUNC_4 (char) ;
 TYPE_1__* FUNC_5 (int) ;
 int FUNC_6 (char*,char const*) ;

DIR *FUNC_7(const char *VAR_5)
{
 wchar_t VAR_6[VAR_3 + 2];
 WIN32_FIND_DATAW VAR_7;
 HANDLE VAR_8;
 int VAR_9;
 DIR *VAR_10;


 if ((VAR_9 = FUNC_6(VAR_6, VAR_5)) < 0)
  return ((void*)0);


 if (VAR_9 && !FUNC_4(VAR_6[VAR_9 - 1]))
  VAR_6[VAR_9++] = '/';
 VAR_6[VAR_9++] = '*';
 VAR_6[VAR_9] = 0;


 VAR_8 = FUNC_0(VAR_6, &VAR_7);
 if (VAR_8 == VAR_2) {
  DWORD VAR_11 = FUNC_1();
  VAR_4 = (VAR_11 == VAR_1) ? VAR_0 : FUNC_2(VAR_11);
  return ((void*)0);
 }


 VAR_10 = FUNC_5(sizeof(DIR));
 VAR_10->dd_handle = VAR_8;
 VAR_10->dd_stat = 0;
 FUNC_3(&VAR_10->dd_dir, &VAR_7);
 return VAR_10;
}
