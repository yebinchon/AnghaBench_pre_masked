
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_8__ TYPE_3__ ;
typedef struct TYPE_7__ TYPE_2__ ;
typedef struct TYPE_6__ TYPE_1__ ;


typedef int uint32_t ;
struct TYPE_7__ {char* data; int length_hashed; int refcnt; } ;
typedef TYPE_2__ jvp_string ;
struct TYPE_6__ {int * member_0; } ;
struct TYPE_8__ {TYPE_1__ member_4; int member_3; int member_2; int member_1; int member_0; } ;
typedef TYPE_3__ jv ;


 int VAR_0 ;
 int FUNC_0 (int) ;
 TYPE_2__* FUNC_1 (int) ;
 int FUNC_2 (int,char*) ;
 char* FUNC_3 (char const*,char const*,int*) ;

__attribute__((used)) static jv FUNC_4(const char* VAR_1, uint32_t VAR_2) {
  const char* VAR_3 = VAR_1 + VAR_2;
  const char* VAR_4 = VAR_1;
  const char* VAR_5;

  uint32_t VAR_6 = VAR_2 * 3 + 1;
  jvp_string* VAR_7 = FUNC_1(VAR_6);
  char* VAR_8 = VAR_7->data;
  int VAR_9 = 0;

  while ((VAR_4 = FUNC_3((VAR_5 = VAR_4), VAR_3, &VAR_9))) {
    if (VAR_9 == -1) {
      VAR_9 = 0xFFFD;
    }
    VAR_8 += FUNC_2(VAR_9, VAR_8);
    FUNC_0(VAR_8 < VAR_7->data + VAR_6);
  }
  VAR_2 = VAR_8 - VAR_7->data;
  VAR_7->data[VAR_2] = 0;
  VAR_7->length_hashed = VAR_2 << 1;
  jv VAR_10 = {&VAR_0, 0, 0, 0, VAR_7->refcnt};
  return VAR_10;
}
