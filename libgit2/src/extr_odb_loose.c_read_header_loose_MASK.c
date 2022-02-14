
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_9__ TYPE_2__ ;
typedef struct TYPE_8__ TYPE_1__ ;


typedef scalar_t__ ssize_t ;
typedef int obj ;
struct TYPE_8__ {int type; int * data; } ;
typedef TYPE_1__ git_rawobj ;
struct TYPE_9__ {int ptr; } ;
typedef TYPE_2__ git_buf ;


 int VAR_0 ;
 int FUNC_0 (int) ;
 scalar_t__ FUNC_1 (TYPE_2__*) ;
 int FUNC_2 (int ,char*) ;
 int FUNC_3 (int ) ;
 int FUNC_4 (int ) ;
 int FUNC_5 (unsigned char*,size_t) ;
 int FUNC_6 (int) ;
 scalar_t__ FUNC_7 (int,unsigned char*,int) ;
 int FUNC_8 (TYPE_1__*,unsigned char*,size_t) ;
 int FUNC_9 (TYPE_1__*,unsigned char*,size_t) ;

__attribute__((used)) static int FUNC_10(git_rawobj *VAR_1, git_buf *VAR_2)
{
 unsigned char VAR_3[1024];
 ssize_t VAR_4;
 int VAR_5, VAR_6;

 FUNC_0(VAR_1 && VAR_2);

 if (FUNC_1(VAR_2))
  return -1;

 VAR_1->data = ((void*)0);

 if ((VAR_6 = VAR_5 = FUNC_3(VAR_2->ptr)) < 0)
  goto done;

 if ((VAR_4 = FUNC_7(VAR_5, VAR_3, sizeof(VAR_3))) < 0) {
  VAR_6 = (int)VAR_4;
  goto done;
 }

 if (!FUNC_5(VAR_3, (size_t)VAR_4))
  VAR_6 = FUNC_8(VAR_1, VAR_3, (size_t)VAR_4);
 else
  VAR_6 = FUNC_9(VAR_1, VAR_3, (size_t)VAR_4);

 if (!VAR_6 && !FUNC_4(VAR_1->type)) {
  FUNC_2(VAR_0, "failed to read loose object header");
  VAR_6 = -1;
  goto done;
 }

done:
 if (VAR_5 >= 0)
  FUNC_6(VAR_5);
 return VAR_6;
}
