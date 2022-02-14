
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef void* u8 ;
struct kcs_bmc {int phase; int data_in_avail; void* error; int data_out_idx; void** data_out; int data_out_len; int queue; int data_in_idx; void** data_in; } ;


 int VAR_0 ;
 int VAR_1 ;
 void* VAR_2 ;
 void* VAR_3 ;
 int VAR_4 ;


 void* VAR_5 ;


 int VAR_6 ;


 void* VAR_7 ;
 int VAR_8 ;
 int VAR_9 ;
 int FUNC_0 (struct kcs_bmc*) ;
 void* FUNC_1 (struct kcs_bmc*) ;
 int FUNC_2 (struct kcs_bmc*,int ) ;
 int FUNC_3 (int *) ;
 int FUNC_4 (struct kcs_bmc*,void*) ;

__attribute__((used)) static void FUNC_5(struct kcs_bmc *VAR_10)
{
 u8 VAR_11;

 switch (VAR_10->phase) {
 case 128:
  VAR_10->phase = 130;


 case 130:
  if (VAR_10->data_in_idx < VAR_4) {
   FUNC_2(VAR_10, VAR_9);
   FUNC_4(VAR_10, VAR_7);
   VAR_10->data_in[VAR_10->data_in_idx++] =
      FUNC_1(VAR_10);
  } else {
   FUNC_0(VAR_10);
   VAR_10->error = VAR_3;
  }
  break;

 case 129:
  if (VAR_10->data_in_idx < VAR_4) {
   FUNC_2(VAR_10, VAR_8);
   VAR_10->data_in[VAR_10->data_in_idx++] =
      FUNC_1(VAR_10);
   VAR_10->phase = VAR_6;
   VAR_10->data_in_avail = 1;
   FUNC_3(&VAR_10->queue);
  } else {
   FUNC_0(VAR_10);
   VAR_10->error = VAR_3;
  }
  break;

 case 131:
  if (VAR_10->data_out_idx == VAR_10->data_out_len)
   FUNC_2(VAR_10, VAR_1);

  VAR_11 = FUNC_1(VAR_10);
  if (VAR_11 != VAR_2) {
   FUNC_2(VAR_10, VAR_0);
   FUNC_4(VAR_10, VAR_7);
   break;
  }

  if (VAR_10->data_out_idx == VAR_10->data_out_len) {
   FUNC_4(VAR_10, VAR_7);
   VAR_10->phase = VAR_5;
   break;
  }

  FUNC_4(VAR_10,
   VAR_10->data_out[VAR_10->data_out_idx++]);
  break;

 case 133:
  FUNC_2(VAR_10, VAR_8);
  FUNC_1(VAR_10);
  FUNC_4(VAR_10, VAR_10->error);
  VAR_10->phase = 132;
  break;

 case 132:
  FUNC_2(VAR_10, VAR_1);
  FUNC_1(VAR_10);
  FUNC_4(VAR_10, VAR_7);
  VAR_10->phase = VAR_5;
  break;

 default:
  FUNC_0(VAR_10);
  break;
 }
}
