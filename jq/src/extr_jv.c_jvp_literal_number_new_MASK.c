
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_14__ TYPE_4__ ;
typedef struct TYPE_13__ TYPE_3__ ;
typedef struct TYPE_12__ TYPE_2__ ;
typedef struct TYPE_11__ TYPE_1__ ;


struct TYPE_12__ {int refcnt; int num_double; int num_decimal; int * literal_data; } ;
typedef TYPE_2__ jvp_literal_number ;
struct TYPE_11__ {int * member_0; } ;
struct TYPE_13__ {TYPE_1__ member_4; int member_3; int member_2; int member_1; int member_0; } ;
typedef TYPE_3__ jv ;
struct TYPE_14__ {int status; } ;
typedef TYPE_4__ decContext ;


 TYPE_4__* FUNC_0 () ;
 int VAR_0 ;
 int VAR_1 ;
 TYPE_3__ VAR_2 ;
 int VAR_3 ;
 int VAR_4 ;
 int VAR_5 ;
 int FUNC_1 (int *,char const*,TYPE_4__*) ;
 int FUNC_2 (TYPE_2__*) ;
 TYPE_2__* FUNC_3 (int ) ;
 int FUNC_4 (char const*) ;

__attribute__((used)) static jv FUNC_5(const char * VAR_6) {

  jvp_literal_number * VAR_7 = FUNC_3(FUNC_4(VAR_6));

  VAR_7->refcnt = VAR_4;
  VAR_7->literal_data = ((void*)0);
  decContext *VAR_8 = FUNC_0();
  FUNC_1(&VAR_7->num_decimal, VAR_6, VAR_8);
  VAR_7->num_double = VAR_5;

  if (VAR_8->status & VAR_0) {
    FUNC_2(VAR_7);
    return VAR_2;
  }

  jv VAR_9 = {&VAR_1, 0, 0, VAR_3, VAR_7->refcnt};
  return VAR_9;
}
