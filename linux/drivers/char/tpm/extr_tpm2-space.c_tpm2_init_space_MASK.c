
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct tpm_space {void* context_buf; int * session_buf; } ;


 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int FUNC_0 (void*) ;
 void* FUNC_1 (int ,int ) ;

int FUNC_2(struct tpm_space *VAR_3)
{
 VAR_3->context_buf = FUNC_1(VAR_2, VAR_1);
 if (!VAR_3->context_buf)
  return -VAR_0;

 VAR_3->session_buf = FUNC_1(VAR_2, VAR_1);
 if (VAR_3->session_buf == ((void*)0)) {
  FUNC_0(VAR_3->context_buf);
  return -VAR_0;
 }

 return 0;
}
