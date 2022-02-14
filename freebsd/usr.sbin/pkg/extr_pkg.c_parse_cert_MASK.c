
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct sig_cert {int siglen; int cert; void* certlen; void* sig; } ;
struct sbuf {int dummy; } ;
typedef int ssize_t ;
typedef int FILE ;


 void* FUNC_0 (int,int) ;
 int FUNC_1 (int) ;
 int FUNC_2 (int) ;
 int FUNC_3 (int *) ;
 int * FUNC_4 (int,char*) ;
 int FUNC_5 (char**,size_t*,int *) ;
 int FUNC_6 (int,int ,int ) ;
 int FUNC_7 (void*,int ,int) ;
 int FUNC_8 (struct sbuf*,char*,int ) ;
 int FUNC_9 (struct sbuf*) ;
 int FUNC_10 (struct sbuf*) ;
 int FUNC_11 (struct sbuf*) ;
 void* FUNC_12 (struct sbuf*) ;
 struct sbuf* FUNC_13 () ;
 int FUNC_14 (struct sbuf*,void*) ;
 scalar_t__ FUNC_15 (char*,char*) ;
 int FUNC_16 (int ) ;
 int FUNC_17 (char*) ;
 int FUNC_18 (char*) ;

__attribute__((used)) static struct sig_cert *
FUNC_19(int VAR_0) {
 int VAR_1;
 struct sig_cert *VAR_2;
 FILE *VAR_3;
 struct sbuf *VAR_4, *VAR_5, *VAR_6;
 char *VAR_7;
 size_t VAR_8;
 ssize_t VAR_9;

 VAR_4 = ((void*)0);
 VAR_1 = -1;
 VAR_2 = ((void*)0);
 VAR_7 = ((void*)0);
 VAR_8 = 0;

 if (FUNC_6(VAR_0, 0, 0) == -1) {
  FUNC_17("lseek");
  return (((void*)0));
 }


 if ((VAR_1 = FUNC_2(VAR_0)) == -1) {
  FUNC_18("dup");
  return (((void*)0));
 }

 if ((VAR_3 = FUNC_4(VAR_1, "rb")) == ((void*)0)) {
  FUNC_17("fdopen");
  FUNC_1(VAR_1);
  return (((void*)0));
 }

 VAR_5 = FUNC_13();
 VAR_6 = FUNC_13();

 while ((VAR_9 = FUNC_5(&VAR_7, &VAR_8, VAR_3)) > 0) {
  if (FUNC_15(VAR_7, "SIGNATURE\n") == 0) {
   VAR_4 = VAR_5;
   continue;
  } else if (FUNC_15(VAR_7, "CERT\n") == 0) {
   VAR_4 = VAR_6;
   continue;
  } else if (FUNC_15(VAR_7, "END\n") == 0) {
   break;
  }
  if (VAR_4 != ((void*)0))
   FUNC_8(VAR_4, VAR_7, VAR_9);
 }

 FUNC_3(VAR_3);


 FUNC_14(VAR_5, FUNC_12(VAR_5) - 1);

 FUNC_11(VAR_5);
 FUNC_11(VAR_6);

 VAR_2 = FUNC_0(1, sizeof(struct sig_cert));
 VAR_2->siglen = FUNC_12(VAR_5);
 VAR_2->sig = FUNC_0(1, VAR_2->siglen);
 FUNC_7(VAR_2->sig, FUNC_9(VAR_5), VAR_2->siglen);

 VAR_2->certlen = FUNC_12(VAR_6);
 VAR_2->cert = FUNC_16(FUNC_9(VAR_6));

 FUNC_10(VAR_5);
 FUNC_10(VAR_6);

 return (VAR_2);
}
