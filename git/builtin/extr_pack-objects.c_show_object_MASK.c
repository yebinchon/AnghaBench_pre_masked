
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct object_entry {int dummy; } ;
struct object {int oid; int flags; int type; } ;


 int VAR_0 ;
 int FUNC_0 (int *,int ,char const*,int ) ;
 int FUNC_1 (char const*) ;
 int FUNC_2 (int *,struct object_entry*,unsigned int) ;
 unsigned int FUNC_3 (int *,struct object_entry*) ;
 struct object_entry* FUNC_4 (int *,int *) ;
 char* FUNC_5 (char const*,char) ;
 int VAR_1 ;
 scalar_t__ VAR_2 ;

__attribute__((used)) static void FUNC_6(struct object *VAR_3, const char *VAR_4, void *VAR_5)
{
 FUNC_1(VAR_4);
 FUNC_0(&VAR_3->oid, VAR_3->type, VAR_4, 0);
 VAR_3->flags |= VAR_0;

 if (VAR_2) {
  const char *VAR_6;
  unsigned VAR_7;
  struct object_entry *VAR_8;


  VAR_7 = *VAR_4 ? 1 : 0;
  for (VAR_6 = FUNC_5(VAR_4, '/'); VAR_6; VAR_6 = FUNC_5(VAR_6 + 1, '/'))
   VAR_7++;

  VAR_8 = FUNC_4(&VAR_1, &VAR_3->oid);
  if (VAR_8 && VAR_7 > FUNC_3(&VAR_1, VAR_8))
   FUNC_2(&VAR_1, VAR_8, VAR_7);
 }
}
