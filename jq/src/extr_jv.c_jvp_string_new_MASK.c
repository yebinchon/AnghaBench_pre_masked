
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_8__ TYPE_3__ ;
typedef struct TYPE_7__ TYPE_2__ ;
typedef struct TYPE_6__ TYPE_1__ ;


typedef int uint32_t ;
struct TYPE_7__ {int length_hashed; int refcnt; scalar_t__* data; } ;
typedef TYPE_2__ jvp_string ;
struct TYPE_6__ {int * member_0; } ;
struct TYPE_8__ {TYPE_1__ member_4; int member_3; int member_2; int member_1; int member_0; } ;
typedef TYPE_3__ jv ;


 int VAR_0 ;
 TYPE_2__* FUNC_0 (int) ;
 int FUNC_1 (scalar_t__*,char const*,int) ;

__attribute__((used)) static jv FUNC_2(const char* VAR_1, uint32_t VAR_2) {
  jvp_string* VAR_3 = FUNC_0(VAR_2);
  VAR_3->length_hashed = VAR_2 << 1;
  if (VAR_1 != ((void*)0))
    FUNC_1(VAR_3->data, VAR_1, VAR_2);
  VAR_3->data[VAR_2] = 0;
  jv VAR_4 = {&VAR_0, 0, 0, 0, VAR_3->refcnt};
  return VAR_4;
}
