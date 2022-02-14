
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_4__ TYPE_1__ ;


typedef int uint8_t ;
struct TYPE_4__ {scalar_t__ len; } ;
typedef TYPE_1__ tokenstr_t ;
typedef int ssize_t ;
typedef int FILE ;


 int FUNC_0 (int) ;
 int FUNC_1 (int ,int ) ;
 int VAR_0 ;
 int FUNC_2 (char*) ;
 int FUNC_3 (char*,char*,char const*) ;
 int FUNC_4 (TYPE_1__*,int *,int) ;
 int FUNC_5 (int *,TYPE_1__*,char*,int ) ;
 int FUNC_6 (int *,int **) ;
 int FUNC_7 (int *) ;
 int * FUNC_8 (char*,int,char*) ;
 int FUNC_9 (int *) ;
 int FUNC_10 (char*) ;

__attribute__((used)) static bool
FUNC_11(const char *VAR_1, FILE *VAR_2)
{
 uint8_t *VAR_3;
 tokenstr_t VAR_4;
 ssize_t VAR_5 = 1024;
 char VAR_6[VAR_5];
 char VAR_7[] = ",";
 int VAR_8, VAR_9 = 0;
 FILE *VAR_10;







 FUNC_0((VAR_10 = FUNC_8(VAR_6, VAR_5, "w")) != ((void*)0));
 FUNC_0((VAR_8 = FUNC_6(VAR_2, &VAR_3)) != -1);





 while (VAR_9 < VAR_8) {
  if (FUNC_4(&VAR_4, VAR_3 + VAR_9, VAR_8 - VAR_9) == -1) {
   FUNC_10("au_read_rec");
   FUNC_2("Incomplete Audit Record");
  }


  FUNC_5(VAR_10, &VAR_4, VAR_7, VAR_0);
  VAR_9 += VAR_4.len;
 }

 FUNC_9(VAR_3);
 FUNC_1(0, FUNC_7(VAR_10));
 return (FUNC_3("%s", VAR_6, VAR_1));
}
