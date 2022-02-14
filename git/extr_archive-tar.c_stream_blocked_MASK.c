
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct object_id {int dummy; } ;
struct git_istream {int dummy; } ;
typedef scalar_t__ ssize_t ;
typedef enum object_type { ____Placeholder_object_type } object_type ;
typedef int buf ;


 int VAR_0 ;
 int FUNC_0 (char*) ;
 int FUNC_1 (struct git_istream*) ;
 int FUNC_2 (char*,scalar_t__) ;
 int FUNC_3 (int ,int ) ;
 int FUNC_4 () ;
 int FUNC_5 (struct object_id const*) ;
 struct git_istream* FUNC_6 (struct object_id const*,int*,unsigned long*,int *) ;
 scalar_t__ FUNC_7 (struct git_istream*,char*,int) ;

__attribute__((used)) static int FUNC_8(const struct object_id *VAR_1)
{
 struct git_istream *VAR_2;
 enum object_type VAR_3;
 unsigned long VAR_4;
 char VAR_5[VAR_0];
 ssize_t VAR_6;

 VAR_2 = FUNC_6(VAR_1, &VAR_3, &VAR_4, ((void*)0));
 if (!VAR_2)
  return FUNC_3(FUNC_0("cannot stream blob %s"), FUNC_5(VAR_1));
 for (;;) {
  VAR_6 = FUNC_7(VAR_2, VAR_5, sizeof(VAR_5));
  if (VAR_6 <= 0)
   break;
  FUNC_2(VAR_5, VAR_6);
 }
 FUNC_1(VAR_2);
 if (!VAR_6)
  FUNC_4();
 return VAR_6;
}
