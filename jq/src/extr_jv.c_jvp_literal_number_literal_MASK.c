
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_10__ TYPE_2__ ;
typedef struct TYPE_9__ TYPE_1__ ;


struct TYPE_9__ {char const* literal_data; } ;
typedef TYPE_1__ jvp_literal_number ;
typedef int jv ;
struct TYPE_10__ {int digits; } ;
typedef TYPE_2__ decNumber ;


 char const* VAR_0 ;
 char const* VAR_1 ;
 int VAR_2 ;
 int FUNC_0 (int ,int ) ;
 int FUNC_1 (int ) ;
 scalar_t__ FUNC_2 (TYPE_2__*) ;
 scalar_t__ FUNC_3 (TYPE_2__*) ;
 scalar_t__ FUNC_4 (TYPE_2__*) ;
 int FUNC_5 (TYPE_2__*,char const*) ;
 char const* FUNC_6 (int) ;
 TYPE_2__* FUNC_7 (int ) ;
 TYPE_1__* FUNC_8 (int ) ;

__attribute__((used)) static const char* FUNC_9(jv VAR_3) {
  FUNC_1(FUNC_0(VAR_3, VAR_2));
  decNumber *VAR_4 = FUNC_7(VAR_3);
  jvp_literal_number* VAR_5 = FUNC_8(VAR_3);

  if (FUNC_3(VAR_4)) {
    return "null";
  }

  if (FUNC_2(VAR_4)) {

    if (FUNC_4(VAR_4)) {
      return VAR_1;
    } else {
      return VAR_0;
    }
  }

  if (VAR_5->literal_data == ((void*)0)) {
    int VAR_6 = FUNC_7(VAR_3)->digits + 14;
    VAR_5->literal_data = FUNC_6(VAR_6);




    FUNC_5(VAR_4, VAR_5->literal_data);
  }

  return VAR_5->literal_data;
}
