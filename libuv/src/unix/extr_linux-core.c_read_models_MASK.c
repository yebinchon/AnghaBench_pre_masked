
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_3__ TYPE_1__ ;


struct TYPE_3__ {char* model; int speed; } ;
typedef TYPE_1__ uv_cpu_info_t ;
typedef int speed_marker ;
typedef int model_marker ;
typedef int buf ;
typedef int FILE ;


 int VAR_0 ;
 int FUNC_0 (int ) ;
 int FUNC_1 (char*) ;
 int VAR_1 ;
 int FUNC_2 (int *) ;
 scalar_t__ FUNC_3 (char*,int,int *) ;
 scalar_t__ FUNC_4 (char const*) ;
 scalar_t__ FUNC_5 (char*,char const*,int) ;
 int * FUNC_6 (char*) ;
 char* FUNC_7 (char const*,scalar_t__) ;

__attribute__((used)) static int FUNC_8(unsigned int VAR_2, uv_cpu_info_t* VAR_3) {
  static const char VAR_4[] = "model name\t: ";
  static const char VAR_5[] = "cpu MHz\t\t: ";
  const char* VAR_6;
  unsigned int VAR_7;
  unsigned int VAR_8;
  char VAR_9[1024];
  char* VAR_10;
  FILE* VAR_11;


  (void) &VAR_4;
  (void) &VAR_5;
  (void) &VAR_8;
  (void) &VAR_10;
  (void) &VAR_9;
  (void) &VAR_11;

  VAR_7 = 0;
  VAR_8 = 0;





  VAR_11 = FUNC_6("/proc/cpuinfo");
  if (VAR_11 == ((void*)0))
    return FUNC_0(VAR_1);

  while (FUNC_3(VAR_9, sizeof(VAR_9), VAR_11)) {
    if (VAR_7 < VAR_2) {
      if (FUNC_5(VAR_9, VAR_4, sizeof(VAR_4) - 1) == 0) {
        VAR_10 = VAR_9 + sizeof(VAR_4) - 1;
        VAR_10 = FUNC_7(VAR_10, FUNC_4(VAR_10) - 1);
        if (VAR_10 == ((void*)0)) {
          FUNC_2(VAR_11);
          return VAR_0;
        }
        VAR_3[VAR_7++].model = VAR_10;
        continue;
      }
    }
    if (VAR_8 < VAR_2) {
      if (FUNC_5(VAR_9, VAR_5, sizeof(VAR_5) - 1) == 0) {
        VAR_3[VAR_8++].speed = FUNC_1(VAR_9 + sizeof(VAR_5) - 1);
        continue;
      }
    }

  }

  FUNC_2(VAR_11);






  VAR_6 = "unknown";
  if (VAR_7 > 0)
    VAR_6 = VAR_3[VAR_7 - 1].model;

  while (VAR_7 < VAR_2) {
    VAR_10 = FUNC_7(VAR_6, FUNC_4(VAR_6));
    if (VAR_10 == ((void*)0))
      return VAR_0;
    VAR_3[VAR_7++].model = VAR_10;
  }

  return 0;
}
