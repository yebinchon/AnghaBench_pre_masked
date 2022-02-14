
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int off_t ;
typedef int FILE ;


 int VAR_0 ;
 char* VAR_1 ;
 size_t VAR_2 ;
 int FUNC_0 (char*,int,int ,int *) ;
 int FUNC_1 (char*) ;
 scalar_t__ FUNC_2 (char*,int,int,int *) ;
 char* FUNC_3 (int ) ;
 scalar_t__ VAR_3 ;
 int VAR_4 ;

__attribute__((used)) static off_t
FUNC_4(FILE *VAR_5, FILE *VAR_6, char *VAR_7, size_t VAR_8,
     off_t *VAR_9)
{
 off_t VAR_10, VAR_11 = 0;
 char *VAR_12;

 VAR_12 = FUNC_3(VAR_0);
 if (VAR_12 == ((void*)0))
  return -1;


 VAR_2 = VAR_8;
 if (VAR_8 != 0)
  VAR_1 = VAR_7;
 else
  VAR_1 = ((void*)0);

 while ((VAR_10 = FUNC_0(VAR_12, 1, VAR_0, VAR_5)) != 0) {
  if (VAR_3 == 0 && (off_t)FUNC_2(VAR_12, 1, VAR_10, VAR_6) != VAR_10) {
   FUNC_1(VAR_12);
   return -1;
  }
  VAR_11 += VAR_10;
 }

 if (VAR_9)
  *VAR_9 = VAR_4;

 FUNC_1(VAR_12);
 return VAR_11;
}
