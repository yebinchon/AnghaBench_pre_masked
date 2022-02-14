
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct tpm_space {int * session_tbl; int session_buf; int * context_tbl; int context_buf; } ;
struct tpm_chip {struct tpm_space work_space; } ;


 int FUNC_0 (int *) ;
 int VAR_0 ;
 int VAR_1 ;
 int FUNC_1 (struct tpm_chip*,int ) ;
 int FUNC_2 (struct tpm_chip*) ;
 int FUNC_3 (struct tpm_chip*,int ,int ,int ,unsigned int*) ;

__attribute__((used)) static int FUNC_4(struct tpm_chip *VAR_2)
{
 struct tpm_space *VAR_3 = &VAR_2->work_space;
 unsigned int VAR_4;
 int VAR_5;
 int VAR_6;

 for (VAR_5 = 0, VAR_4 = 0; VAR_5 < FUNC_0(VAR_3->context_tbl); VAR_5++) {
  if (!(VAR_3->context_tbl[VAR_5] && ~VAR_3->context_tbl[VAR_5]))
   continue;

  VAR_6 = FUNC_3(VAR_2, VAR_3->context_tbl[VAR_5],
           VAR_3->context_buf, VAR_1,
           &VAR_4);
  if (VAR_6 == -VAR_0) {
   VAR_3->context_tbl[VAR_5] = 0;
   continue;
  } else if (VAR_6)
   return VAR_6;

  FUNC_1(VAR_2, VAR_3->context_tbl[VAR_5]);
  VAR_3->context_tbl[VAR_5] = ~0;
 }

 for (VAR_5 = 0, VAR_4 = 0; VAR_5 < FUNC_0(VAR_3->session_tbl); VAR_5++) {
  if (!VAR_3->session_tbl[VAR_5])
   continue;

  VAR_6 = FUNC_3(VAR_2, VAR_3->session_tbl[VAR_5],
           VAR_3->session_buf, VAR_1,
           &VAR_4);

  if (VAR_6 == -VAR_0) {

   VAR_3->session_tbl[VAR_5] = 0;
  } else if (VAR_6 < 0) {
   FUNC_2(VAR_2);
   return VAR_6;
  }
 }

 return 0;
}
