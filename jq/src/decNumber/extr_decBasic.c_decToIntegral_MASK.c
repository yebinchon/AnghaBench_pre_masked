
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_5__ TYPE_1__ ;


typedef int uInt ;
typedef enum rounding { ____Placeholder_rounding } rounding ;
typedef int decFloat ;
struct TYPE_5__ {int round; int status; } ;
typedef TYPE_1__ decContext ;
typedef scalar_t__ Int ;
typedef int Flag ;


 scalar_t__ VAR_0 ;
 scalar_t__* VAR_1 ;
 scalar_t__ FUNC_0 (int const*) ;
 int FUNC_1 (int const*,int ) ;
 scalar_t__ FUNC_2 (scalar_t__) ;
 scalar_t__ FUNC_3 (int const*) ;
 int * FUNC_4 (int *,int const*) ;
 int FUNC_5 (int *,int const*,int *,TYPE_1__*) ;
 int FUNC_6 (int *) ;
 int * FUNC_7 (int *,int const*) ;
 int * FUNC_8 (int *,int const*,int *,TYPE_1__*) ;

__attribute__((used)) static decFloat * FUNC_9(decFloat *VAR_2, const decFloat *VAR_3,
                                decContext *VAR_4, enum rounding VAR_5,
                                Flag VAR_6) {
  Int VAR_7;
  uInt VAR_8;
  enum rounding VAR_9;
  uInt VAR_10;
  decFloat VAR_11;


  VAR_8=FUNC_1(VAR_3, 0);
  VAR_7=VAR_1[VAR_8>>26];

  if (FUNC_2(VAR_7)) {

    if (FUNC_0(VAR_3)) return FUNC_8(VAR_2, VAR_3, ((void*)0), VAR_4);

    return FUNC_7(VAR_2, VAR_3);
    }



  VAR_7+=FUNC_3(VAR_3)-VAR_0;

  if (VAR_7>=0) return FUNC_4(VAR_2, VAR_3);

  VAR_9=VAR_4->round;
  VAR_10=VAR_4->status;
  VAR_4->round=VAR_5;
  FUNC_6(&VAR_11);
  FUNC_5(VAR_2, VAR_3, &VAR_11, VAR_4);
  VAR_4->round=VAR_9;
  if (!VAR_6) VAR_4->status=VAR_10;
  return VAR_2;
  }
