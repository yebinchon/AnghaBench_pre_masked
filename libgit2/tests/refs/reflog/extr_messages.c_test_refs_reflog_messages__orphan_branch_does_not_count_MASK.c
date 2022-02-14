
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int git_oid ;


 int VAR_0 ;
 int FUNC_0 (int ) ;
 int FUNC_1 (int ,int ,int ,char*,char*,int *,char const*) ;
 int VAR_1 ;
 int FUNC_2 (int *,char*) ;
 int FUNC_3 (int ,char*) ;
 int FUNC_4 (int ,int *) ;

void FUNC_5(void)
{
 git_oid VAR_2;
 const char *VAR_3;


 VAR_3 = "checkout: moving from master to e90810b8df3e80c413d903f631643c716887138d";
 FUNC_2(&VAR_2, "e90810b8df3e80c413d903f631643c716887138d");
 FUNC_0(FUNC_4(VAR_1, &VAR_2));
 FUNC_1(VAR_1, VAR_0, 0,
  "a65fedf39aefe402d3bb6e24df4d4f5fe4547750",
  "e90810b8df3e80c413d903f631643c716887138d",
  ((void*)0), VAR_3);


 FUNC_0(FUNC_3(VAR_1, "refs/heads/orphan"));
 FUNC_1(VAR_1, VAR_0, 0,
  "a65fedf39aefe402d3bb6e24df4d4f5fe4547750",
  "e90810b8df3e80c413d903f631643c716887138d",
  ((void*)0), VAR_3);


 VAR_3 = "checkout: moving from orphan to haacked";
 FUNC_0(FUNC_3(VAR_1, "refs/heads/haacked"));
 FUNC_1(VAR_1, VAR_0, 0,
  "0000000000000000000000000000000000000000",
  "258f0e2a959a364e40ed6603d5d44fbb24765b10",
  ((void*)0), VAR_3);
}
