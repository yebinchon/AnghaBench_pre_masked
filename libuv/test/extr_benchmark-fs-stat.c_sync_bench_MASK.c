
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int uv_fs_t ;
typedef int uint64_t ;


 int VAR_0 ;
 int FUNC_0 (int ) ;
 char* FUNC_1 (double) ;
 int FUNC_2 (char*,char*,int,char*) ;
 int VAR_1 ;
 int FUNC_3 (int *,char const*) ;
 int FUNC_4 () ;

__attribute__((used)) static void FUNC_5(const char* VAR_2) {
  uint64_t VAR_3;
  uint64_t VAR_4;
  uv_fs_t VAR_5;
  int VAR_6;


  VAR_3 = FUNC_4();

  for (VAR_6 = 0; VAR_6 < VAR_0; VAR_6++)
    FUNC_3(&VAR_5, VAR_2);

  VAR_4 = FUNC_4();

  FUNC_2("%s stats (sync): %.2fs (%s/s)\n",
         FUNC_1(1.0 * VAR_0),
         (VAR_4 - VAR_3) / 1e9,
         FUNC_1((1.0 * VAR_0) / ((VAR_4 - VAR_3) / 1e9)));
  FUNC_0(VAR_1);
}
