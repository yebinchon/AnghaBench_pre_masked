
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct packed_git {int pack_name; scalar_t__ index_data; } ;


 int FUNC_0 (char*) ;
 int FUNC_1 (char*,struct packed_git*) ;
 int FUNC_2 (char*) ;
 int FUNC_3 (int ,char*,size_t*) ;
 char* FUNC_4 (char*,int,int ) ;

int FUNC_5(struct packed_git *VAR_0)
{
 char *VAR_1;
 size_t VAR_2;
 int VAR_3;

 if (VAR_0->index_data)
  return 0;

 if (!FUNC_3(VAR_0->pack_name, ".pack", &VAR_2))
  FUNC_0("pack_name does not end in .pack");
 VAR_1 = FUNC_4("%.*s.idx", (int)VAR_2, VAR_0->pack_name);
 VAR_3 = FUNC_1(VAR_1, VAR_0);
 FUNC_2(VAR_1);
 return VAR_3;
}
