
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct nmreq_header {int nr_name; int nr_version; } ;


 int VAR_0 ;
 int FUNC_0 (struct nmreq_header*,int ,int) ;
 int FUNC_1 (int ,char const*,int) ;

__attribute__((used)) static void
FUNC_2(struct nmreq_header *VAR_1, const char *VAR_2)
{
 FUNC_0(VAR_1, 0, sizeof(*VAR_1));
 VAR_1->nr_version = VAR_0;
 FUNC_1(VAR_1->nr_name, VAR_2, sizeof(VAR_1->nr_name) - 1);
}
