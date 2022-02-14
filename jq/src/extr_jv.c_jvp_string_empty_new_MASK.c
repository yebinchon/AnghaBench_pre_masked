
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_8__ TYPE_3__ ;
typedef struct TYPE_7__ TYPE_2__ ;
typedef struct TYPE_6__ TYPE_1__ ;


typedef int uint32_t ;
struct TYPE_7__ {int refcnt; int data; scalar_t__ length_hashed; } ;
typedef TYPE_2__ jvp_string ;
struct TYPE_6__ {int * member_0; } ;
struct TYPE_8__ {TYPE_1__ member_4; int member_3; int member_2; int member_1; int member_0; } ;
typedef TYPE_3__ jv ;


 int VAR_0 ;
 TYPE_2__* FUNC_0 (int ) ;
 int FUNC_1 (int ,int ,int ) ;

__attribute__((used)) static jv FUNC_2(uint32_t VAR_1) {
  jvp_string* VAR_2 = FUNC_0(VAR_1);
  VAR_2->length_hashed = 0;
  FUNC_1(VAR_2->data, 0, VAR_1);
  jv VAR_3 = {&VAR_0, 0, 0, 0, VAR_2->refcnt};
  return VAR_3;
}
