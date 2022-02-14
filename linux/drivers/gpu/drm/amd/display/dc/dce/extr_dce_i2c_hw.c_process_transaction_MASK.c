
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int uint8_t ;
typedef scalar_t__ uint32_t ;
struct i2c_request_transaction_data {int action; int address; int status; int * data; scalar_t__ length; } ;
struct dce_i2c_hw {int transaction_count; int buffer_used_bytes; scalar_t__ buffer_used_write; } ;


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
 scalar_t__ FUNC_0 (int ,scalar_t__,int ,int,int ,int ) ;
 scalar_t__ FUNC_1 (int ,int ,int ,int,int ,int ,int ,int ,int ,int) ;
 int FUNC_2 (int ,int ,int,int ,int,int ,int,int ,scalar_t__,int ,int) ;
 scalar_t__ FUNC_3 (struct dce_i2c_hw*) ;

__attribute__((used)) static bool FUNC_4(
 struct dce_i2c_hw *VAR_16,
 struct i2c_request_transaction_data *VAR_17)
{
 uint32_t VAR_18 = VAR_17->length;
 uint8_t *VAR_19 = VAR_17->data;

 bool VAR_20 = 0;
 uint32_t VAR_21 = 0;

 if (FUNC_3(VAR_16)) {
  VAR_17->status = VAR_15;
  return 0;
 }

 VAR_20 = ((VAR_16->transaction_count == 3) ||
   (VAR_17->action == VAR_1) ||
   (VAR_17->action & VAR_0));


 switch (VAR_16->transaction_count) {
 case 0:
  FUNC_2(VAR_11,
     VAR_10, 1,
     VAR_8, 1,
     VAR_7, 0 != (VAR_17->action & VAR_0),
     VAR_2, VAR_18,
     VAR_9, VAR_20 ? 1 : 0);
  break;
 case 1:
  FUNC_2(VAR_12,
     VAR_10, 1,
     VAR_8, 1,
     VAR_7, 0 != (VAR_17->action & VAR_0),
     VAR_2, VAR_18,
     VAR_9, VAR_20 ? 1 : 0);
  break;
 case 2:
  FUNC_2(VAR_13,
     VAR_10, 1,
     VAR_8, 1,
     VAR_7, 0 != (VAR_17->action & VAR_0),
     VAR_2, VAR_18,
     VAR_9, VAR_20 ? 1 : 0);
  break;
 case 3:
  FUNC_2(VAR_14,
     VAR_10, 1,
     VAR_8, 1,
     VAR_7, 0 != (VAR_17->action & VAR_0),
     VAR_2, VAR_18,
     VAR_9, VAR_20 ? 1 : 0);
  break;
 default:

  break;
 }
 if (VAR_16->transaction_count == 0) {
  VAR_21 = FUNC_1(VAR_3, 0,
      VAR_4, 0,
      VAR_3, VAR_17->address,
      VAR_5, 0,
      VAR_6, 1);
  VAR_16->buffer_used_write = 0;
 } else
  VAR_21 = FUNC_0(VAR_3, 0,
     VAR_4, 0,
     VAR_3, VAR_17->address);

 VAR_16->buffer_used_write++;

 if (!(VAR_17->action & VAR_0)) {
  while (VAR_18) {
   FUNC_0(VAR_3, VAR_21,
      VAR_6, 0,
      VAR_3, *VAR_19++);
   VAR_16->buffer_used_write++;
   --VAR_18;
  }
 }

 ++VAR_16->transaction_count;
 VAR_16->buffer_used_bytes += VAR_18 + 1;

 return VAR_20;
}
