
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_16__ TYPE_1__ ;


typedef scalar_t__ ssize_t ;
struct TYPE_16__ {scalar_t__ size; int ptr; } ;
typedef TYPE_1__ git_buf ;


 TYPE_1__ VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int VAR_3 ;
 int VAR_4 ;
 int FUNC_0 (TYPE_1__*) ;
 int FUNC_1 (TYPE_1__*,int ,int ) ;
 int FUNC_2 (TYPE_1__*,char) ;
 scalar_t__ FUNC_3 (TYPE_1__*,char) ;
 int FUNC_4 (TYPE_1__*) ;
 int FUNC_5 (TYPE_1__*,int ,scalar_t__) ;
 int FUNC_6 (TYPE_1__*,TYPE_1__*) ;
 int FUNC_7 (TYPE_1__*,int ) ;
 int FUNC_8 (TYPE_1__*,int ) ;
 int FUNC_9 (TYPE_1__*,int ) ;
 scalar_t__ FUNC_10 (int ) ;

__attribute__((used)) static bool FUNC_11(git_buf *VAR_5, git_buf *VAR_6)
{


 if (FUNC_9(VAR_5, VAR_1)) {
  git_buf VAR_7 = VAR_0;
  FUNC_1(&VAR_7, VAR_5->ptr, VAR_1);

  FUNC_7(&VAR_7, VAR_7.ptr);
  FUNC_4(&VAR_7);

  if (FUNC_10(VAR_7.ptr)) {
   FUNC_1(VAR_6, VAR_5->ptr, VAR_7.ptr);
  } else {
   FUNC_6(VAR_6, &VAR_7);
  }

  FUNC_0(&VAR_7);
 }
 else {
  FUNC_5(VAR_6, VAR_5->ptr, VAR_5->size);
 }


 if (FUNC_3(VAR_6, '/') != (ssize_t)VAR_6->size - 1)
  FUNC_2(VAR_6, '/');


 if (FUNC_9(VAR_5, VAR_2) == 0)
  return 0;


 if (FUNC_8(VAR_6, VAR_3) == 0)
  return 0;
 if (FUNC_8(VAR_6, VAR_4) == 0)
  return 0;

 return 1;
}
