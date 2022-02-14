
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct sbuf {int dummy; } ;
struct pubkey {int siglen; void* sig; } ;
typedef int buf ;


 void* FUNC_0 (int,int) ;
 int FUNC_1 (int,int ,int ) ;
 int FUNC_2 (void*,int ,int) ;
 int FUNC_3 (int,char*,int) ;
 int FUNC_4 (struct sbuf*,char*,int) ;
 int FUNC_5 (struct sbuf*) ;
 int FUNC_6 (struct sbuf*) ;
 int FUNC_7 (struct sbuf*) ;
 int FUNC_8 (struct sbuf*) ;
 struct sbuf* FUNC_9 () ;
 int FUNC_10 (char*) ;

__attribute__((used)) static struct pubkey *
FUNC_11(int VAR_0)
{
 struct pubkey *VAR_1;
 struct sbuf *VAR_2;
 char VAR_3[4096];
 int VAR_4;

 if (FUNC_1(VAR_0, 0, 0) == -1) {
  FUNC_10("lseek");
  return (((void*)0));
 }

 VAR_2 = FUNC_9();

 while ((VAR_4 = FUNC_3(VAR_0, VAR_3, sizeof(VAR_3))) >0) {
  FUNC_4(VAR_2, VAR_3, VAR_4);
 }

 FUNC_7(VAR_2);
 VAR_1 = FUNC_0(1, sizeof(struct pubkey));
 VAR_1->siglen = FUNC_8(VAR_2);
 VAR_1->sig = FUNC_0(1, VAR_1->siglen);
 FUNC_2(VAR_1->sig, FUNC_5(VAR_2), VAR_1->siglen);
 FUNC_6(VAR_2);

 return (VAR_1);
}
