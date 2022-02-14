
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct object_id {int dummy; } ;


 int VAR_0 ;
 int FUNC_0 (char*) ;
 int FUNC_1 (int ) ;
 char* FUNC_2 (struct object_id const*) ;
 scalar_t__ FUNC_3 (char const**,int ) ;

__attribute__((used)) static void FUNC_4(const struct object_id *VAR_1, int VAR_2)
{
 int VAR_3 = 0;
 const char *VAR_4[6];

 VAR_4[VAR_3++] = "read-tree";
 if (VAR_2)
  VAR_4[VAR_3++] = "-v";
 VAR_4[VAR_3++] = "--reset";
 VAR_4[VAR_3++] = "-u";
 VAR_4[VAR_3++] = FUNC_2(VAR_1);
 VAR_4[VAR_3] = ((void*)0);

 if (FUNC_3(VAR_4, VAR_0))
  FUNC_1(FUNC_0("read-tree failed"));
}
