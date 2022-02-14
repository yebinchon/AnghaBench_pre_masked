
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct nmreq {int nr_version; int nr_name; } ;


 int VAR_0 ;
 int FUNC_0 (struct nmreq*,int ,int) ;
 int FUNC_1 (int ,char*,int) ;

__attribute__((used)) static void
FUNC_2(struct nmreq *VAR_1, char *VAR_2)
{

 FUNC_0(VAR_1, 0, sizeof(*VAR_1));
 FUNC_1(VAR_1->nr_name, VAR_2, sizeof(VAR_1->nr_name));
 VAR_1->nr_version = VAR_0;
}
