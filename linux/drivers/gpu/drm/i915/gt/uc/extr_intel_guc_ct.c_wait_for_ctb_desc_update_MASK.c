
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int u32 ;
struct guc_ct_buffer_desc {int status; int is_in_error; int fence; } ;


 int FUNC_0 (char*,int ,int ) ;
 int VAR_0 ;
 scalar_t__ FUNC_1 (int ) ;
 int VAR_1 ;
 int FUNC_2 (struct guc_ct_buffer_desc*) ;
 scalar_t__ FUNC_3 (int) ;
 int FUNC_4 (int ,int) ;
 int FUNC_5 (int ,int) ;

__attribute__((used)) static int FUNC_6(struct guc_ct_buffer_desc *VAR_2,
        u32 VAR_3,
        u32 *VAR_4)
{
 int VAR_5;







 VAR_5 = FUNC_5((FUNC_0(VAR_2->fence) == VAR_3), 10);
 if (VAR_5)
  VAR_5 = FUNC_4((FUNC_0(VAR_2->fence) == VAR_3), 10);


 if (FUNC_3(VAR_5)) {
  FUNC_0("CT: fence %u failed; reported fence=%u\n",
     VAR_3, VAR_2->fence);

  if (FUNC_1(VAR_2->is_in_error)) {



   FUNC_2(VAR_2);
   VAR_5 = -VAR_0;
  }
 }

 *VAR_4 = VAR_2->status;
 return VAR_5;
}
