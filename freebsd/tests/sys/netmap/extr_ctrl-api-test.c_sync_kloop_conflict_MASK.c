
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct timespec {int tv_sec; } ;
struct nmreq_opt_csb {int dummy; } ;
struct TestContext {int * sem; } ;
typedef int sem_t ;
typedef int pthread_t ;


 int VAR_0 ;
 void* VAR_1 ;
 void* VAR_2 ;
 int FUNC_0 (struct TestContext*) ;
 int FUNC_1 (int ,struct timespec*) ;
 int VAR_3 ;
 int FUNC_2 (struct TestContext*) ;
 int FUNC_3 (char*,char*,...) ;
 int FUNC_4 (int *,int *,int ,struct TestContext*) ;
 int FUNC_5 (int ,void**) ;
 int FUNC_6 (struct TestContext*,struct nmreq_opt_csb*) ;
 int FUNC_7 (int *) ;
 int FUNC_8 (int *,int ,int ) ;
 int FUNC_9 (int *,struct timespec*) ;
 char* FUNC_10 (int) ;
 int FUNC_11 (struct TestContext*) ;
 int VAR_4 ;

__attribute__((used)) static int
FUNC_12(struct TestContext *VAR_5)
{
 struct nmreq_opt_csb VAR_6;
 pthread_t VAR_7, VAR_8;
 void *VAR_9 = VAR_1, *VAR_10 = VAR_1;
 struct timespec VAR_11;
 sem_t VAR_12;
 int VAR_13 = 0;
 int VAR_14;

 VAR_14 = FUNC_6(VAR_5, &VAR_6);
 if (VAR_14 != 0) {
  return VAR_14;
 }

 VAR_14 = FUNC_2(VAR_5);
 if (VAR_14 != 0) {
  return VAR_14;
 }
 FUNC_0(VAR_5);

 VAR_14 = FUNC_8(&VAR_12, 0, 0);
 if (VAR_14 != 0) {
  FUNC_3("sem_init() failed: %s\n", FUNC_10(VAR_14));
  return VAR_14;
 }
 VAR_5->sem = &VAR_12;

 VAR_14 = FUNC_4(&VAR_7, ((void*)0), VAR_4, VAR_5);
 VAR_13 |= VAR_14;
 if (VAR_14 != 0) {
  FUNC_3("pthread_create(kloop1): %s\n", FUNC_10(VAR_14));
 }

 VAR_14 = FUNC_4(&VAR_8, ((void*)0), VAR_4, VAR_5);
 VAR_13 |= VAR_14;
 if (VAR_14 != 0) {
  FUNC_3("pthread_create(kloop2): %s\n", FUNC_10(VAR_14));
 }




 FUNC_1(VAR_0, &VAR_11);
 VAR_11.tv_sec += 2;
 VAR_14 = FUNC_9(&VAR_12, &VAR_11);
 VAR_13 |= VAR_14;
 if (VAR_14 != 0) {
  FUNC_3("sem_timedwait() failed: %s\n", FUNC_10(VAR_3));
 }

 VAR_13 |= FUNC_11(VAR_5);

 VAR_14 = FUNC_5(VAR_7, &VAR_9);
 VAR_13 |= VAR_14;
 if (VAR_14 != 0) {
  FUNC_3("pthread_join(kloop1): %s\n", FUNC_10(VAR_14));
 }

 VAR_14 = FUNC_5(VAR_8, &VAR_10);
 VAR_13 |= VAR_14;
 if (VAR_14 != 0) {
  FUNC_3("pthread_join(kloop2): %s %d\n", FUNC_10(VAR_14), VAR_14);
 }

 FUNC_7(&VAR_12);
 VAR_5->sem = ((void*)0);
 if (VAR_13) {
  return VAR_13;
 }


 return ((VAR_9 == VAR_2 && VAR_10 == VAR_1) ||
   (VAR_9 == VAR_1 && VAR_10 == VAR_2))
                ? 0
                : -1;
}
