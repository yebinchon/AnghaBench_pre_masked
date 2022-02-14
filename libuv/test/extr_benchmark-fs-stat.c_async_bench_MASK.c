
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int uint64_t ;
struct async_req {char const* path; int* count; int fs_req; } ;


 int VAR_0 ;
 double VAR_1 ;
 int VAR_2 ;
 int FUNC_0 (int ) ;
 char* FUNC_1 (double) ;
 int FUNC_2 (char*,char*,int,int,char*) ;
 int VAR_3 ;
 int VAR_4 ;
 int FUNC_3 () ;
 int FUNC_4 (int ,int *,char const*,int ) ;
 int FUNC_5 () ;
 int FUNC_6 (int ,int ) ;

__attribute__((used)) static void FUNC_7(const char* VAR_5) {
  struct async_req VAR_6[VAR_0];
  struct async_req* VAR_7;
  uint64_t VAR_8;
  uint64_t VAR_9;
  int VAR_10;
  int VAR_11;

  for (VAR_11 = 1; VAR_11 <= VAR_0; VAR_11++) {
    VAR_10 = VAR_1;

    for (VAR_7 = VAR_6; VAR_7 < VAR_6 + VAR_11; VAR_7++) {
      VAR_7->path = VAR_5;
      VAR_7->count = &VAR_10;
      FUNC_4(FUNC_3(), &VAR_7->fs_req, VAR_7->path, VAR_3);
    }

    VAR_8 = FUNC_5();
    FUNC_6(FUNC_3(), VAR_2);
    VAR_9 = FUNC_5();

    FUNC_2("%s stats (%d concurrent): %.2fs (%s/s)\n",
           FUNC_1(1.0 * VAR_1),
           VAR_11,
           (VAR_9 - VAR_8) / 1e9,
           FUNC_1((1.0 * VAR_1) / ((VAR_9 - VAR_8) / 1e9)));
    FUNC_0(VAR_4);
  }
}
