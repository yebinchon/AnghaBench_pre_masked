
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct rmid_entry {int rmid; int list; } ;
struct rdt_resource {int num_rmid; } ;


 int VAR_0 ;
 int VAR_1 ;
 int FUNC_0 (int *) ;
 struct rmid_entry* FUNC_1 (int ) ;
 struct rmid_entry* FUNC_2 (int,int,int ) ;
 int FUNC_3 (int *,int *) ;
 int FUNC_4 (int *) ;
 int VAR_2 ;
 struct rmid_entry* VAR_3 ;

__attribute__((used)) static int FUNC_5(struct rdt_resource *VAR_4)
{
 struct rmid_entry *VAR_5 = ((void*)0);
 int VAR_6, VAR_7;

 VAR_7 = VAR_4->num_rmid;
 VAR_3 = FUNC_2(VAR_7, sizeof(struct rmid_entry), VAR_1);
 if (!VAR_3)
  return -VAR_0;

 for (VAR_6 = 0; VAR_6 < VAR_7; VAR_6++) {
  VAR_5 = &VAR_3[VAR_6];
  FUNC_0(&VAR_5->list);

  VAR_5->rmid = VAR_6;
  FUNC_3(&VAR_5->list, &VAR_2);
 }





 VAR_5 = FUNC_1(0);
 FUNC_4(&VAR_5->list);

 return 0;
}
