
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int __be64 ;


 int VAR_0 ;
 int VAR_1 ;
 int FUNC_0 (int) ;
 int FUNC_1 (char*,int,...) ;

__attribute__((used)) static void FUNC_2(__be64 VAR_2[], __be64 VAR_3[], int VAR_4)
{
 __be64 VAR_5 = VAR_1, VAR_6 = VAR_1;
 bool VAR_7 = 0;
 int VAR_8;

 for (VAR_8 = 0; VAR_8 < VAR_4; VAR_8++) {
  __be64 VAR_9 = FUNC_0(VAR_2[VAR_8]);
  __be64 VAR_10 = FUNC_0(VAR_3[VAR_8]);

  if (VAR_9 != VAR_5 || VAR_10 != VAR_6) {
   if (VAR_7) {
    FUNC_1("PE[..%03x] A/B: as above\n", VAR_8-1);
    VAR_7 = 0;
   }
   VAR_5 = VAR_9;
   VAR_6 = VAR_10;
   if (VAR_9 & VAR_0 ||
       VAR_10 & VAR_0)
    FUNC_1("PE[%03x] A/B: %016llx %016llx\n",
     VAR_8, VAR_9, VAR_10);
  } else if (!VAR_7 && (VAR_9 & VAR_0 ||
        VAR_10 & VAR_0)) {
   VAR_7 = 1;
  }
 }
}
