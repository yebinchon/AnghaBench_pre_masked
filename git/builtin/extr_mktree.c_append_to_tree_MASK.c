
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct treeent {unsigned int mode; size_t len; int oid; } ;
struct object_id {int dummy; } ;


 int FUNC_0 (struct treeent**,scalar_t__,int ) ;
 int FUNC_1 (struct treeent*,int ,char*,size_t) ;
 int VAR_0 ;
 int FUNC_2 (char*,char*) ;
 struct treeent** VAR_1 ;
 int VAR_2 ;
 int FUNC_3 (int *,struct object_id*) ;
 scalar_t__ FUNC_4 (char*,char) ;
 size_t FUNC_5 (char*) ;
 scalar_t__ VAR_3 ;

__attribute__((used)) static void FUNC_6(unsigned VAR_4, struct object_id *VAR_5, char *VAR_6)
{
 struct treeent *VAR_7;
 size_t VAR_8 = FUNC_5(VAR_6);
 if (FUNC_4(VAR_6, '/'))
  FUNC_2("path %s contains slash", VAR_6);

 FUNC_1(VAR_7, VAR_2, VAR_6, VAR_8);
 VAR_7->mode = VAR_4;
 VAR_7->len = VAR_8;
 FUNC_3(&VAR_7->oid, VAR_5);

 FUNC_0(VAR_1, VAR_3 + 1, VAR_0);
 VAR_1[VAR_3++] = VAR_7;
}
