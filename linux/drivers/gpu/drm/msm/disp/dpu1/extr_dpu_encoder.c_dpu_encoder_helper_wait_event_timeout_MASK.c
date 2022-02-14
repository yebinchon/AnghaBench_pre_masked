
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct dpu_encoder_wait_info {scalar_t__ timeout_ms; int atomic_cnt; int * wq; } ;
typedef scalar_t__ s64 ;
typedef int int32_t ;


 scalar_t__ FUNC_0 (int ) ;
 int FUNC_1 () ;
 scalar_t__ FUNC_2 (int ) ;
 scalar_t__ FUNC_3 (scalar_t__) ;
 int FUNC_4 (int ,int ,int,scalar_t__,scalar_t__,scalar_t__) ;
 int FUNC_5 (int ,int,scalar_t__) ;

__attribute__((used)) static int FUNC_6(
  int32_t VAR_0,
  int32_t VAR_1,
  struct dpu_encoder_wait_info *VAR_2)
{
 int VAR_3 = 0;
 s64 VAR_4 = FUNC_2(FUNC_1()) + VAR_2->timeout_ms;
 s64 VAR_5 = FUNC_3(VAR_2->timeout_ms);
 s64 VAR_6;

 do {
  VAR_3 = FUNC_5(*(VAR_2->wq),
    FUNC_0(VAR_2->atomic_cnt) == 0, VAR_5);
  VAR_6 = FUNC_2(FUNC_1());

  FUNC_4(VAR_0, VAR_1, VAR_3, VAR_6,
       VAR_4,
       FUNC_0(VAR_2->atomic_cnt));

 } while (FUNC_0(VAR_2->atomic_cnt) && (VAR_3 == 0) &&
   (VAR_6 < VAR_4));

 return VAR_3;
}
