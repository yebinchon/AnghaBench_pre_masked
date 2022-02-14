
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct dce_i2c_hw {scalar_t__ buffer_used_bytes; scalar_t__ transaction_count; } ;


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
 int FUNC_0 (int ,int ) ;
 int FUNC_1 (int ,int ,int) ;
 int FUNC_2 (int ,int ,int ,int ,int ,int ,int ,int ,int ,int ,scalar_t__) ;
 int FUNC_3 (int ,int,int ,int ,int ,int ,int ,int ,int ,int ,int ,int ) ;
 int VAR_12 ;

__attribute__((used)) static void FUNC_4(
 struct dce_i2c_hw *VAR_13)
{
 FUNC_3(VAR_12, 5,
       FUNC_0(VAR_6, VAR_2), 0,
       FUNC_0(VAR_6, VAR_1), 0,
       FUNC_0(VAR_6, VAR_3), 0,
       FUNC_0(VAR_6, VAR_5), 0,
       FUNC_0(VAR_6, VAR_4), 0);


 FUNC_2(VAR_0,
       VAR_9, 0,
       VAR_10, 0,
       VAR_8, 0,
       VAR_7, 0,
       VAR_11, VAR_13->transaction_count - 1);


 FUNC_1(VAR_0, VAR_7, 1);




 VAR_13->transaction_count = 0;
 VAR_13->buffer_used_bytes = 0;
}
