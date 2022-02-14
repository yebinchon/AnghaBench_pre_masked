
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_8__ TYPE_2__ ;
typedef struct TYPE_7__ TYPE_1__ ;


struct TYPE_7__ {int id; } ;
typedef TYPE_1__ object_data ;
struct TYPE_8__ {size_t len; char* data; int type; } ;
typedef TYPE_2__ git_rawobj ;
typedef int git_oid ;
typedef int git_odb_stream ;
typedef int git_odb ;


 int FUNC_0 (int) ;
 int FUNC_1 (int ) ;
 int FUNC_2 (TYPE_2__*,TYPE_1__*) ;
 int FUNC_3 (int *) ;
 int FUNC_4 (int **,char*) ;
 int FUNC_5 (int **,size_t*,int *,int *,int *) ;
 int FUNC_6 (int *) ;
 int FUNC_7 (int *,char*,size_t) ;
 int FUNC_8 (int *,int ) ;
 int FUNC_9 (TYPE_1__*) ;

__attribute__((used)) static void FUNC_10(object_data *VAR_0, size_t VAR_1)
{
 git_oid VAR_2;
 git_odb *VAR_3;
 git_odb_stream *VAR_4;
 git_rawobj VAR_5;
 char VAR_6[2048], *VAR_7 = VAR_6;
 size_t VAR_8;
 int VAR_9;

 FUNC_9(VAR_0);

 FUNC_1(FUNC_4(&VAR_3, "test-objects"));
 FUNC_1(FUNC_8(&VAR_2, VAR_0->id));
 FUNC_1(FUNC_5(&VAR_4, &VAR_5.len, &VAR_5.type, VAR_3, &VAR_2));

 VAR_8 = VAR_5.len;

 while (VAR_8) {
  FUNC_0((VAR_9 = FUNC_7(VAR_4, VAR_7, VAR_1)) >= 0);
  if (VAR_9 == 0)
   break;

  FUNC_0(VAR_8 >= (size_t)VAR_9);
  VAR_8 -= VAR_9;
  VAR_7 += VAR_9;
 }

 FUNC_0(VAR_8 == 0);

 VAR_5.data = VAR_6;

 FUNC_2(&VAR_5, VAR_0);

 FUNC_6(VAR_4);
 FUNC_3(VAR_3);
}
