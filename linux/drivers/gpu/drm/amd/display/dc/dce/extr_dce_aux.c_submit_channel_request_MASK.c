
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_4__ TYPE_2__ ;
typedef struct TYPE_3__ TYPE_1__ ;


typedef size_t uint32_t ;
struct dce_aux {TYPE_2__* ddc; } ;
struct aux_request_transaction_data {scalar_t__ type; scalar_t__ action; size_t length; size_t* data; int address; int delay; } ;
struct aux_engine_dce110 {int timeout_period; } ;
struct TYPE_4__ {TYPE_1__* pin_data; } ;
struct TYPE_3__ {int en; } ;


 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int VAR_3 ;
 int VAR_4 ;
 int VAR_5 ;
 int VAR_6 ;
 int VAR_7 ;
 int VAR_8 ;
 int VAR_9 ;
 int VAR_10 ;
 int VAR_11 ;
 int VAR_12 ;
 int VAR_13 ;
 int VAR_14 ;
 int VAR_15 ;
 int VAR_16 ;
 int VAR_17 ;
 int VAR_18 ;
 scalar_t__ VAR_19 ;
 scalar_t__ VAR_20 ;
 size_t FUNC_0 (int ) ;
 int FUNC_1 (scalar_t__,int ) ;
 int FUNC_2 (int ) ;
 int VAR_21 ;
 int FUNC_3 (int ,int ,scalar_t__,int ,size_t,size_t*) ;
 struct aux_engine_dce110* FUNC_4 (struct dce_aux*) ;
 scalar_t__ VAR_22 ;
 scalar_t__ VAR_23 ;
 scalar_t__ VAR_24 ;
 scalar_t__ FUNC_5 (int ) ;
 size_t FUNC_6 (int ,size_t,int ,size_t) ;
 size_t FUNC_7 (int ,size_t,int ,int ,int ,int ) ;
 int FUNC_8 (int ,int ,int) ;
 int FUNC_9 (int ,int ,int ,int ,size_t) ;
 size_t FUNC_10 (int ,int ,int ,int ,int ,int ,int,int ,int ) ;
 int FUNC_11 (int ,int ,int,int ,int ) ;
 int FUNC_12 (int ,int ,int ,int,int) ;

__attribute__((used)) static void FUNC_13(
 struct dce_aux *VAR_25,
 struct aux_request_transaction_data *VAR_26)
{
 struct aux_engine_dce110 *VAR_27 = FUNC_4(VAR_25);
 uint32_t VAR_28;
 uint32_t VAR_29;

 bool VAR_30 =
  ((VAR_26->type == VAR_19) &&
   (VAR_26->action == VAR_22)) ||
  ((VAR_26->type == VAR_20) &&
  ((VAR_26->action == VAR_23) ||
   (VAR_26->action == VAR_24)));
 if (FUNC_5(VAR_1)) {

  FUNC_11(VAR_1,
    VAR_0, 1,
    VAR_0, 0);

  FUNC_11(VAR_5,
    VAR_4, 1,
    VAR_4, 0);


  FUNC_11(VAR_1,
    VAR_2, 1,
    VAR_3, 0);



  FUNC_11(VAR_5,
    VAR_6, 1,
    VAR_6, 0);
 }

 FUNC_8(VAR_7, VAR_13, 1);

 FUNC_12(VAR_17, VAR_12, 0,
    10, VAR_27->timeout_period/10);
 VAR_29 = VAR_26->length ? 4 : 3;
 if (VAR_30)
  VAR_29 += VAR_26->length;

 FUNC_9(VAR_9,
   VAR_16, VAR_26->delay,
   VAR_18, VAR_29);


 VAR_28 = FUNC_10(VAR_10,
   VAR_15, 0,
   VAR_11, 0,
   VAR_8, 1,
   VAR_10, FUNC_1(VAR_26->action, VAR_26->address));

 VAR_28 = FUNC_7(VAR_10, VAR_28,
   VAR_8, 0,
   VAR_10, FUNC_2(VAR_26->address));

 VAR_28 = FUNC_6(VAR_10, VAR_28,
   VAR_10, FUNC_0(VAR_26->address));

 if (VAR_26->length) {
  VAR_28 = FUNC_6(VAR_10, VAR_28,
    VAR_10, VAR_26->length - 1);
 }

 if (VAR_30) {





  uint32_t VAR_31 = 0;

  while (VAR_31 < VAR_26->length) {
   VAR_28 = FUNC_6(VAR_10, VAR_28,
     VAR_10, VAR_26->data[VAR_31]);

   ++VAR_31;
  }
 }

 FUNC_8(VAR_9, VAR_14, 1);
 FUNC_3(VAR_25->ddc->pin_data->en, VAR_21,
     VAR_26->action, VAR_26->address, VAR_26->length, VAR_26->data);
}
