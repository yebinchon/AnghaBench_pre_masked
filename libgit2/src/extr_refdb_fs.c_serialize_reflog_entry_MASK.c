
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_9__ TYPE_1__ ;


typedef int git_signature ;
typedef int git_oid ;
struct TYPE_9__ {int size; char* ptr; } ;
typedef TYPE_1__ git_buf ;


 int VAR_0 ;
 int FUNC_0 (TYPE_1__*) ;
 int FUNC_1 (TYPE_1__*) ;
 int FUNC_2 (TYPE_1__*,char) ;
 int FUNC_3 (TYPE_1__*,char const*) ;
 int FUNC_4 (TYPE_1__*) ;
 int FUNC_5 (char*,int,int const*) ;
 int FUNC_6 (TYPE_1__*,char*,int const*) ;

__attribute__((used)) static int FUNC_7(
 git_buf *VAR_1,
 const git_oid *VAR_2,
 const git_oid *VAR_3,
 const git_signature *VAR_4,
 const char *VAR_5)
{
 char VAR_6[VAR_0+1];
 char VAR_7[VAR_0+1];

 FUNC_5(VAR_6, VAR_0+1, VAR_2);
 FUNC_5(VAR_7, VAR_0+1, VAR_3);

 FUNC_0(VAR_1);

 FUNC_3(VAR_1, VAR_6);
 FUNC_2(VAR_1, ' ');
 FUNC_3(VAR_1, VAR_7);

 FUNC_6(VAR_1, " ", VAR_4);


 FUNC_4(VAR_1);

 if (VAR_5) {
  size_t VAR_8;

  FUNC_2(VAR_1, '\t');
  FUNC_3(VAR_1, VAR_5);

  for (VAR_8 = 0; VAR_8 < VAR_1->size - 2; VAR_8++)
   if (VAR_1->ptr[VAR_8] == '\n')
    VAR_1->ptr[VAR_8] = ' ';
  FUNC_4(VAR_1);
 }

 FUNC_2(VAR_1, '\n');

 return FUNC_1(VAR_1);
}
