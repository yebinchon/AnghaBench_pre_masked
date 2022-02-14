
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int u32 ;
struct rtas_validate_flash_t {int update_results; scalar_t__ status; int buf; int buf_size; } ;
typedef scalar_t__ s32 ;


 int VAR_0 ;
 scalar_t__ FUNC_0 (int ) ;
 int FUNC_1 (int ,int ,int ) ;
 scalar_t__ FUNC_2 (scalar_t__) ;
 scalar_t__ FUNC_3 (int,int,int,int*,int ,int ) ;
 int VAR_1 ;
 int VAR_2 ;
 int FUNC_4 (char*) ;
 int FUNC_5 (int *) ;
 int FUNC_6 (int *) ;

__attribute__((used)) static void FUNC_7(struct rtas_validate_flash_t *VAR_3)
{
 int VAR_4 = FUNC_4("ibm,validate-flash-image");
 int VAR_5;
 s32 VAR_6;

 VAR_6 = 0;
 do {
  FUNC_5(&VAR_2);
  FUNC_1(VAR_1, VAR_3->buf, VAR_0);
  VAR_6 = FUNC_3(VAR_4, 2, 2, &VAR_5,
          (u32) FUNC_0(VAR_1), VAR_3->buf_size);
  FUNC_1(VAR_3->buf, VAR_1, VAR_0);
  FUNC_6(&VAR_2);
 } while (FUNC_2(VAR_6));

 VAR_3->status = VAR_6;
 VAR_3->update_results = VAR_5;
}
