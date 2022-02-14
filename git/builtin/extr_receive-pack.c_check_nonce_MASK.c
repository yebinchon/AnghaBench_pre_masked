
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef scalar_t__ timestamp_t ;


 char* VAR_0 ;
 char* VAR_1 ;
 char* VAR_2 ;
 char* VAR_3 ;
 char* VAR_4 ;
 char* FUNC_0 (char const*,size_t,char*,int *) ;
 int FUNC_1 (char*) ;
 scalar_t__ FUNC_2 (long) ;
 long VAR_5 ;
 scalar_t__ VAR_6 ;
 scalar_t__ FUNC_3 (char*,char**,int) ;
 char* FUNC_4 (int ,scalar_t__) ;
 char* VAR_7 ;
 int VAR_8 ;
 int VAR_9 ;
 scalar_t__ FUNC_5 (char*,char*) ;
 char* FUNC_6 (char*) ;

__attribute__((used)) static const char *FUNC_7(const char *VAR_10, size_t VAR_11)
{
 char *VAR_12 = FUNC_0(VAR_10, VAR_11, "nonce", ((void*)0));
 timestamp_t VAR_13, VAR_14;
 char *VAR_15, *VAR_16 = ((void*)0);
 const char *VAR_17 = VAR_0;

 if (!VAR_12) {
  VAR_17 = VAR_1;
  goto leave;
 } else if (!VAR_7) {
  VAR_17 = VAR_4;
  goto leave;
 } else if (!FUNC_5(VAR_7, VAR_12)) {
  VAR_17 = VAR_2;
  goto leave;
 }

 if (!VAR_9) {

  VAR_17 = VAR_0;
  goto leave;
 }
 if (*VAR_12 <= '0' || '9' < *VAR_12) {
  VAR_17 = VAR_0;
  goto leave;
 }
 VAR_13 = FUNC_3(VAR_12, &VAR_15, 10);
 if (VAR_15 == VAR_12 || VAR_15[0] != '-') {
  VAR_17 = VAR_0;
  goto leave;
 }

 VAR_16 = FUNC_4(VAR_8, VAR_13);
 if (FUNC_5(VAR_16, VAR_12)) {

  VAR_17 = VAR_0;
  goto leave;
 }






 VAR_14 = FUNC_3(VAR_7, ((void*)0), 10);
 VAR_5 = (long)VAR_14 - (long)VAR_13;

 if (VAR_6 &&
     FUNC_2(VAR_5) <= VAR_6) {





  FUNC_1((void *)VAR_7);
  VAR_7 = FUNC_6(VAR_12);
  VAR_17 = VAR_2;
 } else {
  VAR_17 = VAR_3;
 }

leave:
 FUNC_1(VAR_12);
 FUNC_1(VAR_16);
 return VAR_17;
}
