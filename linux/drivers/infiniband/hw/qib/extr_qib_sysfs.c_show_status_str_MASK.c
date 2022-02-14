
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int u64 ;
struct qib_pportdata {int* statusp; } ;
typedef int ssize_t ;


 int VAR_0 ;
 scalar_t__ VAR_1 ;
 char** VAR_2 ;
 scalar_t__ FUNC_0 (char*,char*,scalar_t__) ;
 int FUNC_1 (char*) ;

__attribute__((used)) static ssize_t FUNC_2(struct qib_pportdata *VAR_3, char *VAR_4)
{
 int VAR_5, VAR_6;
 u64 VAR_7;
 ssize_t VAR_8;

 if (!VAR_3->statusp) {
  VAR_8 = -VAR_0;
  goto bail;
 }

 VAR_7 = *(VAR_3->statusp);
 *VAR_4 = '\0';
 for (VAR_6 = VAR_5 = 0; VAR_7 && VAR_2[VAR_5]; VAR_5++) {
  if (VAR_7 & 1) {

   if (VAR_6 && FUNC_0(VAR_4, " ", VAR_1) >= VAR_1)
    break;
   if (FUNC_0(VAR_4, VAR_2[VAR_5], VAR_1) >=
     VAR_1)
    break;
   VAR_6 = 1;
  }
  VAR_7 >>= 1;
 }
 if (VAR_6)
  FUNC_0(VAR_4, "\n", VAR_1);

 VAR_8 = FUNC_1(VAR_4);

bail:
 return VAR_8;
}
