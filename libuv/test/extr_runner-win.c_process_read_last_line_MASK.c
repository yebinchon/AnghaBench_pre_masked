
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_7__ TYPE_2__ ;
typedef struct TYPE_6__ TYPE_1__ ;


struct TYPE_6__ {int stdio_out; } ;
typedef TYPE_1__ process_info_t ;
struct TYPE_7__ {size_t Offset; } ;
typedef TYPE_2__ OVERLAPPED ;
typedef size_t DWORD ;


 int FUNC_0 (int) ;
 size_t FUNC_1 (int ,int *) ;
 size_t VAR_0 ;
 int FUNC_2 (int ,char*,size_t,size_t*,TYPE_2__*) ;
 int FUNC_3 (char*,char*,size_t) ;
 int FUNC_4 (TYPE_2__*,int ,int) ;

int FUNC_5(process_info_t *VAR_1,
                           char * VAR_2,
                           size_t VAR_3) {
  DWORD VAR_4;
  DWORD VAR_5;
  DWORD VAR_6;
  OVERLAPPED VAR_7;

  FUNC_0(VAR_3 > 0);

  VAR_4 = FUNC_1(VAR_1->stdio_out, ((void*)0));
  if (VAR_4 == VAR_0)
    return -1;

  if (VAR_4 == 0) {
    VAR_2[0] = '\0';
    return 1;
  }

  FUNC_4(&VAR_7, 0, sizeof VAR_7);
  if (VAR_4 >= VAR_3)
    VAR_7.Offset = VAR_4 - VAR_3 - 1;

  if (!FUNC_2(VAR_1->stdio_out, VAR_2, VAR_3 - 1, &VAR_5, &VAR_7))
    return -1;

  VAR_6 = VAR_5;
  while (VAR_6-- > 0) {
    if (VAR_2[VAR_6] == '\n' || VAR_2[VAR_6] == '\r')
      break;
  }

  if (VAR_6 > 0)
    FUNC_3(VAR_2, VAR_2 + VAR_6, VAR_5 - VAR_6);

  VAR_2[VAR_5 - VAR_6] = '\0';

  return 0;
}
