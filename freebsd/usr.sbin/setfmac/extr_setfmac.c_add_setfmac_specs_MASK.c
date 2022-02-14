
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


struct label_specs {int head; } ;
struct label_spec {int nentries; TYPE_1__* entries; } ;
struct TYPE_2__ {char* mactext; int flags; } ;


 int VAR_0 ;
 int FUNC_0 (int *,struct label_spec*,int ) ;
 TYPE_1__* FUNC_1 (int,int) ;
 int FUNC_2 (int,char*) ;
 int VAR_1 ;
 struct label_spec* FUNC_3 (int) ;

void
FUNC_4(struct label_specs *VAR_2, char *VAR_3)
{
 struct label_spec *VAR_4;

 VAR_4 = FUNC_3(sizeof(*VAR_4));
 if (VAR_4 == ((void*)0))
  FUNC_2(1, "malloc");
 VAR_4->nentries = 1;
 VAR_4->entries = FUNC_1(VAR_4->nentries, sizeof(*VAR_4->entries));
 if (VAR_4->entries == ((void*)0))
  FUNC_2(1, "malloc");

 VAR_4->entries->mactext = VAR_3;
 VAR_4->entries->flags |= VAR_0;
 FUNC_0(&VAR_2->head, VAR_4, VAR_1);
}
