
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct object_id {int dummy; } ;
typedef int path ;
typedef enum object_type { ____Placeholder_object_type } object_type ;


 int VAR_0 ;
 int FUNC_0 (int) ;
 int FUNC_1 (char*,int ) ;
 int FUNC_2 (char*) ;
 int FUNC_3 (struct object_id*) ;
 void* FUNC_4 (struct object_id*,int*,unsigned long*) ;
 scalar_t__ FUNC_5 (int,void*,unsigned long) ;
 int FUNC_6 (char*) ;
 int FUNC_7 (char*,int,char*) ;

__attribute__((used)) static char *FUNC_8(struct object_id *VAR_1)
{
 static char VAR_2[50];
 void *VAR_3;
 enum object_type VAR_4;
 unsigned long VAR_5;
 int VAR_6;

 VAR_3 = FUNC_4(VAR_1, &VAR_4, &VAR_5);
 if (!VAR_3 || VAR_4 != VAR_0)
  FUNC_1("unable to read blob object %s", FUNC_3(VAR_1));

 FUNC_7(VAR_2, sizeof(VAR_2), ".merge_file_XXXXXX");
 VAR_6 = FUNC_6(VAR_2);
 if (FUNC_5(VAR_6, VAR_3, VAR_5) < 0)
  FUNC_2("unable to write temp-file");
 FUNC_0(VAR_6);
 return VAR_2;
}
