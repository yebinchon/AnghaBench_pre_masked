
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef scalar_t__ u32 ;
struct tpm_space {int* context_tbl; int* session_tbl; int session_buf; int context_buf; } ;
struct tpm_chip {int dev; struct tpm_space work_space; } ;


 int FUNC_0 (int*) ;
 int VAR_0 ;
 int VAR_1 ;
 int FUNC_1 (int *,char*) ;
 int FUNC_2 (int *,char*) ;
 int FUNC_3 (struct tpm_chip*) ;
 int FUNC_4 (struct tpm_chip*,int ,unsigned int*,scalar_t__*) ;

__attribute__((used)) static int FUNC_5(struct tpm_chip *VAR_2)
{
 struct tpm_space *VAR_3 = &VAR_2->work_space;
 unsigned int VAR_4;
 int VAR_5;
 int VAR_6;

 for (VAR_5 = 0, VAR_4 = 0; VAR_5 < FUNC_0(VAR_3->context_tbl); VAR_5++) {
  if (!VAR_3->context_tbl[VAR_5])
   continue;


  if (~VAR_3->context_tbl[VAR_5]) {
   FUNC_1(&VAR_2->dev, "context table is inconsistent");
   return -VAR_0;
  }

  VAR_6 = FUNC_4(VAR_2, VAR_3->context_buf, &VAR_4,
           &VAR_3->context_tbl[VAR_5]);
  if (VAR_6)
   return VAR_6;
 }

 for (VAR_5 = 0, VAR_4 = 0; VAR_5 < FUNC_0(VAR_3->session_tbl); VAR_5++) {
  u32 VAR_7;

  if (!VAR_3->session_tbl[VAR_5])
   continue;

  VAR_6 = FUNC_4(VAR_2, VAR_3->session_buf,
           &VAR_4, &VAR_7);
  if (VAR_6 == -VAR_1) {

   VAR_3->session_tbl[VAR_5] = 0;
  } else if (VAR_6) {
   FUNC_3(VAR_2);
   return VAR_6;
  }
  if (VAR_7 != VAR_3->session_tbl[VAR_5]) {
   FUNC_2(&VAR_2->dev, "session restored to wrong handle\n");
   FUNC_3(VAR_2);
   return -VAR_0;
  }
 }

 return 0;
}
